pluginManagement {
    repositories {
        google()
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
    }
}

rootProject.name = "android-example"
include(":app")

// Include the parent firestore-kmp project as a composite build
includeBuild("../..") {
    dependencySubstitution {
        substitute(module("com.firestore:firestore-kmp")).using(project(":"))
    }
}

