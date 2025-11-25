# Firestore KMP Library

A Kotlin Multiplatform library for accessing Firestore databases via REST API, supporting both Android and iOS platforms.

## Features

- ✅ Full CRUD operations (Create, Read, Update, Delete)
- ✅ Query support with filtering, ordering, and pagination
- ✅ Real-time listeners using Flow (polling-based)
- ✅ Transactions for atomic operations
- ✅ Batch writes for multiple operations
- ✅ Type-safe API using Kotlin coroutines and Flow
- ✅ Automatic serialization/deserialization
- ✅ Comprehensive error handling

## Setup

Add the library to your project's `build.gradle.kts`:

```kotlin
dependencies {
    implementation("com.firestore:kmp:1.0.0")
}
```

## Usage

### Initialization

```kotlin
import com.firestore.kmp.api.Firestore
import com.firestore.kmp.auth.FirestoreAuth

// Create an auth provider
val auth = object : FirestoreAuth {
    override suspend fun getIdToken(): String? {
        // Return your Firebase ID token
        return "your-token-here"
    }
}

// Initialize Firestore
val firestore = Firestore(
    projectId = "your-project-id",
    databaseId = "(default)", // or your database ID
    auth = auth
)
```

### Document Operations

#### Create a Document

```kotlin
// Add a document with auto-generated ID
val snapshot = firestore.collection("users")
    .add(mapOf(
        "name" to "John Doe",
        "email" to "john@example.com",
        "age" to 30
    ))

// Set a document with specific ID
val docRef = firestore.collection("users").document("user123")
docRef.set(mapOf(
    "name" to "Jane Doe",
    "email" to "jane@example.com"
))
```

#### Read a Document

```kotlin
val docRef = firestore.collection("users").document("user123")
val snapshot = docRef.get()

if (snapshot.exists) {
    val data = snapshot.getData()
    val name: String? = snapshot.get("name")
}
```

#### Update a Document

```kotlin
val docRef = firestore.collection("users").document("user123")
docRef.update(mapOf(
    "age" to 31,
    "lastUpdated" to System.currentTimeMillis()
))
```

#### Delete a Document

```kotlin
val docRef = firestore.collection("users").document("user123")
docRef.delete()
```

### Query Operations

```kotlin
// Simple query
val snapshot = firestore.collection("users")
    .where("age", ">=", 18)
    .orderBy("age", "DESCENDING")
    .limit(10)
    .get()

// Complex query with multiple filters
val snapshot = firestore.collection("users")
    .where("age", ">=", 18)
    .where("city", "==", "New York")
    .orderBy("age")
    .orderBy("name")
    .limit(20)
    .get()

for (doc in snapshot.documents) {
    println("User: ${doc.id}")
}
```

### Real-time Listeners

```kotlin
import kotlinx.coroutines.flow.collect

// Listen to document changes
val docRef = firestore.collection("users").document("user123")
docRef.snapshots(pollIntervalMs = 2000).collect { snapshot ->
    if (snapshot.exists) {
        println("Document updated: ${snapshot.getData()}")
    }
}

// Listen to query results
firestore.collection("users")
    .where("age", ">=", 18)
    .snapshots(pollIntervalMs = 3000)
    .collect { querySnapshot ->
        println("Found ${querySnapshot.size} users")
        for (doc in querySnapshot.documents) {
            println("User: ${doc.id}")
        }
    }
```

### Transactions

```kotlin
firestore.runTransaction { transaction ->
    val doc1 = transaction.get(firestore.collection("accounts").document("account1"))
    val doc2 = transaction.get(firestore.collection("accounts").document("account2"))
    
    val balance1 = doc1.getData()?.get("balance") as? Long ?: 0L
    val balance2 = doc2.getData()?.get("balance") as? Long ?: 0L
    
    // Transfer $100 from account1 to account2
    transaction.update(
        firestore.collection("accounts").document("account1"),
        mapOf("balance" to (balance1 - 100))
    )
    transaction.update(
        firestore.collection("accounts").document("account2"),
        mapOf("balance" to (balance2 + 100))
    )
}
```

### Batch Writes

```kotlin
val batch = firestore.batch()

batch.set(
    firestore.collection("users").document("user1"),
    mapOf("name" to "User 1", "age" to 25)
)

batch.set(
    firestore.collection("users").document("user2"),
    mapOf("name" to "User 2", "age" to 30)
)

batch.update(
    firestore.collection("users").document("user3"),
    mapOf("age" to 35)
)

batch.delete(firestore.collection("users").document("user4"))

batch.commit()
```

## Query Operators

Supported query operators:
- `==` or `EQUAL` - Equal to
- `!=` or `NOT_EQUAL` - Not equal to
- `<` or `LESS_THAN` - Less than
- `<=` or `LESS_THAN_OR_EQUAL` - Less than or equal
- `>` or `GREATER_THAN` - Greater than
- `>=` or `GREATER_THAN_OR_EQUAL` - Greater than or equal
- `ARRAY_CONTAINS` - Array contains value
- `IN` - Value in array
- `ARRAY_CONTAINS_ANY` - Array contains any of the values
- `NOT_IN` - Value not in array

## Error Handling

```kotlin
import com.firestore.kmp.errors.FirestoreException

try {
    val snapshot = docRef.get()
} catch (e: FirestoreException.NotFoundException) {
    println("Document not found")
} catch (e: FirestoreException.PermissionDeniedException) {
    println("Permission denied")
} catch (e: FirestoreException) {
    println("Firestore error: ${e.message}")
}
```

## Authentication

The library requires a `FirestoreAuth` implementation that provides Firebase ID tokens. You can use:

- `StaticTokenAuth(token)` - For static tokens (testing)
- `NoAuth` - For unauthenticated access (if Firestore rules allow)
- Custom implementation - For dynamic token management

## Real-time Listeners

Real-time listeners use polling since the Firestore REST API doesn't support native WebSocket connections. The default polling interval is 2 seconds, but you can customize it:

```kotlin
docRef.snapshots(pollIntervalMs = 5000) // Poll every 5 seconds
```

Listeners only emit when data actually changes, making them efficient even with polling.

## Platform Support

- ✅ Android (API 21+)
- ✅ iOS (arm64, x64, simulator)

## License

[Add your license here]

