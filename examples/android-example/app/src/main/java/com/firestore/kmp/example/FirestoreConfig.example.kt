package com.firestore.kmp.example

// Copy this file to FirestoreConfig.kt and fill in your values
// DO NOT commit FirestoreConfig.kt to version control if it contains sensitive data

object FirestoreConfig {
    // TODO: Replace with your Firebase project ID
    // You can find this in the Firebase Console: Project Settings > General
    const val PROJECT_ID = "YOUR_PROJECT_ID"
    
    // TODO: Replace with your Firestore database ID
    // For default database, use "(default)"
    // For named databases, use the database ID from Firebase Console
    const val DATABASE_ID = "(default)"
    
    // Service account access token
    // Get this token using: python3 get-token.py path/to/service-account-key.json
    // Token expires after 1 hour, so you'll need to refresh it periodically
    // TODO: Replace with your service account access token
    // See examples/android-example/get-token.py for how to generate one
    val SERVICE_ACCOUNT_TOKEN: String? = null
}



