// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "firestore-kmp",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "FirestoreKMP",
            targets: ["FirestoreKMP"]
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "FirestoreKMP",
            path: "build/xcframework/firestore-kmp.xcframework"
        )
    ]
)

