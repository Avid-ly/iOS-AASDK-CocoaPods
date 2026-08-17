// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "AASDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "AASDK",
            type: .static,
            targets: [
                "AASAccount",
                "AASDKSupport"
            ]
        )
    ],
    dependencies: [
        .package(url: "https://github.com/facebook/facebook-ios-sdk.git", from: "18.1.0")
    ],
    targets: [
        .target(
            name: "AASDKSupport",
            dependencies: [
                .product(name: "FacebookLogin", package: "facebook-ios-sdk")
            ],
            path: ".",
            sources: [
                "Sources/AASDKPackageSupport.swift"
            ],
            resources: [
                .copy("Framework/AASDK/AASAccountSDK.bundle")
            ],
            linkerSettings: [
                .linkedLibrary("sqlite3"),
                .linkedLibrary("z"),
                .linkedLibrary("c++"),
                .linkedLibrary("xml2"),
                .linkedLibrary("resolv"),
                .linkedFramework("AdSupport"),
                .linkedFramework("AuthenticationServices"),
                .linkedFramework("AVFoundation"),
                .linkedFramework("CFNetwork"),
                .linkedFramework("CoreGraphics"),
                .linkedFramework("CoreMedia"),
                .linkedFramework("CoreTelephony"),
                .linkedFramework("EventKit"),
                .linkedFramework("Foundation"),
                .linkedFramework("GameKit"),
                .linkedFramework("JavaScriptCore"),
                .linkedFramework("MediaPlayer"),
                .linkedFramework("MessageUI"),
                .linkedFramework("QuartzCore"),
                .linkedFramework("Social"),
                .linkedFramework("StoreKit"),
                .linkedFramework("SystemConfiguration"),
                .linkedFramework("UIKit"),
                .linkedFramework("WatchConnectivity"),
                .linkedFramework("WebKit")
            ]
        ),
        .binaryTarget(
            name: "AASAccount",
            path: "Framework/AASDK/AASAccount.xcframework"
        )
    ]
)
