package com.firestore.kmp.integration

import com.firestore.kmp.api.*
import com.firestore.kmp.auth.StaticTokenAuth
import com.firestore.kmp.errors.*
import com.firestore.kmp.test.MockFirestoreHttpClientFactory
import com.firestore.kmp.test.MockFirestoreResponses
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import kotlinx.coroutines.test.runTest
import kotlin.test.*

class ErrorHandlingTest {
    
    @Test
    fun testNotFoundException() = runTest {
        val mockEngine = MockEngine { request ->
            respond(
                content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.NotFound, "Document not found"),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = mockEngine
        )
        
        val firestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        val docRef = firestore.collection("users").document("nonexistent")
        
        // get() should return a snapshot with exists = false, not throw
        val snapshot = docRef.get()
        assertFalse(snapshot.exists)
        
        firestore.close()
    }
    
    @Test
    fun testPermissionDeniedException() = runTest {
        val mockEngine = MockEngine { request ->
            respond(
                content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.Forbidden, "Permission denied"),
                status = HttpStatusCode.Forbidden,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = mockEngine
        )
        
        val firestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        val docRef = firestore.collection("users").document("user1")
        
        assertFailsWith<FirestoreException.PermissionDeniedException> {
            docRef.set(mapOf("name" to "Test"))
        }
        
        firestore.close()
    }
    
    @Test
    fun testUnauthenticatedException() = runTest {
        val mockEngine = MockEngine { request ->
            respond(
                content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.Unauthorized, "Unauthenticated"),
                status = HttpStatusCode.Unauthorized,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = mockEngine
        )
        
        val firestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        val docRef = firestore.collection("users").document("user1")
        
        assertFailsWith<FirestoreException.UnauthenticatedException> {
            docRef.get()
        }
        
        firestore.close()
    }
    
    @Test
    fun testInvalidArgumentException() = runTest {
        val mockEngine = MockEngine { request ->
            respond(
                content = MockFirestoreResponses.createErrorResponse(HttpStatusCode.BadRequest, "Invalid argument"),
                status = HttpStatusCode.BadRequest,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        
        val mockClient = MockFirestoreHttpClientFactory.create(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            mockEngine = mockEngine
        )
        
        val firestore = Firestore(
            projectId = "test-project",
            databaseId = "(default)",
            auth = StaticTokenAuth("test-token"),
            httpClient = mockClient
        )
        
        val docRef = firestore.collection("users").document("user1")
        
        assertFailsWith<FirestoreException.InvalidArgumentException> {
            docRef.set(mapOf("name" to "Test"))
        }
        
        firestore.close()
    }
    
    @Test
    fun testHttpStatusToErrorCodeMapping() {
        assertEquals(FirestoreErrorCode.OK, httpStatusToErrorCode(200))
        assertEquals(FirestoreErrorCode.INVALID_ARGUMENT, httpStatusToErrorCode(400))
        assertEquals(FirestoreErrorCode.UNAUTHENTICATED, httpStatusToErrorCode(401))
        assertEquals(FirestoreErrorCode.PERMISSION_DENIED, httpStatusToErrorCode(403))
        assertEquals(FirestoreErrorCode.NOT_FOUND, httpStatusToErrorCode(404))
        assertEquals(FirestoreErrorCode.ALREADY_EXISTS, httpStatusToErrorCode(409))
        assertEquals(FirestoreErrorCode.FAILED_PRECONDITION, httpStatusToErrorCode(412))
        assertEquals(FirestoreErrorCode.RESOURCE_EXHAUSTED, httpStatusToErrorCode(429))
        assertEquals(FirestoreErrorCode.CANCELLED, httpStatusToErrorCode(499))
        assertEquals(FirestoreErrorCode.INTERNAL, httpStatusToErrorCode(500))
        assertEquals(FirestoreErrorCode.UNAVAILABLE, httpStatusToErrorCode(503))
        assertEquals(FirestoreErrorCode.DEADLINE_EXCEEDED, httpStatusToErrorCode(504))
        assertEquals(FirestoreErrorCode.UNKNOWN, httpStatusToErrorCode(999))
    }
}

