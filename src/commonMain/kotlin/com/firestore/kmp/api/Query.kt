package com.firestore.kmp.api

import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.*
import com.firestore.kmp.serialization.FirestoreSerializer
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

/**
 * A query for retrieving documents from Firestore.
 */
class Query(
    private val collectionRef: CollectionReference,
    private val client: FirestoreHttpClient
) {
    private val filters = mutableListOf<FieldFilter>()
    private val orderBys = mutableListOf<Order>()
    private var limitCount: Int? = null
    private var offsetCount: Int? = null
    private var startAtCursor: Cursor? = null
    private var endAtCursor: Cursor? = null
    
    /**
     * Adds a filter to the query.
     */
    fun where(field: String, operator: String, value: Any?): Query {
        val fieldRef = FieldReference(fieldPath = field)
        val firestoreValue = FirestoreSerializer.toFirestoreValue(value)
        
        val fieldOperator = when (operator.uppercase()) {
            "<", "LESS_THAN" -> FieldOperator.LESS_THAN
            "<=", "LESS_THAN_OR_EQUAL" -> FieldOperator.LESS_THAN_OR_EQUAL
            ">", "GREATER_THAN" -> FieldOperator.GREATER_THAN
            ">=", "GREATER_THAN_OR_EQUAL" -> FieldOperator.GREATER_THAN_OR_EQUAL
            "==", "EQUAL" -> FieldOperator.EQUAL
            "!=", "NOT_EQUAL" -> FieldOperator.NOT_EQUAL
            "ARRAY_CONTAINS" -> FieldOperator.ARRAY_CONTAINS
            "IN" -> FieldOperator.IN
            "ARRAY_CONTAINS_ANY" -> FieldOperator.ARRAY_CONTAINS_ANY
            "NOT_IN" -> FieldOperator.NOT_IN
            else -> FieldOperator.EQUAL
        }
        
        filters.add(FieldFilter(field = fieldRef, op = fieldOperator, value = firestoreValue))
        return this
    }
    
    /**
     * Adds an ordering to the query.
     */
    fun orderBy(field: String, direction: String = "ASCENDING"): Query {
        val fieldRef = FieldReference(fieldPath = field)
        val orderDirection = when (direction.uppercase()) {
            "ASC", "ASCENDING" -> Direction.ASCENDING
            "DESC", "DESCENDING" -> Direction.DESCENDING
            else -> Direction.ASCENDING
        }
        
        orderBys.add(Order(field = fieldRef, direction = orderDirection))
        return this
    }
    
    /**
     * Sets the limit for the query.
     */
    fun limit(count: Int): Query {
        limitCount = count
        return this
    }
    
    /**
     * Sets the offset for the query.
     */
    fun offset(count: Int): Query {
        offsetCount = count
        return this
    }
    
    /**
     * Sets the start cursor for the query.
     */
    fun startAt(vararg fieldValues: Any?): Query {
        val values = fieldValues.map { FirestoreSerializer.toFirestoreValue(it) }
        startAtCursor = Cursor(values = values, before = false)
        return this
    }
    
    /**
     * Sets the end cursor for the query.
     */
    fun endAt(vararg fieldValues: Any?): Query {
        val values = fieldValues.map { FirestoreSerializer.toFirestoreValue(it) }
        endAtCursor = Cursor(values = values, before = false)
        return this
    }
    
    /**
     * Sets the start after cursor for the query.
     */
    fun startAfter(vararg fieldValues: Any?): Query {
        val values = fieldValues.map { FirestoreSerializer.toFirestoreValue(it) }
        startAtCursor = Cursor(values = values, before = false)
        return this
    }
    
    /**
     * Sets the end before cursor for the query.
     */
    fun endBefore(vararg fieldValues: Any?): Query {
        val values = fieldValues.map { FirestoreSerializer.toFirestoreValue(it) }
        endAtCursor = Cursor(values = values, before = true)
        return this
    }
    
    /**
     * Executes the query and returns the results.
     */
    suspend fun get(): QuerySnapshot {
        val collectionPath = collectionRef.path()
        // For runQuery, the parent is the document path containing this collection
        // Collections alternate with documents: collection/document/collection/document/...
        // For root collection "users", there's no parent document
        // For nested collection "users/user1/posts", parent is "users/user1"
        val pathParts = collectionPath.split("/").filter { it.isNotEmpty() }
        val parent = if (pathParts.size >= 2 && pathParts.size % 2 == 0) {
            // Even number of parts means ends with collection, parent is all but last
            pathParts.dropLast(1).joinToString("/")
        } else if (pathParts.size > 2) {
            // Odd number means ends with document, but we're querying a collection
            // So parent is all but last two (document + collection)
            pathParts.dropLast(2).joinToString("/")
        } else {
            // Root level collection, no parent
            null
        }
        
        val structuredQuery = StructuredQuery(
            from = listOf(CollectionSelector(collectionId = collectionRef.id())),
            where = buildFilter(),
            orderBy = orderBys,
            limit = limitCount,
            offset = offsetCount,
            startAt = startAtCursor,
            endAt = endAtCursor
        )
        
        val queryRequest = FirestoreQuery(
            structuredQuery = structuredQuery,
            parent = parent
        )
        
        // runQuery endpoint: parent:runQuery or :runQuery for root
        val queryPath = if (parent != null && parent.isNotEmpty()) "$parent:runQuery" else ":runQuery"
        @Suppress("UNCHECKED_CAST")
        val response: List<RunQueryResponseItem> = client.post(queryPath, queryRequest)
        
        val documents = response.mapNotNull { item ->
            item.document?.let { doc ->
                DocumentSnapshot(
                    document = doc,
                    exists = true,
                    id = doc.name.split("/").lastOrNull() ?: "",
                    path = doc.name
                )
            }
        }
        
        return QuerySnapshot(
            documents = documents,
            size = documents.size
        )
    }
    
    /**
     * Listens to real-time updates for this query.
     */
    fun snapshots(pollIntervalMs: Long = 2000): Flow<QuerySnapshot> = flow {
        var lastSnapshot: QuerySnapshot? = null
        
        while (true) {
            try {
                val currentSnapshot = get()
                
                // Only emit if the query results have changed
                if (lastSnapshot == null || hasChanged(lastSnapshot, currentSnapshot)) {
                    emit(currentSnapshot)
                    lastSnapshot = currentSnapshot
                }
            } catch (e: Exception) {
                // Emit error or handle as needed
                throw e
            }
            
            delay(pollIntervalMs)
        }
    }
    
    private fun buildFilter(): Filter? {
        return when (filters.size) {
            0 -> null
            1 -> Filter(fieldFilter = filters[0])
            else -> {
                val compositeFilter = CompositeFilter(
                    op = CompositeOperator.AND,
                    filters = filters.map { Filter(fieldFilter = it) }
                )
                Filter(compositeFilter = compositeFilter)
            }
        }
    }
    
    private fun hasChanged(old: QuerySnapshot, new: QuerySnapshot): Boolean {
        if (old.size != new.size) return true
        
        val oldIds = old.documents.map { it.id }.toSet()
        val newIds = new.documents.map { it.id }.toSet()
        
        if (oldIds != newIds) return true
        
        // Check if any document content has changed
        return old.documents.any { oldDoc ->
            val newDoc = new.documents.find { it.id == oldDoc.id }
            newDoc == null || oldDoc.document?.fields != newDoc.document?.fields
        }
    }
}

/**
 * Response item from a runQuery request.
 */
@kotlinx.serialization.Serializable
data class RunQueryResponseItem(
    val document: FirestoreDocument? = null,
    val readTime: String? = null,
    val skippedResults: Int? = null
)

