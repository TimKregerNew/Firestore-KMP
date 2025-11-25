# iOS Example App

This is an example iOS application demonstrating how to use the Firestore KMP library.

## Prerequisites

- Xcode 14.0 or later
- iOS 13.0 or later
- A Firebase project with Firestore enabled
- Firebase ID token for authentication

## Setup

### Step 1: Create Xcode Project

Since Xcode project files are complex, please create the project manually:

1. Open Xcode
2. Select "File" → "New" → "Project"
3. Choose "iOS" → "App"
4. Configure:
   - Product Name: `ios-example`
   - Team: (Select your team)
   - Organization Identifier: `com.firestore.kmp`
   - Interface: Storyboard
   - Language: Swift
5. Save the project in this directory: `examples/ios-example/`

### Step 2: Add Source Files

1. In Xcode, right-click on the project navigator
2. Select "Add Files to ios-example..."
3. Navigate to the `ios-example/` folder
4. Select all Swift files:
   - `AppDelegate.swift`
   - `ViewController.swift`
   - `FirestoreConfig.swift`
   - `AuthProvider.swift`
   - `Info.plist`
5. Make sure "Copy items if needed" is checked
6. Click "Add"

### Step 3: Build the Framework

```bash
./build-framework.sh
```

This will generate the `FirestoreKMP.xcframework` in the build directory.

### Step 4: Add Framework to Xcode

1. In Xcode, select your project target
2. Go to "General" tab → "Frameworks, Libraries, and Embedded Content"
3. Click "+" → "Add Other..." → "Add Files..."
4. Navigate to `build/xcode-frameworks/FirestoreKMP.xcframework`
5. Select "Embed & Sign"

### Step 5: Configure

1. **Update Firebase project ID:**
   - Open `FirestoreConfig.swift`
   - Replace `"your-project-id"` with your Firebase project ID
   
2. **Set up authentication:**
   - Open `AuthProvider.swift`
   - Implement the `getIdToken()` method to return your Firebase ID token
   - You can use Firebase Auth SDK or provide a static token for testing

### Step 6: Build and Run

- Select a simulator or device
- Press Cmd+R to build and run

## Features Demonstrated

- ✅ Initializing Firestore
- ✅ Creating documents
- ✅ Reading documents
- ✅ Updating documents
- ✅ Querying collections
- ✅ Real-time listeners (polling-based)
- ✅ Error handling

## Usage Examples

The app includes a simple UI with buttons to test various Firestore operations:

- **Create Document**: Creates a new document in the `users` collection
- **Read Document**: Reads a document by ID
- **Update Document**: Updates an existing document
- **Query Collection**: Queries documents with filters
- **Start Listener**: Begins listening to document changes
- **Stop Listener**: Stops the listener

All operations are logged to the text view at the bottom of the screen.

## Notes

- The example uses async/await Swift syntax
- Real-time listeners use polling (default 2 seconds)
- Make sure your Firestore security rules allow the operations you're testing
- For production, implement proper token refresh logic in `AuthProvider`

