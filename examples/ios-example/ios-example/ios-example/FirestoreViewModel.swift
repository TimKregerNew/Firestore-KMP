import Foundation
import SwiftUI
import firestore_kmp

// Helper class to hold cancellation state that can be shared across Swift-Kotlin boundary
class CancellationState {
    @Published var isCancelled: Bool = false
    
    func cancel() {
        isCancelled = true
    }
    
    func reset() {
        isCancelled = false
    }
}

// Helper class to collect Flow values
class FlowCollector: Kotlinx_coroutines_coreFlowCollector {
    private let callback: (DocumentSnapshot?, Error?) -> Void
    private let cancellationState: CancellationState
    
    init(callback: @escaping (DocumentSnapshot?, Error?) -> Void, cancellationState: CancellationState) {
        self.callback = callback
        self.cancellationState = cancellationState
    }
    
    func emit(value: Any?, completionHandler: @escaping (Error?) -> Void) {
        // Check for cancellation first - this is critical for stopping the Flow
        // When cancelled, we need to signal the Flow to stop immediately
        if cancellationState.isCancelled {
            // Return cancellation error - this should cause the Flow to stop
            // The Flow builder should check ensureActive() after emit() which will detect cancellation
            let cancelError = NSError(domain: NSCocoaErrorDomain, code: NSUserCancelledError, userInfo: [
                NSLocalizedDescriptionKey: "Operation was cancelled"
            ])
            callback(nil, cancelError)
            // Call completion handler with error - this signals the Flow that emission failed
            // The Flow builder should then check ensureActive() which will throw CancellationException
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
            callback(nil, nil)
            completionHandler(nil)
        } else {
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
    @Published var collectionPath: String = "test-collection"
    @Published var documentId: String = "user123"
    
    private var firestore: Firestore?
    // Support multiple listeners - keyed by "collection/documentId"
    private var listenerTasks: [String: Task<Void, Never>] = [:]
    private var listenerCancellationStates: [String: CancellationState] = [:]
    private var lastLoggedSnapshots: [String: DocumentSnapshot] = [:]
    
    init() {
        initializeFirestore()
    }
    
    deinit {
        // Cancel all listeners
        for task in listenerTasks.values {
            task.cancel()
        }
        firestore?.close()
    }
    
    private func initializeFirestore() {
        Task {
            do {
                let auth = AuthProvider()
                firestore = try Firestore(
                    projectId: FirestoreConfig.projectId,
                    databaseId: FirestoreConfig.databaseId,
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
    
    func exportLogs() -> String {
        return logMessages.joined(separator: "\n")
    }
    
    func clearLogs() {
        logMessages.removeAll()
        log("Logs cleared")
    }
    
    private func formatDocumentFields(_ data: [String: Any?]?) -> String {
        guard let data = data, !data.isEmpty else {
            return "{}"
        }
        
        // Only show name, age, and email fields
        let fieldsToShow = ["name", "age", "email"]
        let filteredData = data.filter { fieldsToShow.contains($0.key) }
        
        guard !filteredData.isEmpty else {
            return "{}"
        }
        
        let formattedFields = filteredData.map { key, value in
            let valueString: String
            if let value = value {
                valueString = String(describing: value)
            } else {
                valueString = "null"
            }
            return "\(key)=\(valueString)"
        }.joined(separator: ", ")
        
        return "{\(formattedFields)}"
    }
    
    private func formatDocumentFields(_ snapshot: DocumentSnapshot) -> String {
        guard snapshot.exists else {
            return "(document does not exist)"
        }
        
        // Extract only name, age, and email fields
        let nameValue: Any? = snapshot.get(field: "name")
        let ageValue: Any? = snapshot.get(field: "age")
        let emailValue: Any? = snapshot.get(field: "email")
        
        var fields: [String] = []
        if let name = nameValue {
            fields.append("name=\(name)")
        }
        if let age = ageValue {
            fields.append("age=\(age)")
        }
        if let email = emailValue {
            fields.append("email=\(email)")
        }
        
        if fields.isEmpty {
            return "{}"
        }
        
        return "{\(fields.joined(separator: ", "))}"
    }
    
    func createDocument() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        guard !collectionPath.isEmpty, !documentId.isEmpty else {
            log("✗ Collection path and document ID must be set")
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
                
                let docRef = firestore.collection(path: collectionPath).document(id: documentId)
                let snapshot = try await docRef.set(data: data as [String : Any])
                let fields = formatDocumentFields(snapshot)
                log("✓ Document created: \(snapshot.id) in collection '\(collectionPath)' with fields: \(fields)")
            } catch {
                let errorMessage = error.localizedDescription
                log("✗ Failed to create document: \(errorMessage)")
                // Also print to console for debugging
                print("Create document error: \(error)")
                let nsError = error as NSError
                print("Error domain: \(nsError.domain), code: \(nsError.code)")
                print("Error userInfo: \(nsError.userInfo)")
            }
        }
    }
    
    func readDocument() {
        guard let firestore = firestore else {
            log("Firestore not initialized")
            return
        }
        
        guard !collectionPath.isEmpty, !documentId.isEmpty else {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        Task {
            do {
                let docRef = firestore.collection(path: collectionPath).document(id: documentId)
                let snapshot = try await docRef.get()
                
                if snapshot.exists {
                    let fields = formatDocumentFields(snapshot)
                    log("✓ Document read from '\(collectionPath)/\(documentId)': \(fields)")
                } else {
                    log("✗ Document '\(collectionPath)/\(documentId)' does not exist")
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
        
        guard !collectionPath.isEmpty, !documentId.isEmpty else {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        Task {
            do {
                let docRef = firestore.collection(path: collectionPath).document(id: documentId)
                let fields: [String: Any?] = [
                    "age": 31,
                    "lastUpdated": Int64(Date().timeIntervalSince1970 * 1000)
                ]
                _ = try await docRef.update(fields: fields as [String : Any])
                let fieldsStr = formatDocumentFields(fields)
                log("✓ Document '\(collectionPath)/\(documentId)' updated with fields: \(fieldsStr)")
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
        
        guard !collectionPath.isEmpty else {
            log("✗ Collection path must be set")
            return
        }
        
        Task {
            do {
                let query = firestore.collection(path: collectionPath)
                    .where(field: "age", operator: ">=", value: 18)
                    .orderBy(field: "age", direction: "DESCENDING")
                    .limit(count: 10)
                
                let snapshot = try await query.get()
                log("✓ Query on '\(collectionPath)' returned \(snapshot.size) documents")
                for doc in snapshot.documents {
                    let fields = formatDocumentFields(doc)
                    log("  - \(doc.id): \(fields)")
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
        
        guard !collectionPath.isEmpty, !documentId.isEmpty else {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        // Create a unique key for this listener
        let listenerKey = "\(collectionPath)/\(documentId)"
        
        // Stop existing listener for this path if any
        stopListener(for: listenerKey)
        
        // Capture collection and document values before creating the task
        let collection = collectionPath
        let document = documentId
        
        // Create a new cancellation state for this listener
        let cancellationState = CancellationState()
        listenerCancellationStates[listenerKey] = cancellationState
        
        // Create the task - Task is a struct so we can capture it directly without weak
        let task = Task { [weak self, weak cancellationState] in
            guard let self = self, let cancellationState = cancellationState else { return }
            
            // Check for cancellation at the start
            guard !Task.isCancelled && !cancellationState.isCancelled else { return }
            
            do {
                let docRef = firestore.collection(path: collection).document(id: document)
                let flow = docRef.snapshots(pollIntervalMs: 2000)
                
                // Use collect with FlowCollector for Kotlin Flow
                // Pass the cancellation state so it can be checked from Kotlin context
                let collector = FlowCollector(
                    callback: { [weak self, listenerKey] snapshot, error in
                        guard let self = self else { return }
                        
                        if let error = error {
                            // Check if it's a cancellation error
                            if (error as NSError).code == NSUserCancelledError {
                                Task { @MainActor in
                                    self.log("✓ [\(listenerKey)] Listener cancelled")
                                }
                                return
                            }
                            
                            Task { @MainActor in
                                self.log("✗ [\(listenerKey)] Listener error: \(error.localizedDescription)")
                            }
                            return
                        }
                        
                        guard let snapshot = snapshot else { return }
                        
                        Task { @MainActor in
                            // Check if this snapshot contains an error
                            if let error = snapshot.error {
                                self.log("✗ [\(listenerKey)] Listener error: \(error)")
                                return
                            }
                            
                            // Only log if the document has actually changed
                            let lastSnapshot = self.lastLoggedSnapshots[listenerKey]
                            if self.hasDocumentChanged(old: lastSnapshot, new: snapshot) {
                                if snapshot.exists {
                                    let fields = self.formatDocumentFields(snapshot)
                                    self.log("📡 [\(listenerKey)] Document changed: \(fields)")
                                } else {
                                    self.log("📡 [\(listenerKey)] Listener: Document does not exist")
                                }
                                self.lastLoggedSnapshots[listenerKey] = snapshot
                            }
                            // If unchanged, silently skip (emission was only for cancellation check)
                        }
                    },
                    cancellationState: cancellationState
                )
                
                // Collect the flow - cancellation will be handled by ensureActive() in the Flow
                // When the Swift Task is cancelled, this should throw CancellationError,
                // which will cancel the underlying Kotlin coroutine context
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
        
        listenerTasks[listenerKey] = task
        log("✓ Listener started for '\(listenerKey)'")
    }
    
    func stopListener() {
        // Stop the listener for the current collection/document
        let listenerKey = "\(collectionPath)/\(documentId)"
        stopListener(for: listenerKey)
    }
    
    private func stopListener(for listenerKey: String) {
        // Cancel the cancellation state first - this will be checked by FlowCollector
        if let cancellationState = listenerCancellationStates[listenerKey] {
            cancellationState.cancel()
        }
        
        // Then cancel the Task
        listenerTasks[listenerKey]?.cancel()
        
        listenerTasks.removeValue(forKey: listenerKey)
        listenerCancellationStates.removeValue(forKey: listenerKey)
        lastLoggedSnapshots.removeValue(forKey: listenerKey)
        log("✓ Listener stopped for '\(listenerKey)'")
    }
    
    func stopAllListeners() {
        let keys = Array(listenerTasks.keys)
        for key in keys {
            stopListener(for: key)
        }
        log("✓ All listeners stopped")
    }
    
    private func hasDocumentChanged(old: DocumentSnapshot?, new: DocumentSnapshot) -> Bool {
        // If no previous snapshot, this is the first one - log it
        guard let old = old else { return true }
        
        // Check if existence changed
        if old.exists != new.exists {
            return true
        }
        
        // If both don't exist, no change
        if !old.exists && !new.exists {
            return false
        }
        
        // Compare the data
        let oldData = old.getData() ?? [:]
        let newData = new.getData() ?? [:]
        
        // Check if data changed
        if oldData.count != newData.count {
            return true
        }
        
        // Check if any values changed
        for (key, value) in oldData {
            if let newValue = newData[key] {
                // Compare values - this is a simple comparison
                // For more complex types, you might need deeper comparison
                if !areValuesEqual(value, newValue) {
                    return true
                }
            } else {
                // Key exists in old but not in new
                return true
            }
        }
        
        // Check if any new keys were added
        for key in newData.keys {
            if oldData[key] == nil {
                return true
            }
        }
        
        return false
    }
    
    private func areValuesEqual(_ value1: Any?, _ value2: Any?) -> Bool {
        // Handle nil cases
        if value1 == nil && value2 == nil {
            return true
        }
        if value1 == nil || value2 == nil {
            return false
        }
        
        // For simple types, use equality comparison
        if let v1 = value1 as? NSObject, let v2 = value2 as? NSObject {
            return v1.isEqual(v2)
        }
        
        // Fallback to string comparison for complex types
        return String(describing: value1) == String(describing: value2)
    }
}

