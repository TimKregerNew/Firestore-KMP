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
XCFRAMEWORK_PATH="$SCRIPT_DIR/build/xcframework/firestore-kmp.xcframework"

# Clean previous XCFramework
rm -rf "$XCFRAMEWORK_PATH"
mkdir -p "$(dirname "$XCFRAMEWORK_PATH")"

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
    -output "$XCFRAMEWORK_PATH"

echo ""
echo "✅ XCFramework created successfully!"
echo "Location: $XCFRAMEWORK_PATH"
echo ""
echo "You can now use this XCFramework in your Swift Package Manager Package.swift:"
echo "  .binaryTarget(name: \"FirestoreKMP\", path: \"firestore-kmp.xcframework\")"
echo ""

