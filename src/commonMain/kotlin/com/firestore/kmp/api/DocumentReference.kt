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
     * For creating a document with a specific ID, POST to the collection path with documentId as query parameter.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun set(data: Map<String, Any?>): DocumentSnapshot {
        val fields = FirestoreSerializer.toFirestoreFields(data)
        
        // Extract collection path and document ID from the full path
        // Path format: "collection/document" or "collection/subcollection/document"
        val pathParts = path.split("/").filter { it.isNotEmpty() }
        if (pathParts.isEmpty()) {
            throw com.firestore.kmp.errors.FirestoreException.InvalidArgumentException("Document path cannot be empty")
        }
        
        val documentId = pathParts.lastOrNull() ?: ""
        val collectionPath = if (pathParts.size > 1) {
            pathParts.dropLast(1).joinToString("/")
        } else {
            throw com.firestore.kmp.errors.FirestoreException.InvalidArgumentException("Collection path cannot be empty")
        }
        
        // For creating with specific ID, POST to collection with documentId as query parameter
        // Request body should only contain "fields", not the full document
        val requestBody = FirestoreWriteRequest(fields = fields)
        val queryParams = mapOf("documentId" to documentId)
        
        val response: FirestoreDocument = client.post(collectionPath, requestBody, queryParams)
        
        return DocumentSnapshot(
            document = response,
            exists = true,
            id = id(),
            path = path
        )
    }
    
    /**
     * Updates the document with the given fields.
     * PATCH to document path with updateMask.fieldPaths as query parameters.
     */
    @Throws(com.firestore.kmp.errors.FirestoreException::class, kotlin.coroutines.cancellation.CancellationException::class)
    suspend fun update(fields: Map<String, Any?>): WriteResult {
        val firestoreFields = FirestoreSerializer.toFirestoreFields(fields)
        
        // For PATCH, updateMask.fieldPaths should be query parameters
        // Format: ?updateMask.fieldPaths=field1&updateMask.fieldPaths=field2
        val updateRequest = FirestoreUpdateRequest(fields = firestoreFields)
        
        // Build query parameters for updateMask - need to support multiple values for same key
        val queryParams = mutableMapOf<String, List<String>>()
        queryParams["updateMask.fieldPaths"] = fields.keys.toList()
        
        val response: FirestoreDocument = client.patch(path, updateRequest, queryParams)
        
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
        
        try {
            while (true) {
                // Check cancellation at the start of each loop
                currentCoroutineContext().ensureActive()
                
                try {
                    val currentSnapshot = get()
                    
                    // Check cancellation after network call
                    currentCoroutineContext().ensureActive()
                    
                    // Always emit to allow FlowCollector to check cancellation
                    // This ensures cancellation is checked on every poll interval
                    
                    // Check cancellation right before emitting - this is critical
                    currentCoroutineContext().ensureActive()
                    
                    try {
                        emit(currentSnapshot)
                    } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                        throw e
                    }
                    
                    // Check cancellation after emission - if collector cancelled, this will throw
                    currentCoroutineContext().ensureActive()
                    
                    // Update lastSnapshot for change detection
                    if (lastSnapshot == null || hasChanged(lastSnapshot, currentSnapshot)) {
                        lastSnapshot = currentSnapshot
                    }
                } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                    throw e
                } catch (e: com.firestore.kmp.errors.FirestoreException) {
                    // For FirestoreException, emit an error snapshot so Swift can log it
                    val errorSnapshot = DocumentSnapshot(
                        document = null,
                        exists = false,
                        id = id(),
                        path = path,
                        error = e.message ?: "Unknown Firestore error"
                    )
                    emit(errorSnapshot)
                    currentCoroutineContext().ensureActive()
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
                    currentCoroutineContext().ensureActive()
                }
                
                // Break delay into very small chunks to check cancellation frequently
                // This ensures cancellation is detected within 50ms
                val delayChunk = 50L // Check every 50ms for faster cancellation response
                var remainingDelay = pollIntervalMs
                
                while (remainingDelay > 0) {
                    // Check cancellation before each delay chunk
                    try {
                        currentCoroutineContext().ensureActive()
                    } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                        throw e
                    }
                    
                    val chunkDelay = minOf(delayChunk, remainingDelay)
                    try {
                        kotlinx.coroutines.delay(chunkDelay)
                        remainingDelay -= chunkDelay
                    } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                        throw e
                    }
                    
                    // Check cancellation after each delay chunk
                    try {
                        currentCoroutineContext().ensureActive()
                    } catch (e: kotlin.coroutines.cancellation.CancellationException) {
                        throw e
                    }
                }
            }
        } catch (e: kotlin.coroutines.cancellation.CancellationException) {
            throw e
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

