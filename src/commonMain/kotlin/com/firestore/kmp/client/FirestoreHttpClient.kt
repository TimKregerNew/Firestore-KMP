package com.firestore.kmp.client

import com.firestore.kmp.auth.FirestoreAuth
import com.firestore.kmp.errors.FirestoreException
import com.firestore.kmp.errors.createFirestoreException
import com.firestore.kmp.errors.httpStatusToErrorCode
import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.request.*
import io.ktor.client.statement.*
import io.ktor.http.*
import io.ktor.serialization.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json

/**
 * HTTP client wrapper for Firestore REST API.
 */
class FirestoreHttpClient(
    private val projectId: String,
    private val databaseId: String = "(default)",
    val auth: FirestoreAuth,
    val httpClient: HttpClient = createDefaultHttpClient()
) {
    val baseUrl = "https://firestore.googleapis.com/v1/projects/$projectId/databases/$databaseId/documents"
    
    companion object {
        fun createDefaultHttpClient(): HttpClient {
            return HttpClient {
                install(ContentNegotiation) {
                    json(Json {
                        ignoreUnknownKeys = true
                        isLenient = true
                        encodeDefaults = false
                    })
                }
            }
        }
    }
    
    /**
     * Makes a GET request to Firestore.
     */
    suspend inline fun <reified T> get(
        path: String,
        queryParameters: Map<String, String> = emptyMap()
    ): T {
        val token = auth.getIdToken()
        val url = if (path.startsWith("http")) path else "$baseUrl/$path"
        
        return try {
            val response = httpClient.request(url) {
                method = HttpMethod.Get
                token?.let { header(HttpHeaders.Authorization, "Bearer $it") }
                queryParameters.forEach { (key, value) -> parameter(key, value) }
            }
            
            // Check status before deserializing
            if (response.status.value >= 400) {
                val errorCode = httpStatusToErrorCode(response.status.value)
                throw createFirestoreException(
                    errorCode,
                    "Firestore request failed with status ${response.status.value}",
                    null
                )
            }
            
            response.body<T>()
        } catch (e: com.firestore.kmp.errors.FirestoreException) {
            throw e
        } catch (e: io.ktor.serialization.JsonConvertException) {
            // This might be a deserialization error due to error response
            // Try to extract status from the cause
            val errorCode = try {
                var cause: Throwable? = e.cause
                var foundStatus: Int? = null
                while (cause != null && foundStatus == null) {
                    val causeResponse = cause.javaClass.methods
                        .firstOrNull { it.name == "getResponse" || it.name == "response" }
                        ?.invoke(cause) as? HttpResponse
                    foundStatus = causeResponse?.status?.value
                    if (foundStatus == null) {
                        cause = cause.cause
                    }
                }
                if (foundStatus != null) {
                    httpStatusToErrorCode(foundStatus)
                } else {
                    com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        } catch (e: Exception) {
            val errorCode = try {
                val responseMethod = e.javaClass.methods
                    .firstOrNull { it.name == "getResponse" || it.name == "response" }
                val response = responseMethod?.invoke(e) as? HttpResponse
                val status = response?.status?.value
                if (status != null) {
                    httpStatusToErrorCode(status)
                } else {
                    // Check cause chain
                    var cause: Throwable? = e.cause
                    var foundStatus: Int? = null
                    while (cause != null && foundStatus == null) {
                        val causeResponse = cause.javaClass.methods
                            .firstOrNull { it.name == "getResponse" || it.name == "response" }
                            ?.invoke(cause) as? HttpResponse
                        foundStatus = causeResponse?.status?.value
                        if (foundStatus == null) {
                            cause = cause.cause
                        }
                    }
                    if (foundStatus != null) {
                        httpStatusToErrorCode(foundStatus)
                    } else {
                        com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                    }
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        }
    }
    
    /**
     * Makes a POST request to Firestore.
     */
    suspend inline fun <reified T> post(
        path: String,
        body: Any? = null,
        queryParameters: Map<String, String> = emptyMap()
    ): T {
        val token = auth.getIdToken()
        val url = if (path.startsWith("http")) path else "$baseUrl/$path"
        
        return try {
            val response = httpClient.request(url) {
                method = HttpMethod.Post
                token?.let { header(HttpHeaders.Authorization, "Bearer $it") }
                queryParameters.forEach { (key, value) -> parameter(key, value) }
                if (body != null) {
                    contentType(ContentType.Application.Json)
                    setBody(body)
                }
            }
            
            // Check status before deserializing
            if (response.status.value >= 400) {
                val errorCode = httpStatusToErrorCode(response.status.value)
                throw createFirestoreException(
                    errorCode,
                    "Firestore request failed with status ${response.status.value}",
                    null
                )
            }
            
            response.body<T>()
        } catch (e: com.firestore.kmp.errors.FirestoreException) {
            throw e
        } catch (e: io.ktor.serialization.JsonConvertException) {
            val errorCode = try {
                var cause: Throwable? = e.cause
                var foundStatus: Int? = null
                while (cause != null && foundStatus == null) {
                    val causeResponse = cause.javaClass.methods
                        .firstOrNull { it.name == "getResponse" || it.name == "response" }
                        ?.invoke(cause) as? HttpResponse
                    foundStatus = causeResponse?.status?.value
                    if (foundStatus == null) {
                        cause = cause.cause
                    }
                }
                if (foundStatus != null) {
                    httpStatusToErrorCode(foundStatus)
                } else {
                    com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        } catch (e: Exception) {
            val errorCode = try {
                val responseMethod = e.javaClass.methods
                    .firstOrNull { it.name == "getResponse" || it.name == "response" }
                val response = responseMethod?.invoke(e) as? HttpResponse
                val status = response?.status?.value
                if (status != null) {
                    httpStatusToErrorCode(status)
                } else {
                    var cause: Throwable? = e.cause
                    var foundStatus: Int? = null
                    while (cause != null && foundStatus == null) {
                        val causeResponse = cause.javaClass.methods
                            .firstOrNull { it.name == "getResponse" || it.name == "response" }
                            ?.invoke(cause) as? HttpResponse
                        foundStatus = causeResponse?.status?.value
                        if (foundStatus == null) {
                            cause = cause.cause
                        }
                    }
                    if (foundStatus != null) {
                        httpStatusToErrorCode(foundStatus)
                    } else {
                        com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                    }
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        }
    }
    
    /**
     * Makes a PATCH request to Firestore.
     */
    suspend inline fun <reified T> patch(
        path: String,
        body: Any? = null,
        queryParameters: Map<String, String> = emptyMap()
    ): T {
        val token = auth.getIdToken()
        val url = if (path.startsWith("http")) path else "$baseUrl/$path"
        
        return try {
            val response = httpClient.request(url) {
                method = HttpMethod.Patch
                token?.let { header(HttpHeaders.Authorization, "Bearer $it") }
                queryParameters.forEach { (key, value) -> parameter(key, value) }
                if (body != null) {
                    contentType(ContentType.Application.Json)
                    setBody(body)
                }
            }
            
            // Check status before deserializing
            if (response.status.value >= 400) {
                val errorCode = httpStatusToErrorCode(response.status.value)
                throw createFirestoreException(
                    errorCode,
                    "Firestore request failed with status ${response.status.value}",
                    null
                )
            }
            
            response.body<T>()
        } catch (e: com.firestore.kmp.errors.FirestoreException) {
            throw e
        } catch (e: io.ktor.serialization.JsonConvertException) {
            val errorCode = try {
                var cause: Throwable? = e.cause
                var foundStatus: Int? = null
                while (cause != null && foundStatus == null) {
                    val causeResponse = cause.javaClass.methods
                        .firstOrNull { it.name == "getResponse" || it.name == "response" }
                        ?.invoke(cause) as? HttpResponse
                    foundStatus = causeResponse?.status?.value
                    if (foundStatus == null) {
                        cause = cause.cause
                    }
                }
                if (foundStatus != null) {
                    httpStatusToErrorCode(foundStatus)
                } else {
                    com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        } catch (e: Exception) {
            val errorCode = try {
                val responseMethod = e.javaClass.methods
                    .firstOrNull { it.name == "getResponse" || it.name == "response" }
                val response = responseMethod?.invoke(e) as? HttpResponse
                val status = response?.status?.value
                if (status != null) {
                    httpStatusToErrorCode(status)
                } else {
                    var cause: Throwable? = e.cause
                    var foundStatus: Int? = null
                    while (cause != null && foundStatus == null) {
                        val causeResponse = cause.javaClass.methods
                            .firstOrNull { it.name == "getResponse" || it.name == "response" }
                            ?.invoke(cause) as? HttpResponse
                        foundStatus = causeResponse?.status?.value
                        if (foundStatus == null) {
                            cause = cause.cause
                        }
                    }
                    if (foundStatus != null) {
                        httpStatusToErrorCode(foundStatus)
                    } else {
                        com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                    }
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        }
    }
    
    /**
     * Makes a DELETE request to Firestore.
     */
    suspend inline fun <reified T> delete(
        path: String,
        queryParameters: Map<String, String> = emptyMap()
    ): T {
        val token = auth.getIdToken()
        val url = if (path.startsWith("http")) path else "$baseUrl/$path"
        
        return try {
            val response = httpClient.request(url) {
                method = HttpMethod.Delete
                token?.let { header(HttpHeaders.Authorization, "Bearer $it") }
                queryParameters.forEach { (key, value) -> parameter(key, value) }
            }
            
            // Check status before deserializing
            if (response.status.value >= 400) {
                val errorCode = httpStatusToErrorCode(response.status.value)
                throw createFirestoreException(
                    errorCode,
                    "Firestore request failed with status ${response.status.value}",
                    null
                )
            }
            
            response.body<T>()
        } catch (e: com.firestore.kmp.errors.FirestoreException) {
            throw e
        } catch (e: io.ktor.serialization.JsonConvertException) {
            val errorCode = try {
                var cause: Throwable? = e.cause
                var foundStatus: Int? = null
                while (cause != null && foundStatus == null) {
                    val causeResponse = cause.javaClass.methods
                        .firstOrNull { it.name == "getResponse" || it.name == "response" }
                        ?.invoke(cause) as? HttpResponse
                    foundStatus = causeResponse?.status?.value
                    if (foundStatus == null) {
                        cause = cause.cause
                    }
                }
                if (foundStatus != null) {
                    httpStatusToErrorCode(foundStatus)
                } else {
                    com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        } catch (e: Exception) {
            val errorCode = try {
                val responseMethod = e.javaClass.methods
                    .firstOrNull { it.name == "getResponse" || it.name == "response" }
                val response = responseMethod?.invoke(e) as? HttpResponse
                val status = response?.status?.value
                if (status != null) {
                    httpStatusToErrorCode(status)
                } else {
                    var cause: Throwable? = e.cause
                    var foundStatus: Int? = null
                    while (cause != null && foundStatus == null) {
                        val causeResponse = cause.javaClass.methods
                            .firstOrNull { it.name == "getResponse" || it.name == "response" }
                            ?.invoke(cause) as? HttpResponse
                        foundStatus = causeResponse?.status?.value
                        if (foundStatus == null) {
                            cause = cause.cause
                        }
                    }
                    if (foundStatus != null) {
                        httpStatusToErrorCode(foundStatus)
                    } else {
                        com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
                    }
                }
            } catch (ex: Exception) {
                com.firestore.kmp.errors.FirestoreErrorCode.UNKNOWN
            }
            throw createFirestoreException(
                errorCode,
                "Firestore request failed: ${e.message}",
                e
            )
        }
    }
    
    /**
     * Closes the HTTP client.
     */
    fun close() {
        httpClient.close()
    }
}

