// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "ios-example",
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
            path: "../../build/xcode-frameworks/FirestoreKMP.xcframework"
        )
    ]
)




