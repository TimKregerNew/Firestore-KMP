# Android Example App

This is an example Android application demonstrating how to use the Firestore KMP library.

## Prerequisites

- Android Studio Hedgehog (2023.1.1) or later
- Android SDK 21 or later
- A Firebase project with Firestore enabled
- Service account key file for authentication

## Configuration

### Step 1: Configure Firestore Settings

1. **Update `FirestoreConfig.kt` with your Firebase project details:**
   ```kotlin
   object FirestoreConfig {
       const val PROJECT_ID = "YOUR_PROJECT_ID"  // Replace with your Firebase project ID
       const val DATABASE_ID = "(default)"        // Or your database ID
       val SERVICE_ACCOUNT_TOKEN: String? = null  // Will be set in next step
   }
   ```

### Step 2: Generate Service Account Token

1. **Get your service account key:**
   - Go to Firebase Console → Project Settings → Service Accounts
   - Click "Generate New Private Key"
   - Save the JSON file

2. **Generate an access token:**
   ```bash
   cd examples/android-example
   python3 get-token.py /path/to/your-service-account-key.json
   ```

3. **Copy the token and update `FirestoreConfig.kt`:**
   ```kotlin
   val SERVICE_ACCOUNT_TOKEN: String? = "ya29.c.YourTokenHere..."
   ```

   **Note:** Tokens expire after 1 hour. You'll need to regenerate them periodically for testing.

## Setup

### Step 1: Include the Firestore KMP Library

The app is configured to use the Firestore KMP library from the parent project. Make sure you're opening the project from the root directory:

```bash
cd /path/to/firestore-KMP
```

Then open `examples/android-example` in Android Studio, or build from command line:

```bash
cd examples/android-example
./gradlew build
```

### Step 2: Sync Gradle

1. Open the project in Android Studio
2. Click "Sync Project with Gradle Files" (or File → Sync Project with Gradle Files)
3. Wait for the sync to complete

### Step 3: Build and Run

1. Connect an Android device or start an emulator
2. Click "Run" (or press Shift+F10)
3. Select your device/emulator

## Features Demonstrated

- ✅ Initializing Firestore
- ✅ Creating documents
- ✅ Reading documents
- ✅ Updating documents
- ✅ Querying collections
- ✅ Real-time listeners (polling-based)
- ✅ Multiple simultaneous listeners
- ✅ Error handling
- ✅ Configurable collection and document paths

## Usage Examples

The app includes a Jetpack Compose UI with buttons to test various Firestore operations:

- **Create Document**: Creates a new document with name, email, age, and timestamp
- **Read Document**: Reads a document by collection path and document ID
- **Update Document**: Updates an existing document
- **Query Collection**: Queries documents with filters (age >= 18, ordered by age)
- **Start Listener**: Begins listening to document changes in real-time
- **Stop Listener**: Stops the active listener

All operations are logged to the text view at the bottom of the screen. You can:
- Select and copy log text directly
- Clear logs with the "Clear" button
- See only name, age, and email fields in document logs

### Configurable Paths

The UI includes text fields to set:
- **Collection Path**: The Firestore collection to use (default: "test-collection")
- **Document ID**: The document ID to work with (default: "user123")

All CRUD operations and listeners use these configurable paths.

## Code Examples

### Creating a Document

```kotlin
val docRef = firestore.collection("test-collection").document("user123")
val data = mapOf(
    "name" to "John Doe",
    "email" to "john@example.com",
    "age" to 30L
)
val snapshot = docRef.set(data)
```

### Reading a Document

```kotlin
val docRef = firestore.collection("test-collection").document("user123")
val snapshot = docRef.get()

if (snapshot.exists) {
    val name: String? = snapshot.get("name")
    val age: Long? = snapshot.get("age")
}
```

### Real-time Listener

```kotlin
val docRef = firestore.collection("test-collection").document("user123")
val flow = docRef.snapshots(2000) // Poll every 2 seconds

viewModelScope.launch {
    flow.collect { snapshot ->
        if (snapshot.exists) {
            // Handle document changes
        }
    }
}
```

## Notes

- The example uses Kotlin Coroutines and Flow
- Real-time listeners use polling (default 2 seconds, configurable)
- Multiple listeners can run simultaneously for different documents
- Make sure your Firestore security rules allow the operations you're testing
- Service account tokens expire after 1 hour - regenerate as needed
- For production, implement proper token refresh logic in `AuthProvider`

## Troubleshooting

### "Firestore request failed with status 401"
- Your service account token has expired (tokens last 1 hour)
- Regenerate the token using `get-token.py` and update `FirestoreConfig.kt`

### "Firestore request failed with status 403"
- Check your Firestore security rules
- Verify your service account has the necessary permissions
- Make sure the project ID and database ID are correct

### Build errors
- Make sure you're opening the project from the root `firestore-KMP` directory
- Sync Gradle files (File → Sync Project with Gradle Files)
- Clean and rebuild (Build → Clean Project, then Build → Rebuild Project)

### Listener not stopping
- Make sure you're calling `stopListener()` on the ViewModel
- The listener uses coroutine cancellation for reliable stopping
- Check the logs for cancellation messages



