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

class DocumentOperationsTest {
    
    private lateinit var firestore: Firestore
    private lateinit var mockEngine: MockEngine
    
    @BeforeTest
    fun setup() {
        mockEngine = MockEngine { request ->
            when {
                request.url.encodedPath.contains("users/user123") && request.method == HttpMethod.Get -> {
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/user123",
                        fields = mapOf(
                            "name" to FirestoreValue(stringValue = "John Doe"),
                            "email" to FirestoreValue(stringValue = "john@example.com"),
                            "age" to FirestoreValue(integerValue = "30")
                        )
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/user123") && request.method == HttpMethod.Post -> {
                    // Create document
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/user123",
                        fields = mapOf(
                            "name" to FirestoreValue(stringValue = "Jane Doe"),
                            "email" to FirestoreValue(stringValue = "jane@example.com")
                        )
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/user123") && request.method == HttpMethod.Patch -> {
                    // Update document
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/user123",
                        fields = mapOf(
                            "name" to FirestoreValue(stringValue = "Jane Doe Updated"),
                            "email" to FirestoreValue(stringValue = "jane@example.com"),
                            "age" to FirestoreValue(integerValue = "31")
                        ),
                        updateTime = "2024-01-02T00:00:00Z"
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/user123") && request.method == HttpMethod.Delete -> {
                    // Delete document
                    val document = MockFirestoreResponses.createDocumentResponse(
                        name = "projects/test-project/databases/(default)/documents/users/user123",
                        fields = emptyMap(),
                        updateTime = "2024-01-02T00:00:00Z"
                    )
                    respond(
                        content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                        status = HttpStatusCode.OK,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                request.url.encodedPath.contains("users/nonexistent") && request.method == HttpMethod.Get -> {
                    respond(
                        content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.NotFound, "Document not found"),
                        status = HttpStatusCode.NotFound,
                        headers = headersOf(HttpHeaders.ContentType, "application/json")
                    )
                }
                
                else -> {
                    respond(
                        content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.NotFound, "Not found"),
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
    fun testGetDocument() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val snapshot = docRef.get()
        
        assertTrue(snapshot.exists)
        assertEquals("user123", snapshot.id)
        assertEquals("John Doe", snapshot.get<String>("name"))
        assertEquals("john@example.com", snapshot.get<String>("email"))
        assertEquals(30L, snapshot.get<Long>("age"))
    }
    
    @Test
    fun testGetNonExistentDocument() = runTest {
        val docRef = firestore.collection("users").document("nonexistent")
        val snapshot = docRef.get()
        
        assertFalse(snapshot.exists)
        assertEquals("nonexistent", snapshot.id)
        assertNull(snapshot.document)
    }
    
    @Test
    fun testSetDocument() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val snapshot = docRef.set(mapOf(
            "name" to "Jane Doe",
            "email" to "jane@example.com"
        ))
        
        assertTrue(snapshot.exists)
        assertEquals("user123", snapshot.id)
        assertEquals("Jane Doe", snapshot.get<String>("name"))
        assertEquals("jane@example.com", snapshot.get<String>("email"))
    }
    
    @Test
    fun testUpdateDocument() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val result = docRef.update(mapOf(
            "age" to 31,
            "name" to "Jane Doe Updated"
        ))
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testDeleteDocument() = runTest {
        val docRef = firestore.collection("users").document("user123")
        val result = docRef.delete()
        
        assertNotNull(result.updateTime)
    }
    
    @Test
    fun testAddDocument() = runTest {
        // Mock for auto-generated ID
        val newMockEngine = MockEngine { request ->
            if (request.method == HttpMethod.Post) {
                val document = MockFirestoreResponses.createDocumentResponse(
                    name = "projects/test-project/databases/(default)/documents/users/auto123",
                    fields = mapOf(
                        "name" to FirestoreValue(stringValue = "New User"),
                        "email" to FirestoreValue(stringValue = "new@example.com")
                    )
                )
                respond(
                    content = kotlinx.serialization.json.Json.encodeToString(FirestoreDocument.serializer(), document),
                    status = HttpStatusCode.OK,
                    headers = headersOf(HttpHeaders.ContentType, "application/json")
                )
            } else {
                respond(
                    content = "",
                    status = HttpStatusCode.NotFound
                )
            }
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = newMockEngine
        )
        
        val testFirestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        val snapshot = testFirestore.collection("users").add(mapOf(
            "name" to "New User",
            "email" to "new@example.com"
        ))
        
        assertTrue(snapshot.exists)
        assertNotNull(snapshot.id)
        
        testFirestore.close()
    }
}

