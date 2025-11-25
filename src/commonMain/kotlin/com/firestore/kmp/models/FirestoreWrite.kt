package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Represents a write operation in Firestore.
 */
@Serializable
data class FirestoreWrite(
    val update: FirestoreDocument? = null,
    val delete: String? = null,
    val transform: DocumentTransform? = null,
    val updateMask: DocumentMask? = null,
    val currentDocument: Precondition? = null
)

@Serializable
data class DocumentTransform(
    val document: String,
    val fieldTransforms: List<FieldTransform> = emptyList()
)

@Serializable
data class FieldTransform(
    val fieldPath: String,
    val setToServerValue: ServerValue? = null,
    val increment: FirestoreValue? = null,
    val maximum: FirestoreValue? = null,
    val minimum: FirestoreValue? = null,
    val appendMissingElements: ArrayValue? = null,
    val removeAllFromArray: ArrayValue? = null
)

enum class ServerValue {
    SERVER_VALUE_UNSPECIFIED,
    REQUEST_TIME
}

@Serializable
data class DocumentMask(
    val fieldPaths: List<String> = emptyList()
)

@Serializable
data class Precondition(
    val exists: Boolean? = null,
    val updateTime: String? = null
)

/**
 * Represents the result of a write operation.
 */
@Serializable
data class WriteResult(
    val updateTime: String? = null,
    val transformResults: List<ValueTransformResult>? = null
)

@Serializable
data class ValueTransformResult(
    val integerValue: String? = null,
    val doubleValue: Double? = null
)

