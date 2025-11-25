package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Represents a Firestore transaction request.
 */
@Serializable
data class TransactionRequest(
    val options: TransactionOptions? = null
)

@Serializable
data class TransactionOptions(
    val readOnly: ReadOnly? = null,
    val readWrite: ReadWrite? = null
)

@Serializable
data class ReadOnly(
    val readTime: String? = null
)

@Serializable
data class ReadWrite(
    val retryTransaction: String? = null
)

/**
 * Represents a transaction response.
 */
@Serializable
data class TransactionResponse(
    val transaction: String
)

/**
 * Represents a commit request for transactions.
 */
@Serializable
data class CommitRequest(
    val writes: List<FirestoreWrite> = emptyList(),
    val transaction: String? = null
)

/**
 * Represents a commit response.
 */
@Serializable
data class CommitResponse(
    val writeResults: List<WriteResult> = emptyList(),
    val commitTime: String
)

/**
 * Represents the result of a transaction.
 */
data class TransactionResult(
    val writeResults: List<WriteResult>,
    val commitTime: String
)

