package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Represents a Firestore document.
 */
@Serializable
data class FirestoreDocument(
    val name: String,
    val fields: Map<String, FirestoreValue> = emptyMap(),
    val createTime: String? = null,
    val updateTime: String? = null
)

/**
 * Represents a document snapshot with metadata.
 */
data class DocumentSnapshot(
    val document: FirestoreDocument?,
    val exists: Boolean,
    val id: String,
    val path: String
) {
    fun <T> get(field: String): T? {
        return document?.fields?.get(field)?.let { value ->
            // Convert FirestoreValue to Kotlin type
            val deserialized = com.firestore.kmp.serialization.FirestoreDeserializer.fromFirestoreValue(value)
            deserialized as? T
        }
    }
    
    fun getData(): Map<String, FirestoreValue>? {
        return document?.fields
    }
}

/**
 * Represents a query snapshot containing multiple documents.
 */
data class QuerySnapshot(
    val documents: List<DocumentSnapshot>,
    val size: Int
)

