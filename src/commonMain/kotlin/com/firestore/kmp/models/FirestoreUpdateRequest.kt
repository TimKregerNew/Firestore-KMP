package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Request body for updating a Firestore document.
 * PATCH to document path with updateMask.fieldPaths as query parameters.
 */
@Serializable
data class FirestoreUpdateRequest(
    val fields: Map<String, FirestoreValue>
)

