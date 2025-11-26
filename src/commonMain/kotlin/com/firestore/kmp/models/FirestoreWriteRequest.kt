package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Request body for creating a Firestore document with a specific ID.
 * POST to collection path with documentId as query parameter.
 */
@Serializable
data class FirestoreWriteRequest(
    val fields: Map<String, FirestoreValue>
)

