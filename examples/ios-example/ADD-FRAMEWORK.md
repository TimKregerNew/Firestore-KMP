# Adding Firestore KMP Framework to Xcode Project

If you're getting "no such module 'firestore_kmp'" error, follow these steps:

## Step 1: Build the Framework

```bash
cd examples/ios-example
./build-framework.sh
```

This creates the framework at: `build/xcode-frameworks/firestore-kmp.xcframework`

## Step 2: Add Framework to Xcode Project

### Method 1: Via Build Settings (Recommended - Works when file picker doesn't)

1. **Open your Xcode project**

2. **Select your project** in the navigator (top item)

3. **Select your target** (ios-example)

4. **Go to "Build Settings" tab**

5. **Search for "Framework Search Paths"**

6. **Double-click the value** (or click the "+" button)

7. **Add:**
   ```
   $(PROJECT_DIR)
   ```
   (This points to the ios-example directory where the framework is located)

8. **Make sure "Recursive" is checked** (click the arrow next to the path to expand and check the checkbox)

9. **Go to "Build Phases" tab**

10. **Expand "Link Binary With Libraries"**

11. **Click the "+" button**

12. **Click "Add Other..." → "Add Files..."**

13. **Navigate to and select:**
    ```
    ios-example/firestore-kmp.xcframework/ios-arm64_x86_64-simulator/firestore_kmp.framework
    ```
    (For simulator builds - you may need to add the device one too for device builds)

14. **Go back to "General" tab**

15. **Scroll to "Frameworks, Libraries, and Embedded Content"**

16. **The framework should appear in the list** - set it to **"Embed & Sign"**

### Method 2: Drag and Drop (Alternative)

1. **Open your Xcode project**

2. **In Finder**, navigate to:
   ```
   examples/ios-example/ios-example/firestore-kmp.xcframework
   ```

3. **Drag the xcframework folder** from Finder into Xcode's Project Navigator (left sidebar)

4. **In the dialog that appears:**
   - ✅ Check "Copy items if needed" (or leave unchecked if already in project)
   - ✅ Check "Add to targets: ios-example"
   - Click "Finish"

5. **Go to General tab** → "Frameworks, Libraries, and Embedded Content"

6. **Find `firestore-kmp`** in the list and set it to **"Embed & Sign"**

### Method 3: Manual Build Settings Configuration (If above methods don't work)

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
   (Select the .framework file inside the xcframework)

10. **Go to "General" tab** → "Frameworks, Libraries, and Embedded Content"

11. **The framework should appear** - set it to **"Embed & Sign"**

## Step 3: Configure Framework Search Paths

1. **Select your project** in the navigator

2. **Select your target** (ios-example)

3. **Go to "Build Settings" tab**

4. **Search for "Framework Search Paths"**

5. **Add the path:**
   ```
   $(SRCROOT)/../build/xcode-frameworks
   ```
   (Make sure it's set for both Debug and Release)

   Or use the full path:
   ```
   /Users/timkreger/Dev/firestore-KMP/examples/ios-example/build/xcode-frameworks
   ```

## Step 4: Verify Import

The Swift module name is `firestore_kmp` (with underscore, lowercase). Make sure your imports use:

```swift
import firestore_kmp
```

Not `FirestoreKMP` or `FirestoreKmp`.

## Alternative: Add Framework Search Path via Build Settings

If the above doesn't work, you can also:

1. Go to **Build Settings**
2. Search for **"Framework Search Paths"**
3. Add: `$(PROJECT_DIR)/../build/xcode-frameworks`
4. Make sure **"Recursive"** is checked

## Troubleshooting

- **"No such module"**: Make sure the framework is added to "Frameworks, Libraries, and Embedded Content" and the search path is configured
- **"Could not find module"**: Clean build folder (Cmd+Shift+K) and rebuild
- **"Undefined symbol"**: Make sure "Embed & Sign" is selected, not "Do Not Embed"

