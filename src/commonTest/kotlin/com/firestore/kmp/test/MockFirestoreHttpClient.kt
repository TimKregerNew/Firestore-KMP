package com.firestore.kmp.test

import com.firestore.kmp.auth.FirestoreAuth
import com.firestore.kmp.client.FirestoreHttpClient
import com.firestore.kmp.models.*
import io.ktor.client.*
import io.ktor.client.engine.mock.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.http.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json

/**
 * Mock HTTP client for testing Firestore operations.
 * This creates a FirestoreHttpClient with a MockEngine for testing.
 */
object MockFirestoreHttpClientFactory {
    fun create(
        projectId: String,
        databaseId: String = "(default)",
        auth: FirestoreAuth,
        mockEngine: MockEngine
    ): FirestoreHttpClient {
        val mockHttpClient = HttpClient(mockEngine) {
            install(ContentNegotiation) {
                json(Json {
                    ignoreUnknownKeys = true
                    isLenient = true
                    encodeDefaults = false
                })
            }
        }
        
        return FirestoreHttpClient(projectId, databaseId, auth, mockHttpClient)
    }
}

/**
 * Helper to create mock responses for Firestore API.
 */
object MockFirestoreResponses {
    
    fun createDocumentResponse(
        name: String,
        fields: Map<String, FirestoreValue>,
        createTime: String = "2024-01-01T00:00:00Z",
        updateTime: String = "2024-01-01T00:00:00Z"
    ): FirestoreDocument {
        return FirestoreDocument(
            name = name,
            fields = fields,
            createTime = createTime,
            updateTime = updateTime
        )
    }
    
    fun createQueryResponse(documents: List<FirestoreDocument>): List<com.firestore.kmp.api.RunQueryResponseItem> {
        return documents.map { doc ->
            com.firestore.kmp.api.RunQueryResponseItem(
                document = doc,
                readTime = "2024-01-01T00:00:00Z"
            )
        }
    }
    
    fun createTransactionResponse(transaction: String): TransactionResponse {
        return TransactionResponse(transaction = transaction)
    }
    
    fun createCommitResponse(
        writeResults: List<WriteResult> = emptyList(),
        commitTime: String = "2024-01-01T00:00:00Z"
    ): CommitResponse {
        return CommitResponse(
            writeResults = writeResults,
            commitTime = commitTime
        )
    }
    
    fun createErrorResponse(status: HttpStatusCode, message: String): String {
        return """
        {
            "error": {
                "code": ${status.value},
                "message": "$message",
                "status": "ERROR"
            }
        }
        """.trimIndent()
    }
}

