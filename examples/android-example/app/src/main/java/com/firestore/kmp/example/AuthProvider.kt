package com.firestore.kmp.example

import com.firestore.kmp.auth.FirestoreAuth

class AuthProvider : FirestoreAuth {
    override suspend fun getIdToken(): String? {
        return FirestoreConfig.SERVICE_ACCOUNT_TOKEN
    }
    
    override suspend fun getFreshIdToken(): String? {
        return FirestoreConfig.SERVICE_ACCOUNT_TOKEN
    }
}

