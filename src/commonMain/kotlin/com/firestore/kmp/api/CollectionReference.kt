package com.firestore.kmp.api

import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.*
import kotlinx.coroutines.flow.Flow

/**
 * A reference to a Firestore collection.
 */
class CollectionReference(
    private val path: String,
    private val client: FirestoreHttpClient
) {
    /**
     * Gets a reference to a document in this collection.
     */
    fun document(id: String): DocumentReference {
        val documentPath = if (path.isEmpty()) id else "$path/$id"
        return DocumentReference(documentPath, client)
    }
    
    /**
     * Adds a document to this collection with an auto-generated ID.
     */
    suspend fun add(data: Map<String, Any?>): DocumentSnapshot {
        val documentId = generateDocumentId()
        val documentRef = document(documentId)
        return documentRef.set(data)
    }
    
    /**
     * Gets all documents in this collection.
     */
    suspend fun get(): QuerySnapshot {
        val query = Query(this, client)
        return query.get()
    }
    
    /**
     * Creates a query that filters documents.
     */
    fun where(field: String, operator: String, value: Any?): Query {
        val query = Query(this, client)
        return query.where(field, operator, value)
    }
    
    /**
     * Creates a query that orders documents.
     */
    fun orderBy(field: String, direction: String = "ASCENDING"): Query {
        val query = Query(this, client)
        return query.orderBy(field, direction)
    }
    
    /**
     * Creates a query that limits the number of results.
     */
    fun limit(count: Int): Query {
        val query = Query(this, client)
        return query.limit(count)
    }
    
    /**
     * Creates a query that starts at a specific document.
     */
    fun startAt(vararg fieldValues: Any?): Query {
        val query = Query(this, client)
        return query.startAt(*fieldValues)
    }
    
    /**
     * Creates a query that ends at a specific document.
     */
    fun endAt(vararg fieldValues: Any?): Query {
        val query = Query(this, client)
        return query.endAt(*fieldValues)
    }
    
    /**
     * Creates a query that starts after a specific document.
     */
    fun startAfter(vararg fieldValues: Any?): Query {
        val query = Query(this, client)
        return query.startAfter(*fieldValues)
    }
    
    /**
     * Creates a query that ends before a specific document.
     */
    fun endBefore(vararg fieldValues: Any?): Query {
        val query = Query(this, client)
        return query.endBefore(*fieldValues)
    }
    
    /**
     * Listens to real-time updates for this collection.
     */
    fun snapshots(pollIntervalMs: Long = 2000): Flow<QuerySnapshot> {
        val query = Query(this, client)
        return query.snapshots(pollIntervalMs)
    }
    
    /**
     * Gets the path of this collection.
     */
    fun path(): String = path
    
    /**
     * Gets the ID of this collection.
     */
    fun id(): String {
        return path.split("/").lastOrNull() ?: ""
    }
    
    private fun generateDocumentId(): String {
        // Generate a random document ID (similar to Firestore SDK)
        val chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
        return (1..20).map { chars.random() }.joinToString("")
    }
}

