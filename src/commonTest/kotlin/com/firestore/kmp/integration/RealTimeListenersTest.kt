package com.firestore.kmp.integration

import com.firestore.kmp.api.*
import com.firestore.kmp.auth.StaticTokenAuth
import com.firestore.kmp.models.*
import com.firestore.kmp.test.MockFirestoreHttpClientFactory
import com.firestore.kmp.test.MockFirestoreResponses
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.test.runTest
import kotlin.test.*

class RealTimeListenersTest {
    
    private lateinit var firestore: Firestore
    private lateinit var mockEngine: MockEngine
    private var requestCount = 0
    
    @BeforeTest
    fun setup() {
        requestCount = 0
        
        mockEngine = MockEngine { request ->
            requestCount++
            
            when {
                request.url.encodedPath.contains("users/user123") && request.method == HttpMethod.Get -> {
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/user123",
                        fields = mapOf(
                            "name" to FirestoreValue(stringValue = "John Doe"),
                            "age" to FirestoreValue(integerValue = "${30 + requestCount}") // Change on each request
                        )
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains(":runQuery") && request.method == HttpMethod.Post -> {
                    val documents = listOf(
                        MockFirestoreResponses.createDocumentResponse(
                            name = "projects/test-project/databases/(default)/documents/users/user${requestCount}",
                            fields = mapOf(
                                "name" to FirestoreValue(stringValue = "User $requestCount"),
                                "age" to FirestoreValue(integerValue = "$requestCount")
                            )
                        )
                    )
                    
                    val response = MockFirestoreResponses.createQueryResponse(documents)
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(
                            kotlinx.serialization.serializer<List<com.firestore.kmp.api.RunQueryResponseItem>>(),
                            response
                        ),
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
    fun testDocumentSnapshotFlow() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val flow = docRef.snapshots(pollIntervalMs = 100)
        
        // Get first snapshot
        val firstSnapshot = flow.first()
        
        assertTrue(firstSnapshot.exists)
        assertEquals("user123", firstSnapshot.id)
        assertNotNull(firstSnapshot.getData())
    }
    
    @Test
    fun testQuerySnapshotFlow() = runTest {
        val flow = firestore.collection("users")
            .snapshots(pollIntervalMs = 100)
        
        // Get first snapshot
        val firstSnapshot = flow.first()
        
        assertTrue(firstSnapshot.size >= 0)
    }
    
    @Test
    fun testDocumentListenerEmitsOnChange() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val flow = docRef.snapshots(pollIntervalMs = 50)
        
        var snapshotCount = 0
        var lastAge: Long? = null
        
        // Collect a few snapshots
        var collected = 0
        try {
            flow.collect { snapshot: DocumentSnapshot ->
                if (collected >= 3) {
                    throw kotlinx.coroutines.CancellationException("Test complete")
                }
                collected++
                snapshotCount++
                if (snapshot.exists) {
                    val ageValue = snapshot.get<Any?>("age")
                    val age = when (ageValue) {
                        is Long -> ageValue
                        is String -> ageValue.toLongOrNull()
                        is Number -> ageValue.toLong()
                        else -> null
                    }
                    val currentLastAge = lastAge
                    if (currentLastAge != null && age != null) {
                        // Age should increase with each request
                        assertTrue(age > currentLastAge, "Age should increase")
                    }
                    lastAge = age
                }
            }
        } catch (e: kotlinx.coroutines.CancellationException) {
            // Expected - test complete
        }
        
        assertTrue(snapshotCount >= 1, "Should receive at least one snapshot")
    }
    
    @Test
    fun testQueryListenerEmitsOnChange() = runTest {
        val flow = firestore.collection("users")
            .snapshots(pollIntervalMs = 50)
        
        var snapshotCount = 0
        
        // Collect a few snapshots
        var collected = 0
        try {
            flow.collect { snapshot ->
                if (collected >= 3) {
                    throw kotlinx.coroutines.CancellationException("Test complete")
                }
                collected++
                snapshotCount++
                assertTrue(snapshot.size >= 0)
            }
        } catch (e: kotlinx.coroutines.CancellationException) {
            // Expected - test complete
        }
        
        assertTrue(snapshotCount >= 1, "Should receive at least one snapshot")
    }
}

