# Release Process for GitHub Distribution

This document outlines the process for releasing new versions of Firestore KMP for Swift Package Manager distribution via GitHub.

## Release Methods

### Method 1: Automated Release (Recommended)

1. **Update version in `build.gradle.kts`:**
   ```kotlin
   version = "1.0.1"  // Update version number
   ```

2. **Create and push a version tag:**
   ```bash
   git tag v1.0.1
   git push origin v1.0.1
   ```

3. **GitHub Actions will automatically:**
   - Build the XCFramework
   - Create a GitHub Release
   - Attach the XCFramework as a release asset
   - Commit the XCFramework to the repository

### Method 2: Manual Release

1. **Build the XCFramework locally:**
   ```bash
   ./build-xcframework.sh
   ```

2. **Commit the XCFramework:**
   ```bash
   git add build/xcframework/firestore-kmp.xcframework
   git commit -m "chore: update XCFramework for v1.0.1"
   ```

3. **Create a version tag:**
   ```bash
   git tag v1.0.1
   git push origin v1.0.1
   git push origin main  # or master
   ```

4. **Create GitHub Release:**
   - Go to GitHub → Releases → Draft a new release
   - Tag: `v1.0.1`
   - Title: `v1.0.1`
   - Upload `build/xcframework/firestore-kmp.xcframework.zip` as an asset
   - Publish release

## Versioning

Follow [Semantic Versioning](https://semver.org/):
- **MAJOR** (1.0.0): Breaking changes
- **MINOR** (0.1.0): New features, backward compatible
- **PATCH** (0.0.1): Bug fixes, backward compatible

## Swift Package Manager Usage

Users can add the package via:

```swift
dependencies: [
    .package(url: "https://github.com/TimKregerNew/Firestore-KMP.git", from: "1.0.0")
]
```

Or specify a specific version:

```swift
dependencies: [
    .package(url: "https://github.com/TimKregerNew/Firestore-KMP.git", exact: "1.0.1")
]
```

## XCFramework Location

The XCFramework is committed to the repository at:
```
build/xcframework/firestore-kmp.xcframework
```

This allows Swift Package Manager to resolve the package directly from the GitHub repository without requiring a separate download.

## Troubleshooting

### XCFramework not found after release
- Check that `.gitignore` allows `!build/xcframework/`
- Verify the XCFramework was built: `ls -la build/xcframework/`
- Ensure the XCFramework is committed: `git status build/xcframework/`

### GitHub Actions build fails
- Check the Actions tab in GitHub
- Verify macOS runner is available
- Ensure Gradle wrapper is executable
- Check that Xcode command-line tools are installed (for `xcodebuild`)

### Package resolution fails in Xcode
- Verify the tag exists: `git ls-remote --tags origin`
- Check Package.swift syntax: `swift package dump-package`
- Ensure XCFramework path is correct in Package.swift

