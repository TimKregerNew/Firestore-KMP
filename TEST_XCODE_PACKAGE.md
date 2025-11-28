# Testing Swift Package Manager in Xcode

## Quick Test Steps:

1. **Open Xcode**

2. **Create a new iOS App:**
   - File → New → Project → iOS → App
   - Name: "TestFirestoreSPM"
   - Language: Swift
   - Interface: SwiftUI

3. **Add Local Package:**
   - Select project in navigator
   - Go to "Package Dependencies" tab
   - Click "+" → "Add Local..."
   - Navigate to: `/Users/timkreger/Dev/firestore-KMP`
   - Click "Add Package"
   - Select "FirestoreKMP" product
   - Click "Add Package"

4. **Test Import:**
   ```swift
   import FirestoreKMP
   ```
   Add this to your `ContentView.swift` - should compile without errors.

5. **Build:** ⌘B - Should succeed

## Verification:
- ✅ Package appears in "Package Dependencies"
- ✅ XCFramework path resolves: `build/xcframework/firestore-kmp.xcframework`
- ✅ Import compiles successfully
- ✅ Project builds

## Troubleshooting:

If package doesn't resolve:
- Make sure XCFramework exists: `ls build/xcframework/firestore-kmp.xcframework`
- Rebuild XCFramework: `./build-xcframework.sh`
- Check Package.swift syntax: `swift package dump-package`

If import fails:
- Check that you're targeting iOS 13+
- Verify the framework name matches: `FirestoreKMP`
