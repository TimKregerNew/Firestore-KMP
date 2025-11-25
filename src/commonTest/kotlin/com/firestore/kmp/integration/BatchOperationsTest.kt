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

class BatchOperationsTest {
    
    private lateinit var firestore: Firestore
    private lateinit var mockEngine: MockEngine
    
    @BeforeTest
    fun setup() {
        mockEngine = MockEngine { request ->
            when {
                request.url.encodedPath.contains(":commit") && request.method == HttpMethod.Post -> {
                    val commitResponse = MockFirestoreResponses.createCommitResponse(
                        writeResults = listOf(
                            WriteResult(updateTime = "2024-01-01T00:00:00Z"),
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
    fun testBatchSet() = runTest {
        val batch = firestore.batch()
        
        batch.set(
            firestore.collection("users").document("user1"),
            mapOf("name" to "User 1", "age" to 25)
        )
        
        batch.set(
            firestore.collection("users").document("user2"),
            mapOf("name" to "User 2", "age" to 30)
        )
        
        val result = batch.commit()
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testBatchUpdate() = runTest {
        val batch = firestore.batch()
        
        batch.update(
            firestore.collection("users").document("user1"),
            mapOf("age" to 26)
        )
        
        val result = batch.commit()
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testBatchDelete() = runTest {
        val batch = firestore.batch()
        
        batch.delete(firestore.collection("users").document("user1"))
        
        val result = batch.commit()
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testBatchMixedOperations() = runTest {
        val batch = firestore.batch()
        
        batch.set(
            firestore.collection("users").document("user1"),
            mapOf("name" to "User 1")
        )
        
        batch.update(
            firestore.collection("users").document("user2"),
            mapOf("age" to 31)
        )
        
        batch.delete(firestore.collection("users").document("user3"))
        
        val result = batch.commit()
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testBatchSize() = runTest {
        val batch = firestore.batch()
        
        assertEquals(0, batch.size())
        
        batch.set(
            firestore.collection("users").document("user1"),
            mapOf("name" to "User 1")
        )
        
        assertEquals(1, batch.size())
        
        batch.set(
            firestore.collection("users").document("user2"),
            mapOf("name" to "User 2")
        )
        
        assertEquals(2, batch.size())
    }
    
    @Test
    fun testBatchClear() = runTest {
        val batch = firestore.batch()
        
        batch.set(
            firestore.collection("users").document("user1"),
            mapOf("name" to "User 1")
        )
        
        assertEquals(1, batch.size())
        
        batch.clear()
        
        assertEquals(0, batch.size())
    }
    
    @Test
    fun testEmptyBatchCommit() = runTest {
        val batch = firestore.batch()
        
        assertFailsWith<IllegalStateException> {
            batch.commit()
        }
    }
}

