# Fix Info.plist Build Error

You're getting an error because Xcode is trying to both copy and process Info.plist. Here's how to fix it:

## Solution 1: Remove Info.plist from Copy Bundle Resources (Recommended)

1. In Xcode, select your project in the navigator
2. Select the **ios-example** target
3. Go to the **Build Phases** tab
4. Expand **Copy Bundle Resources**
5. Find `Info.plist` in the list
6. Select it and press **Delete** (or click the **-** button)
7. Build again

## Solution 2: Use Generated Info.plist

1. In Xcode, select your project in the navigator
2. Select the **ios-example** target
3. Go to the **Build Settings** tab
4. Search for "Info.plist"
5. Find **Generate Info.plist File** and set it to **Yes**
6. In **Info.plist File**, set it to `ios-example/Info.plist`
7. Remove the manual Info.plist from your project (or keep it for reference)
8. Build again

## Solution 3: Configure Info.plist Properly

1. In Xcode, select your project in the navigator
2. Select the **ios-example** target
3. Go to the **Build Settings** tab
4. Search for "Info.plist"
5. Make sure **Info.plist File** points to `ios-example/Info.plist`
6. Go to **Build Phases** → **Copy Bundle Resources**
7. Remove `Info.plist` if it's there (it shouldn't be - Xcode processes it automatically)
8. Build again

## Quick Fix

The easiest solution is usually:
- Go to **Build Phases** → **Copy Bundle Resources**
- Remove `Info.plist` from there
- Xcode will automatically process it from the **Info.plist File** setting in Build Settings




