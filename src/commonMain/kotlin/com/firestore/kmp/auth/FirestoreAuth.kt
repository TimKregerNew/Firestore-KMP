package com.firestore.kmp.auth

/**
 * Interface for providing Firebase authentication tokens.
 * Implementations should provide ID tokens for authenticating Firestore requests.
 */
interface FirestoreAuth {
    /**
     * Gets the current Firebase ID token.
     * @return The ID token, or null if not available
     */
    suspend fun getIdToken(): String?
    
    /**
     * Gets a fresh Firebase ID token, forcing a refresh if necessary.
     * @return The ID token, or null if not available
     */
    suspend fun getFreshIdToken(): String? = getIdToken()
}

/**
 * Simple implementation that provides a static token.
 * Useful for testing or when token is managed externally.
 */
class StaticTokenAuth(private val token: String) : FirestoreAuth {
    override suspend fun getIdToken(): String? = token
}

/**
 * No-op implementation that returns null for all tokens.
 * Useful for unauthenticated access (if Firestore rules allow).
 */
object NoAuth : FirestoreAuth {
    override suspend fun getIdToken(): String? = null
}

