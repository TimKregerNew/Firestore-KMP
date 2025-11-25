# iOS Example Setup Guide

Since creating a valid Xcode project file programmatically is complex, please create the Xcode project manually using these steps:

## Option 1: Create New Xcode Project (Recommended)

1. Open Xcode
2. Select "File" → "New" → "Project"
3. Choose "iOS" → "App"
4. Configure:
   - Product Name: `ios-example`
   - Team: (Select your team)
   - Organization Identifier: `com.firestore.kmp`
   - Interface: Storyboard (or SwiftUI)
   - Language: Swift
   - Storage: None
5. Save the project in this directory: `examples/ios-example/`

## Option 2: Use Xcode Command Line Tools

```bash
cd examples/ios-example
xcodegen generate  # If you have xcodegen installed
```

## After Creating the Project

1. **Add the Swift files:**
   - Drag the files from `ios-example/` folder into your Xcode project
   - Make sure "Copy items if needed" is checked
   - Add to target: `ios-example`

2. **Add the Firestore KMP framework:**
   - Build the framework first: `./build-framework.sh`
   - In Xcode: Project Settings → General → Frameworks, Libraries, and Embedded Content
   - Click "+" → "Add Other..." → "Add Files..."
   - Navigate to `build/xcode-frameworks/FirestoreKMP.xcframework`
   - Select "Embed & Sign"

3. **Configure the project:**
   - Update `FirestoreConfig.swift` with your project ID
   - Implement `AuthProvider.swift` with token retrieval

4. **Build and run:**
   - Select a simulator or device
   - Press Cmd+R to build and run

## Alternative: Swift Package Manager

You can also use Swift Package Manager instead of Xcode project:

1. Create a `Package.swift` file (already provided)
2. Use `swift build` to build
3. Or integrate with Xcode via File → Add Packages




