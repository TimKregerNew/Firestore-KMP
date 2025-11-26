import Foundation
import firestore_kmp

class AuthProvider: FirestoreAuth {
    // TODO: Implement token retrieval from Firebase Auth
    // For example, using Firebase iOS SDK:
    // func getIdToken() async throws -> String? {
    //     return try await Auth.auth().currentUser?.getIDToken()
    // }
    
    func getIdToken() async throws -> String? {
        return FirestoreConfig.serviceAccountToken
    }
    
    func getFreshIdToken() async throws -> String? {
        return try await getIdToken()
    }
}

