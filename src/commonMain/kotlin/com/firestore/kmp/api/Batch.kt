package com.firestore.kmp.api

import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.*
import com.firestore.kmp.serialization.FirestoreSerializer

/**
 * A batch write operation for Firestore.
 */
class Batch(
    private val client: FirestoreHttpClient
) {
    private val writes = mutableListOf<FirestoreWrite>()
    
    /**
     * Adds a set operation to the batch.
     */
    fun set(documentRef: DocumentReference, data: Map<String, Any?>): Batch {
        val fields = FirestoreSerializer.toFirestoreFields(data)
        val document = FirestoreDocument(
            name = documentRef.path(),
            fields = fields
        )
        
        writes.add(
            FirestoreWrite(
                update = document
            )
        )
        return this
    }
    
    /**
     * Adds an update operation to the batch.
     */
    fun update(documentRef: DocumentReference, fields: Map<String, Any?>): Batch {
        val firestoreFields = FirestoreSerializer.toFirestoreFields(fields)
        val document = FirestoreDocument(
            name = documentRef.path(),
            fields = firestoreFields
        )
        
        writes.add(
            FirestoreWrite(
                update = document,
                updateMask = DocumentMask(fieldPaths = fields.keys.toList())
            )
        )
        return this
    }
    
    /**
     * Adds a delete operation to the batch.
     */
    fun delete(documentRef: DocumentReference): Batch {
        writes.add(
            FirestoreWrite(
                delete = documentRef.path()
            )
        )
        return this
    }
    
    /**
     * Commits the batch write.
     */
    suspend fun commit(): WriteResult {
        if (writes.isEmpty()) {
            throw IllegalStateException("Cannot commit an empty batch")
        }
        
        val commitRequest = CommitRequest(
            writes = writes,
            transaction = null // Batch writes don't use transactions
        )
        
        val response: CommitResponse = client.post(":commit", commitRequest)
        
        // Return the last write result or create a summary
        return response.writeResults.lastOrNull() ?: WriteResult(
            updateTime = response.commitTime
        )
    }
    
    /**
     * Gets the number of operations in this batch.
     */
    fun size(): Int = writes.size
    
    /**
     * Clears all operations from this batch.
     */
    fun clear() {
        writes.clear()
    }
}

