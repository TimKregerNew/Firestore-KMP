package com.firestore.kmp.api

import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.*
import com.firestore.kmp.serialization.FirestoreSerializer

/**
 * A Firestore transaction for atomic operations.
 */
class Transaction(
    private val transactionId: String,
    private val client: FirestoreHttpClient
) {
    private val writes = mutableListOf<FirestoreWrite>()
    
    /**
     * Gets a document within this transaction.
     */
    suspend fun get(documentRef: DocumentReference): DocumentSnapshot {
        // In a transaction, we need to read the document first
        // The transaction ID will be used when committing
        return documentRef.get()
    }
    
    /**
     * Sets a document within this transaction.
     */
    fun set(documentRef: DocumentReference, data: Map<String, Any?>): Transaction {
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
     * Updates a document within this transaction.
     */
    fun update(documentRef: DocumentReference, fields: Map<String, Any?>): Transaction {
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
     * Deletes a document within this transaction.
     */
    fun delete(documentRef: DocumentReference): Transaction {
        writes.add(
            FirestoreWrite(
                delete = documentRef.path()
            )
        )
        return this
    }
    
    /**
     * Commits the transaction.
     */
    suspend fun commit(): TransactionResult {
        val commitRequest = CommitRequest(
            writes = writes,
            transaction = transactionId
        )
        
        val response: CommitResponse = client.post(":commit", commitRequest)
        
        return TransactionResult(
            writeResults = response.writeResults,
            commitTime = response.commitTime
        )
    }
    
    /**
     * Gets the transaction ID.
     */
    fun getTransactionId(): String = transactionId
}

/**
 * Transaction runner for Firestore.
 */
object TransactionRunner {
    /**
     * Runs a transaction with the given block.
     */
    suspend fun run(
        client: FirestoreHttpClient,
        block: suspend Transaction.() -> Unit
    ): TransactionResult {
        // Begin transaction - endpoint is at database level
        val beginRequest = TransactionRequest(
            options = TransactionOptions(
                readWrite = ReadWrite()
            )
        )
        
        // The beginTransaction endpoint is at the database level
        val beginResponse: TransactionResponse = client.post(":beginTransaction", beginRequest)
        val transactionId = beginResponse.transaction
        
        try {
            val transaction = Transaction(transactionId, client)
            block(transaction)
            return transaction.commit()
        } catch (e: Exception) {
            // Transaction failed, but we don't need to explicitly rollback
            // Firestore will handle it
            throw e
        }
    }
}

