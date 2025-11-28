#!/bin/bash

# Build script to create XCFramework for Swift Package Manager distribution
# This script builds release frameworks for all iOS targets and creates an XCFramework

set -e

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "$SCRIPT_DIR"

echo "Building Firestore KMP XCFramework for iOS distribution..."
echo ""

# Build release frameworks for all iOS targets
echo "Step 1: Building release frameworks..."
./gradlew clean
./gradlew linkReleaseFrameworkIosArm64 \
    linkReleaseFrameworkIosX64 \
    linkReleaseFrameworkIosSimulatorArm64

FRAMEWORK_NAME="firestore_kmp"
BUILD_XCFRAMEWORK_PATH="$SCRIPT_DIR/build/xcframework/firestore-kmp.xcframework"
DIST_XCFRAMEWORK_PATH="$SCRIPT_DIR/frameworks/firestore-kmp.xcframework"

# Clean previous XCFrameworks
rm -rf "$BUILD_XCFRAMEWORK_PATH"
rm -rf "$DIST_XCFRAMEWORK_PATH"
mkdir -p "$(dirname "$BUILD_XCFRAMEWORK_PATH")"
mkdir -p "$(dirname "$DIST_XCFRAMEWORK_PATH")"

# Paths to individual frameworks
IOS_ARM64_FRAMEWORK="$SCRIPT_DIR/build/bin/iosArm64/releaseFramework/${FRAMEWORK_NAME}.framework"
IOS_X64_FRAMEWORK="$SCRIPT_DIR/build/bin/iosX64/releaseFramework/${FRAMEWORK_NAME}.framework"
IOS_SIMULATOR_ARM64_FRAMEWORK="$SCRIPT_DIR/build/bin/iosSimulatorArm64/releaseFramework/${FRAMEWORK_NAME}.framework"

# Create universal simulator framework
echo ""
echo "Step 2: Creating universal simulator framework..."
UNIVERSAL_SIMULATOR_DIR="$SCRIPT_DIR/build/bin/iosSimulatorUniversal/releaseFramework"
mkdir -p "$UNIVERSAL_SIMULATOR_DIR"

# Copy iosSimulatorArm64 framework as base
cp -R "$IOS_SIMULATOR_ARM64_FRAMEWORK" "$UNIVERSAL_SIMULATOR_DIR/"

# Create universal binary using lipo
UNIVERSAL_BINARY="$UNIVERSAL_SIMULATOR_DIR/${FRAMEWORK_NAME}.framework/${FRAMEWORK_NAME}"
IOS_X64_BINARY="$IOS_X64_FRAMEWORK/${FRAMEWORK_NAME}"
IOS_SIMULATOR_ARM64_BINARY="$IOS_SIMULATOR_ARM64_FRAMEWORK/${FRAMEWORK_NAME}"

lipo -create "$IOS_X64_BINARY" "$IOS_SIMULATOR_ARM64_BINARY" -output "$UNIVERSAL_BINARY"

UNIVERSAL_SIMULATOR_FRAMEWORK="$UNIVERSAL_SIMULATOR_DIR/${FRAMEWORK_NAME}.framework"

# Create XCFramework using xcodebuild
echo ""
echo "Step 3: Creating XCFramework..."
xcodebuild -create-xcframework \
    -framework "$IOS_ARM64_FRAMEWORK" \
    -framework "$UNIVERSAL_SIMULATOR_FRAMEWORK" \
    -output "$BUILD_XCFRAMEWORK_PATH"

# Copy XCFramework to distribution directory
echo ""
echo "Step 4: Copying XCFramework to distribution directory..."
cp -R "$BUILD_XCFRAMEWORK_PATH" "$DIST_XCFRAMEWORK_PATH"

echo ""
echo "✅ XCFramework created successfully!"
echo "Build location: $BUILD_XCFRAMEWORK_PATH"
echo "Distribution location: $DIST_XCFRAMEWORK_PATH"
echo ""
echo "The XCFramework in 'frameworks/' is ready for Swift Package Manager distribution."
echo ""

