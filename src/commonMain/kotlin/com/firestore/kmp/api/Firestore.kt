package com.firestore.kmp.api

import com.firestore.kmp.auth.FirestoreAuth
import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.TransactionResult

/**
 * Main entry point for Firestore operations.
 */
class Firestore(
    projectId: String,
    databaseId: String = "(default)",
    auth: FirestoreAuth,
    httpClient: com.firestore.kmp.client.FirestoreHttpClient? = null
) {
    private val client = httpClient ?: FirestoreHttpClient(projectId, databaseId, auth)
    
    /**
     * Gets a reference to a collection.
     */
    fun collection(path: String): CollectionReference {
        return CollectionReference(path, client)
    }
    
    /**
     * Gets a reference to a document.
     */
    fun document(path: String): DocumentReference {
        return DocumentReference(path, client)
    }
    
    /**
     * Creates a new batch write operation.
     */
    fun batch(): Batch {
        return Batch(client)
    }
    
    /**
     * Runs a transaction with the given block.
     */
    suspend fun runTransaction(block: suspend Transaction.() -> Unit): TransactionResult {
        return TransactionRunner.run(client, block)
    }
    
    /**
     * Closes the Firestore instance and underlying HTTP client.
     */
    fun close() {
        client.close()
    }
}

