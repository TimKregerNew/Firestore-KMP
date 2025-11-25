package com.firestore.kmp.integration

import com.firestore.kmp.api.*
import com.firestore.kmp.auth.StaticTokenAuth
import com.firestore.kmp.models.*
import com.firestore.kmp.test.MockFirestoreHttpClientFactory
import com.firestore.kmp.test.MockFirestoreResponses
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import kotlinx.coroutines.test.runTest
import kotlin.test.*

class TransactionOperationsTest {
    
    private lateinit var firestore: Firestore
    private lateinit var mockEngine: MockEngine
    private var beginTransactionCalled = false
    private var commitCalled = false
    
    @BeforeTest
    fun setup() {
        beginTransactionCalled = false
        commitCalled = false
        
        mockEngine = MockEngine { request ->
            when {
                request.url.encodedPath.contains(":beginTransaction") && request.method == HttpMethod.Post -> {
                    beginTransactionCalled = true
                    val transactionResponse = MockFirestoreResponses.createTransactionResponse("test-transaction-id")
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(TransactionResponse.serializer(), transactionResponse),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains(":commit") && request.method == HttpMethod.Post -> {
                    commitCalled = true
                    val commitResponse = MockFirestoreResponses.createCommitResponse(
                        writeResults = listOf(
                            WriteResult(updateTime = "2024-01-01T00:00:00Z"),
                            WriteResult(updateTime = "2024-01-01T00:00:00Z")
                        ),
                        commitTime = "2024-01-01T00:00:00Z"
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(CommitResponse.serializer(), commitResponse),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/account1") && request.method == HttpMethod.Get -> {
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/account1",
                        fields = mapOf(
                            "balance" to FirestoreValue(integerValue = "1000")
                        )
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/account2") && request.method == HttpMethod.Get -> {
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/account2",
                        fields = mapOf(
                            "balance" to FirestoreValue(integerValue = "500")
                        )
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                else -> {
                    respond(
                        content = "",
                        status = HttpStatusCode.NotFound
                    )
                }
            }
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = mockEngine
        )
        
        firestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
    }
    
    @AfterTest
    fun tearDown() {
        firestore.close()
    }
    
    @Test
    fun testRunTransaction() = runTest {
        val result = firestore.runTransaction {
            val doc1 = get(firestore.collection("users").document("account1"))
            val doc2 = get(firestore.collection("users").document("account2"))
            
            val balance1 = (doc1.getData()?.get("balance") as? String)?.toLongOrNull() ?: 0L
            val balance2 = (doc2.getData()?.get("balance") as? String)?.toLongOrNull() ?: 0L
            
            // Transfer $100 from account1 to account2
            update(
                firestore.collection("users").document("account1"),
                mapOf("balance" to (balance1 - 100))
            )
            update(
                firestore.collection("users").document("account2"),
                mapOf("balance" to (balance2 + 100))
            )
        }
        
        assertTrue(beginTransactionCalled, "beginTransaction should be called")
        assertTrue(commitCalled, "commit should be called")
        assertNotNull(result.commitTime)
        assertEquals(2, result.writeResults.size)
    }
    
    @Test
    fun testTransactionWithSet() = runTest {
        val result = firestore.runTransaction {
            set(
                firestore.collection("users").document("user1"),
                mapOf("name" to "User 1", "age" to 25)
            )
        }
        
        assertTrue(beginTransactionCalled)
        assertTrue(commitCalled)
        assertNotNull(result.commitTime)
    }
    
    @Test
    fun testTransactionWithDelete() = runTest {
        val result = firestore.runTransaction {
            delete(firestore.collection("users").document("user1"))
        }
        
        assertTrue(beginTransactionCalled)
        assertTrue(commitCalled)
        assertNotNull(result.commitTime)
    }
    
    @Test
    fun testTransactionFailure() = runTest {
        val failingEngine = MockEngine { request ->
            when {
                request.url.encodedPath.contains(":beginTransaction") -> {
                    val transactionResponse = MockFirestoreResponses.createTransactionResponse("test-transaction-id")
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(TransactionResponse.serializer(), transactionResponse),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                else -> {
                    respond(
                        content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.InternalServerError, "Internal error"),
                        status = HttpStatusCode.InternalServerError
                    )
                }
            }
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = failingEngine
        )
        
        val testFirestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        assertFails {
            testFirestore.runTransaction {
                set(
                    testFirestore.collection("users").document("user1"),
                    mapOf("name" to "User 1")
                )
            }
        }
        
        testFirestore.close()
    }
}

