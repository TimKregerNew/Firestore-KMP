package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Represents a batch write request.
 * Batch writes use the same CommitRequest as transactions.
 */
typealias BatchWriteRequest = CommitRequest

/**
 * Represents a batch write result.
 */
typealias BatchWriteResult = CommitResponse

