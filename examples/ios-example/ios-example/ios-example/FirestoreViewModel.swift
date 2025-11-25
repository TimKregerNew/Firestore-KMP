import Foundation
import SwiftUI
import firestore_kmp

// Helper class to collect Flow values
class FlowCollector: Kotlinx_coroutines_coreFlowCollector {
    private let callback: (DocumentSnapshot?, Error?) -> Void
    private let isCancelled: () -> Bool
    
    init(callback: @escaping (DocumentSnapshot?, Error?) -> Void, isCancelled: @escaping () -> Bool) {
        self.callback = callback
        self.isCancelled = isCancelled
    }
    
    func emit(value: Any?, completionHandler: @escaping (Error?) -> Void) {
        // Check for cancellation first
        if isCancelled() {
            // Return cancellation error to stop the Flow
            let cancelError = NSError(domain: NSCocoaErrorDomain, code: NSUserCancelledError, userInfo: [
                NSLocalizedDescriptionKey: "Operation was cancelled"
            ])
            callback(nil, cancelError)
            completionHandler(cancelError)
            return
        }
        
        // Handle exceptions properly - if value is an exception, pass it as error
        if let exception = value as? NSException {
            let error = NSError(domain: "FirestoreKMP", code: 1, userInfo: [
                NSLocalizedDescriptionKey: exception.description
            ])
            callback(nil, error)
            completionHandler(error)
        } else if let snapshot = value as? DocumentSnapshot {
            callback(snapshot, nil)
            completionHandler(nil)
        } else if value == nil {
            // Nil value might indicate an error
            callback(nil, nil)
            completionHandler(nil)
        } else {
            // Unknown value type
            callback(nil, nil)
            completionHandler(nil)
        }
    }
}

@MainActor
class FirestoreViewModel: ObservableObject {
    @Published var status: String = "Initializing..."
    @Published var logMessages: [String] = []
    @Published var isConnected: Bool = false
    
    private var firestore: Firestore?
    private var listenerTask: Task<Void, Never>?
    
    init() {
        initializeFirestore()
    }
    
    deinit {
        listenerTask?.cancel()
        firestore?.close()
    }
    
    private func initializeFirestore() {
        Task {
            do {
                let auth = AuthProvider()
                firestore = try Firestore(
                    projectId: FirestoreConfig.projectId,
                    databaseId: "(default)",
                    auth: auth,
                    httpClient: nil
                )
                status = "Connected to Firestore"
                isConnected = true
                log("Firestore initialized successfully")
            } catch {
                status = "Error: \(error.localizedDescription)"
                isConnected = false
                log("Failed to initialize Firestore: \(error)")
            }
        }
    }
    
    func log(_ message: String) {
        let timestamp = DateFormatter.localizedString(from: Date(), dateStyle: .none, timeStyle: .medium)
        let logMessage = "[\(timestamp)] \(message)"
        logMessages.append(logMessage)
        // Keep only last 100 log messages
        if logMessages.count > 100 {
            logMessages.removeFirst()
        }
    }
    
    func createDocument() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        Task {
            do {
                let data: [String: Any?] = [
                    "name": "John Doe",
                    "email": "john@example.com",
                    "age": 30,
                    "createdAt": Int64(Date().timeIntervalSince1970 * 1000)
                ]
                
                let docRef = firestore.collection(path: "users").document(id: "user123")
                let snapshot = try await docRef.set(data: data)
                log("✓ Document created: \(snapshot.id)")
            } catch {
                log("✗ Failed to create document: \(error.localizedDescription)")
            }
        }
    }
    
    func readDocument() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        Task {
            do {
                let docRef = firestore.collection(path: "users").document(id: "user123")
                let snapshot = try await docRef.get()
                
                if snapshot.exists {
                    let data = snapshot.getData()
                    log("✓ Document read: \(data ?? [:])")
                } else {
                    log("✗ Document does not exist")
                }
            } catch {
                log("✗ Failed to read document: \(error.localizedDescription)")
            }
        }
    }
    
    func updateDocument() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        Task {
            do {
                let docRef = firestore.collection(path: "users").document(id: "user123")
                let fields: [String: Any?] = [
                    "age": 31,
                    "lastUpdated": Int64(Date().timeIntervalSince1970 * 1000)
                ]
                _ = try await docRef.update(fields: fields)
                log("✓ Document updated")
            } catch {
                log("✗ Failed to update document: \(error.localizedDescription)")
            }
        }
    }
    
    func queryCollection() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        Task {
            do {
                let query = firestore.collection(path: "users")
                    .where(field: "age", operator: ">=", value: 18)
                    .orderBy(field: "age", direction: "DESCENDING")
                    .limit(count: 10)
                
                let snapshot = try await query.get()
                log("✓ Query returned \(snapshot.size) documents")
                for doc in snapshot.documents {
                    log("  - \(doc.id): \(doc.getData() ?? [:])")
                }
            } catch {
                log("✗ Failed to query: \(error.localizedDescription)")
            }
        }
    }
    
    func startListener() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        listenerTask?.cancel()
        
        listenerTask = Task {
            // Check for cancellation at the start
            guard !Task.isCancelled else { return }
            
            do {
                let docRef = firestore.collection(path: "users").document(id: "user123")
                let flow = docRef.snapshots(pollIntervalMs: 2000)
                
                // Use collect with FlowCollector for Kotlin Flow
                let collector = FlowCollector(
                    callback: { [weak self] snapshot, error in
                        guard let self = self else { return }
                        
                        if let error = error {
                            // Check if it's a cancellation error
                            if (error as NSError).code == NSUserCancelledError {
                                Task { @MainActor in
                                    self.log("✓ Listener cancelled")
                                }
                                return
                            }
                            
                            Task { @MainActor in
                                self.log("✗ Listener error: \(error.localizedDescription)")
                            }
                            return
                        }
                        
                        guard let snapshot = snapshot else { return }
                        
                        Task { @MainActor in
                            // Check if this snapshot contains an error
                            if let error = snapshot.error {
                                self.log("✗ Listener error: \(error)")
                                return
                            }
                            
                            if snapshot.exists {
                                self.log("📡 Listener update: \(snapshot.getData() ?? [:])")
                            } else {
                                self.log("📡 Listener: Document does not exist")
                            }
                        }
                    },
                    isCancelled: { Task.isCancelled }
                )
                
                // Collect the flow - cancellation will be handled by ensureActive() in the Flow
                try await flow.collect(collector: collector)
            } catch is CancellationError {
                // Cancellation is expected when stopping the listener
                await MainActor.run {
                    self.log("✓ Listener cancelled")
                }
            } catch {
                await MainActor.run {
                    self.log("✗ Flow collection error: \(error.localizedDescription)")
                }
            }
        }
        
        log("✓ Listener started")
    }
    
    func stopListener() {
        listenerTask?.cancel()
        listenerTask = nil
        log("✓ Listener stopped")
    }
}

