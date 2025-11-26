# iOS Example App

This is an example iOS application demonstrating how to use the Firestore KMP library.

## Prerequisites

- Xcode 14.0 or later
- iOS 13.0 or later
- A Firebase project with Firestore enabled
- Service account key file for authentication

## Configuration

### Step 1: Configure Firestore Settings

1. **Copy the example config file:**
   ```bash
   cp ios-example/FirestoreConfig.example.swift ios-example/FirestoreConfig.swift
   ```

2. **Update `FirestoreConfig.swift` with your Firebase project details:**
   ```swift
   struct FirestoreConfig {
       static let projectId = "YOUR_PROJECT_ID"  // Replace with your Firebase project ID
       static let databaseId = "(default)"        // Or your database ID
       static let serviceAccountToken: String? = nil  // Will be set in next step
   }
   ```

### Step 2: Generate Service Account Token

1. **Get your service account key:**
   - Go to Firebase Console → Project Settings → Service Accounts
   - Click "Generate New Private Key"
   - Save the JSON file

2. **Generate an access token:**
   ```bash
   cd examples/ios-example
   python3 get-token.py /path/to/your-service-account-key.json
   ```

3. **Copy the token and update `FirestoreConfig.swift`:**
   ```swift
   static let serviceAccountToken: String? = "ya29.c.YourTokenHere..."
   ```

   **Note:** Tokens expire after 1 hour. You'll need to regenerate them periodically for testing.

## Building the Framework

Build the Firestore KMP framework for iOS:

```bash
cd examples/ios-example
./build-framework.sh
```

This creates the framework at: `ios-example/firestore-kmp.xcframework`

## Adding Framework to Xcode Project

### Method 1: Via Build Settings (Recommended)

1. **Open your Xcode project**

2. **Select your project** in the navigator (top item)

3. **Select your target** (ios-example)

4. **Go to "Build Settings" tab**

5. **Search for "Framework Search Paths"**

6. **Add:**
   ```
   $(PROJECT_DIR)
   ```
   (Make sure "Recursive" is checked)

7. **Go to "Build Phases" tab**

8. **Expand "Link Binary With Libraries"**

9. **Click the "+" button → "Add Other..." → "Add Files..."**

10. **Navigate to and select:**
    ```
    ios-example/firestore-kmp.xcframework/ios-arm64_x86_64-simulator/firestore_kmp.framework
    ```
    (For simulator builds - you may need to add the device one too for device builds)

11. **Go to "General" tab**

12. **Scroll to "Frameworks, Libraries, and Embedded Content"**

13. **The framework should appear in the list** - set it to **"Embed & Sign"**

### Method 2: Drag and Drop (Alternative)

1. **In Finder**, navigate to:
   ```
   examples/ios-example/ios-example/firestore-kmp.xcframework
   ```

2. **Drag the xcframework folder** from Finder into Xcode's Project Navigator (left sidebar)

3. **In the dialog that appears:**
   - ✅ Check "Copy items if needed" (or leave unchecked if already in project)
   - ✅ Check "Add to targets: ios-example"
   - Click "Finish"

4. **Go to General tab** → "Frameworks, Libraries, and Embedded Content"

5. **Find `firestore-kmp`** in the list and set it to **"Embed & Sign"**

### Method 3: Manual Build Settings Configuration

1. **Select your project** in the navigator

2. **Select your target** (ios-example)

3. **Go to "Build Settings" tab**

4. **Search for "Framework Search Paths"** and add:
   ```
   $(PROJECT_DIR)
   ```
   (Make sure "Recursive" is checked)

5. **Search for "Other Linker Flags"** and add:
   ```
   -framework firestore_kmp
   ```

6. **Go to "Build Phases" tab**

7. **Expand "Link Binary With Libraries"**

8. **Click "+" → "Add Other..." → "Add Files..."**

9. **Navigate to:**
   ```
   ios-example/firestore-kmp.xcframework/ios-arm64_x86_64-simulator/firestore_kmp.framework
   ```

10. **Go to "General" tab** → "Frameworks, Libraries, and Embedded Content"

11. **The framework should appear** - set it to **"Embed & Sign"**

## Import Statement

The Swift module name is `firestore_kmp` (with underscore, lowercase). Make sure your imports use:

```swift
import firestore_kmp
```

Not `FirestoreKMP` or `FirestoreKmp`.

## Build and Run

1. Select a simulator or device
2. Press Cmd+R to build and run

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

The app includes a SwiftUI interface with buttons to test various Firestore operations:

- **Create Document**: Creates a new document with name, email, age, and timestamp
- **Read Document**: Reads a document by collection path and document ID
- **Update Document**: Updates an existing document
- **Query Collection**: Queries documents with filters (age >= 18, ordered by age)
- **Start Listener**: Begins listening to document changes in real-time
- **Stop Listener**: Stops the active listener

All operations are logged to the text view at the bottom of the screen. You can:
- Select and copy log text directly
- Clear logs with the trash icon
- See only name, age, and email fields in document logs

### Configurable Paths

The UI includes text fields to set:
- **Collection Path**: The Firestore collection to use (default: "test-collection")
- **Document ID**: The document ID to work with (default: "user123")

All CRUD operations and listeners use these configurable paths.

## Code Examples

### Creating a Document

```swift
let docRef = firestore.collection(path: "test-collection").document(id: "user123")
let data: [String: Any?] = [
    "name": "John Doe",
    "email": "john@example.com",
    "age": 30
]
let snapshot = try await docRef.set(data: data as [String : Any])
```

### Reading a Document

```swift
let docRef = firestore.collection(path: "test-collection").document(id: "user123")
let snapshot = try await docRef.get()

if snapshot.exists {
    let name: String? = snapshot.get(field: "name")
    let age: Int32? = snapshot.get(field: "age")
}
```

### Real-time Listener

```swift
let docRef = firestore.collection(path: "test-collection").document(id: "user123")
let flow = docRef.snapshots(pollIntervalMs: 2000)

// Use FlowCollector to collect values
let collector = FlowCollector(callback: { snapshot, error in
    if let snapshot = snapshot, snapshot.exists {
        // Handle document changes
    }
}, cancellationState: cancellationState)

try await flow.collect(collector: collector)
```

## Notes

- The example uses async/await Swift syntax
- Real-time listeners use polling (default 2 seconds, configurable)
- Multiple listeners can run simultaneously for different documents
- Make sure your Firestore security rules allow the operations you're testing
- Service account tokens expire after 1 hour - regenerate as needed
- For production, implement proper token refresh logic in `AuthProvider`

## Troubleshooting

### "No such module 'firestore_kmp'"
- Make sure the framework is added to "Frameworks, Libraries, and Embedded Content"
- Verify the Framework Search Paths are configured correctly
- Clean build folder (Cmd+Shift+K) and rebuild

### "Could not find module"
- Clean build folder (Cmd+Shift+K) and rebuild
- Verify the xcframework was built successfully
- Check that the framework path is correct in Build Settings

### "Undefined symbol"
- Make sure "Embed & Sign" is selected, not "Do Not Embed"
- Verify the framework is in "Link Binary With Libraries"

### "Firestore request failed with status 401"
- Your service account token has expired (tokens last 1 hour)
- Regenerate the token using `get-token.py` and update `FirestoreConfig.swift`

### "Firestore request failed with status 403"
- Check your Firestore security rules
- Verify your service account has the necessary permissions
- Make sure the project ID and database ID are correct

### Listener not stopping
- Make sure you're calling `stopListener()` on the ViewModel
- The listener uses a shared cancellation state for reliable stopping
- Check the logs for cancellation messages
