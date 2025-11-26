#!/bin/bash

# Build script to generate the Firestore KMP framework for iOS
# Run this script before building the iOS app in Xcode

set -e

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PROJECT_ROOT="$( cd "$SCRIPT_DIR/../.." && pwd )"

echo "Building Firestore KMP framework for iOS..."
cd "$PROJECT_ROOT"

# Build the framework for iOS
# This is a single-module project (root project), so we don't use module prefix
# Build all iOS targets - these tasks link the frameworks
echo "Building iOS frameworks..."
./gradlew linkDebugFrameworkIosArm64 \
    linkDebugFrameworkIosX64 \
    linkDebugFrameworkIosSimulatorArm64

# Create xcframework directory structure
FRAMEWORK_DIR="$SCRIPT_DIR/build/xcode-frameworks"
mkdir -p "$FRAMEWORK_DIR"

# The frameworks will be in build/bin/ios*/debugFramework/
# Create xcframework manually
XCFRAMEWORK_PATH="$FRAMEWORK_DIR/firestore-kmp.xcframework"
rm -rf "$XCFRAMEWORK_PATH"

# Create xcframework structure
mkdir -p "$XCFRAMEWORK_PATH/ios-arm64"
mkdir -p "$XCFRAMEWORK_PATH/ios-arm64_x86_64-simulator"

# Copy frameworks
echo "Creating xcframework..."
# Framework name uses underscore (firestore_kmp) not hyphen
FRAMEWORK_NAME="firestore_kmp.framework"
cp -R "$PROJECT_ROOT/build/bin/iosArm64/debugFramework/$FRAMEWORK_NAME" "$XCFRAMEWORK_PATH/ios-arm64/" 2>/dev/null || {
    echo "Warning: iosArm64 framework not found, trying alternative path..."
    # Try alternative path structure
    find "$PROJECT_ROOT/build" -name "$FRAMEWORK_NAME" -path "*/iosArm64/*" -exec cp -R {} "$XCFRAMEWORK_PATH/ios-arm64/" \;
}

# For simulator, combine both simulator architectures
SIMULATOR_FRAMEWORK="$XCFRAMEWORK_PATH/ios-arm64_x86_64-simulator/$FRAMEWORK_NAME"
mkdir -p "$SIMULATOR_FRAMEWORK"

# Copy simulator framework (prefer iosSimulatorArm64, fallback to iosX64)
if [ -d "$PROJECT_ROOT/build/bin/iosSimulatorArm64/debugFramework/$FRAMEWORK_NAME" ]; then
    cp -R "$PROJECT_ROOT/build/bin/iosSimulatorArm64/debugFramework/$FRAMEWORK_NAME/"* "$SIMULATOR_FRAMEWORK/" 2>/dev/null || true
elif [ -d "$PROJECT_ROOT/build/bin/iosX64/debugFramework/$FRAMEWORK_NAME" ]; then
    cp -R "$PROJECT_ROOT/build/bin/iosX64/debugFramework/$FRAMEWORK_NAME/"* "$SIMULATOR_FRAMEWORK/" 2>/dev/null || true
fi

# Create Info.plist for xcframework
cat > "$XCFRAMEWORK_PATH/Info.plist" <<EOF
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>AvailableLibraries</key>
	<array>
		<dict>
			<key>LibraryIdentifier</key>
			<string>ios-arm64</string>
			<key>LibraryPath</key>
			<string>firestore_kmp.framework</string>
			<key>SupportedArchitectures</key>
			<array>
				<string>arm64</string>
			</array>
			<key>SupportedPlatform</key>
			<string>ios</string>
		</dict>
		<dict>
			<key>LibraryIdentifier</key>
			<string>ios-arm64_x86_64-simulator</string>
			<key>LibraryPath</key>
			<string>firestore_kmp.framework</string>
			<key>SupportedArchitectures</key>
			<array>
				<string>arm64</string>
				<string>x86_64</string>
			</array>
			<key>SupportedPlatform</key>
			<string>ios</string>
			<key>SupportedPlatformVariant</key>
			<string>simulator</string>
		</dict>
	</array>
	<key>CFBundlePackageType</key>
	<string>XFWK</string>
	<key>XCFrameworkFormatVersion</key>
	<string>1.0</string>
</dict>
</plist>
EOF

echo ""
echo "Framework built successfully!"
echo "Location: $XCFRAMEWORK_PATH"
echo ""

# Copy framework to Xcode project root directory
XCODE_PROJECT_ROOT="$SCRIPT_DIR/ios-example"
if [ -d "$XCODE_PROJECT_ROOT" ]; then
    echo "Copying framework to Xcode project root..."
    cp -R "$XCFRAMEWORK_PATH" "$XCODE_PROJECT_ROOT/"
    echo "Framework copied to: $XCODE_PROJECT_ROOT/firestore-kmp.xcframework"
    echo ""
    echo "You can now add the framework in Xcode:"
    echo "  1. Select your project → Target → General"
    echo "  2. Frameworks, Libraries, and Embedded Content → Click '+'"
    echo "  3. Add: firestore-kmp.xcframework (should be in project root)"
    echo "  4. Select 'Embed & Sign'"
else
    echo "Note: Xcode project directory not found at $XCODE_PROJECT_ROOT"
    echo "Framework is available at: $XCFRAMEWORK_PATH"
fi

echo ""
echo "Note: If you need a properly signed xcframework, you may need to use Xcode's"
echo "xcodebuild -create-xcframework command or configure the Kotlin Multiplatform"
echo "plugin to generate it automatically."
