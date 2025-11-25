package com.firestore.kmp.api

import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.errors.FirestoreException
import com.firestore.kmp.models.*
import com.firestore.kmp.serialization.FirestoreSerializer
import io.ktor.client.call.*
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.currentCoroutineContext
import kotlinx.coroutines.ensureActive
import kotlinx.coroutines.Job

/**
 * A reference to a Firestore document.
 */
class DocumentReference(
    private val path: String,
    private val client: FirestoreHttpClient
) {
    /**
     * Gets the document data.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun get(): DocumentSnapshot {
        return try {
            val response: FirestoreDocument = client.get(path)
            DocumentSnapshot(
                document = response,
                exists = true,
                id = id(),
                path = path
            )
        } catch (e: com.firestore.kmp.errors.FirestoreException.NotFoundException) {
            // Document doesn't exist
            DocumentSnapshot(
                document = null,
                exists = false,
                id = id(),
                path = path
            )
        } catch (e: Exception) {
            // Check if it's a 404 error
            val isNotFound = when {
                e is com.firestore.kmp.errors.FirestoreException.NotFoundException -> true
                e.message?.contains("404") == true -> true
                e.message?.contains("NOT_FOUND") == true -> true
                else -> {
                    // Check error message for 404 status (works on all platforms)
                    e.message?.contains("404") == true || 
                    e.message?.contains("NOT_FOUND") == true
                }
            }
            
            if (isNotFound) {
                DocumentSnapshot(
                    document = null,
                    exists = false,
                    id = id(),
                    path = path
                )
            } else {
                throw e
            }
        }
    }
    
    /**
     * Sets the document data, overwriting any existing data.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun set(data: Map<String, Any?>): DocumentSnapshot {
        val fields = FirestoreSerializer.toFirestoreFields(data)
        val document = FirestoreDocument(
            name = path,
            fields = fields
        )
        
        val response: FirestoreDocument = client.post(path, document)
        
        return DocumentSnapshot(
            document = response,
            exists = true,
            id = id(),
            path = path
        )
    }
    
    /**
     * Updates the document with the given fields.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun update(fields: Map<String, Any?>): WriteResult {
        val firestoreFields = FirestoreSerializer.toFirestoreFields(fields)
        val updateMask = DocumentMask(fieldPaths = fields.keys.toList())
        
        val document = FirestoreDocument(
            name = path,
            fields = firestoreFields
        )
        
        val updateRequest = mapOf(
            "fields" to firestoreFields,
            "updateMask" to updateMask
        )
        
        val response: FirestoreDocument = client.patch(path, updateRequest)
        
        return WriteResult(
            updateTime = response.updateTime
        )
    }
    
    /**
     * Deletes the document.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun delete(): WriteResult {
        val response: FirestoreDocument = client.delete<FirestoreDocument>(path)
        
        return WriteResult(
            updateTime = response.updateTime
        )
    }
    
    /**
     * Listens to real-time updates for this document.
     * Exceptions are caught and handled internally to prevent crashes in Swift.
     */
    fun snapshots(pollIntervalMs: Long = 2000): Flow<DocumentSnapshot> = flow {
        var lastSnapshot: DocumentSnapshot? = null
        
        // Use isActive to check cancellation - more reliable than ensureActive()
        val job = currentCoroutineContext()[Job] ?: return@flow
        while (job.isActive) {
            try {
                val currentSnapshot = get()
                
                // Check cancellation again after network call
                if (!job.isActive) {
                    break
                }
                
                // Only emit if the document has changed
                if (lastSnapshot == null || hasChanged(lastSnapshot, currentSnapshot)) {
                    emit(currentSnapshot)
                    lastSnapshot = currentSnapshot
                }
            } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                // Re-throw cancellation to properly cancel the flow
                throw e
            } catch (e: com.firestore.kmp.errors.FirestoreException) {
                // For FirestoreException, emit an error snapshot so Swift can log it
                // Create a snapshot that indicates an error occurred
                val errorSnapshot = DocumentSnapshot(
                    document = null,
                    exists = false,
                    id = id(),
                    path = path,
                    error = e.message ?: "Unknown Firestore error"
                )
                emit(errorSnapshot)
                // Also log it for debugging
                kotlin.io.println("Firestore error in listener: ${e.message}")
                // Continue polling - don't crash the Flow
            } catch (e: Exception) {
                // Wrap other exceptions and handle gracefully
                val errorSnapshot = DocumentSnapshot(
                    document = null,
                    exists = false,
                    id = id(),
                    path = path,
                    error = e.message ?: "Unknown error"
                )
                emit(errorSnapshot)
                kotlin.io.println("Unexpected error in document listener: ${e.message}")
                // Continue polling - don't crash the Flow
            }
            
            // Check cancellation before delay
            if (!job.isActive) {
                break
            }
            
            // Delay and check for cancellation - delay will throw CancellationException if cancelled
            try {
                kotlinx.coroutines.delay(pollIntervalMs)
            } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                // Re-throw cancellation to properly stop the flow
                throw e
            }
        }
    }
    
    /**
     * Gets a reference to a subcollection.
     */
    fun collection(collectionPath: String): CollectionReference {
        val fullPath = if (path.isEmpty()) collectionPath else "$path/$collectionPath"
        return CollectionReference(fullPath, client)
    }
    
    /**
     * Gets the path of this document.
     */
    fun path(): String = path
    
    /**
     * Gets the ID of this document.
     */
    fun id(): String {
        return path.split("/").lastOrNull() ?: ""
    }
    
    private fun hasChanged(old: DocumentSnapshot, new: DocumentSnapshot): Boolean {
        if (old.exists != new.exists) return true
        if (old.document == null && new.document == null) return false
        if (old.document == null || new.document == null) return true
        
        val oldFields = old.document.fields
        val newFields = new.document.fields
        
        if (oldFields.size != newFields.size) return true
        
        return oldFields.entries.any { (key, value) ->
            newFields[key] != value
        } || newFields.entries.any { (key, value) ->
            oldFields[key] != value
        }
    }
}

