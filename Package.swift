// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "capturmobile",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "capturmobile",
            targets: ["capturmobile"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "capturmobile",
            path: "./capturmobile.xcframework"
        ),
    ]
)
