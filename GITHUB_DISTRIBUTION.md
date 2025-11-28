# GitHub Distribution Setup Guide

This guide walks through everything required to distribute the Firestore KMP library via Swift Package Manager on GitHub.

## ✅ What's Been Set Up

### 1. Package.swift
- Located at the root of the repository
- Defines the Swift package with iOS 13+ support
- References the XCFramework at `build/xcframework/firestore-kmp.xcframework`

### 2. .gitignore Updates
- Added exceptions to allow XCFramework to be committed:
  ```
  !build/xcframework/
  !build/xcframework/**/*.xcframework
  ```

### 3. GitHub Actions Workflow
- **File:** `.github/workflows/build-xcframework.yml`
- **Triggers:**
  - Version tags (e.g., `v1.0.0`)
  - Manual workflow dispatch
  - Pull requests that modify source code
- **Actions:**
  - Builds XCFramework automatically
  - Creates GitHub Release with XCFramework as asset
  - Commits XCFramework to repository

### 4. Documentation
- **RELEASES.md:** Release process and versioning guide
- **README.md:** Updated with GitHub installation instructions

## 📋 Steps to Distribute

### Initial Setup (One-time)

1. **Ensure XCFramework is built and committed:**
   ```bash
   ./build-xcframework.sh
   git add build/xcframework/firestore-kmp.xcframework
   git commit -m "chore: add XCFramework for SPM distribution"
   git push
   ```

2. **Verify Package.swift is committed:**
   ```bash
   git add Package.swift
   git commit -m "chore: add Package.swift for SPM"
   git push
   ```

### Creating a Release

#### Method 1: Automated (Recommended)

1. **Update version in `build.gradle.kts`:**
   ```kotlin
   version = "1.0.0"  // Set your version
   ```

2. **Commit and tag:**
   ```bash
   git add build.gradle.kts
   git commit -m "chore: bump version to 1.0.0"
   git tag v1.0.0
   git push origin v1.0.0
   git push origin main  # or master
   ```

3. **GitHub Actions will automatically:**
   - Build the XCFramework
   - Create a GitHub Release
   - Attach XCFramework as release asset
   - Commit XCFramework to repository

#### Method 2: Manual

1. **Build XCFramework:**
   ```bash
   ./build-xcframework.sh
   ```

2. **Commit XCFramework:**
   ```bash
   git add build/xcframework/firestore-kmp.xcframework
   git commit -m "chore: update XCFramework for v1.0.0"
   git push
   ```

3. **Create tag and release:**
   ```bash
   git tag v1.0.0
   git push origin v1.0.0
   ```
   
4. **Create GitHub Release:**
   - Go to GitHub → Releases → Draft a new release
   - Tag: `v1.0.0`
   - Title: `v1.0.0`
   - Description: Release notes
   - Publish release

## 🔍 Verification

### Check Package Resolution

Users can verify the package works by:

1. **In Xcode:**
   - File → Add Package Dependencies...
   - URL: `https://github.com/TimKregerNew/Firestore-KMP.git`
   - Version: `1.0.0`
   - Should resolve successfully

2. **Via command line:**
   ```bash
   swift package resolve
   ```

### Verify XCFramework

```bash
# Check XCFramework exists
ls -la build/xcframework/firestore-kmp.xcframework/

# Verify architectures
lipo -info build/xcframework/firestore-kmp.xcframework/ios-arm64/firestore_kmp.framework/firestore_kmp
lipo -info build/xcframework/firestore-kmp.xcframework/ios-arm64_x86_64-simulator/firestore_kmp.framework/firestore_kmp
```

## 📦 User Installation

Users can add the package in two ways:

### Via Xcode UI:
1. File → Add Package Dependencies...
2. Enter: `https://github.com/TimKregerNew/Firestore-KMP.git`
3. Select version
4. Add package

### Via Package.swift:
```swift
dependencies: [
    .package(url: "https://github.com/TimKregerNew/Firestore-KMP.git", from: "1.0.0")
]
```

## 🐛 Troubleshooting

### XCFramework not found
- **Check:** `ls build/xcframework/firestore-kmp.xcframework/`
- **Fix:** Run `./build-xcframework.sh` and commit

### Package doesn't resolve in Xcode
- **Check:** Tag exists: `git ls-remote --tags origin`
- **Check:** Package.swift syntax: `swift package dump-package`
- **Fix:** Ensure XCFramework is committed and tag is pushed

### GitHub Actions fails
- **Check:** Actions tab in GitHub
- **Verify:** macOS runner available
- **Check:** Xcode command-line tools installed
- **Verify:** Gradle wrapper is executable

### Import fails in Swift
- **Check:** iOS deployment target is 13+
- **Verify:** Framework name: `import FirestoreKMP`
- **Check:** Package product is added to target

## 📝 Versioning

Follow [Semantic Versioning](https://semver.org/):
- **MAJOR** (1.0.0): Breaking changes
- **MINOR** (0.1.0): New features, backward compatible  
- **PATCH** (0.0.1): Bug fixes, backward compatible

Tag format: `v1.0.0` (with 'v' prefix)

## 🔗 Related Files

- `Package.swift` - Swift Package Manager manifest
- `.github/workflows/build-xcframework.yml` - CI/CD workflow
- `build-xcframework.sh` - Build script
- `RELEASES.md` - Release process documentation
- `.gitignore` - Git ignore rules (allows XCFramework)

