import SwiftUI

struct ContentView: View {
    @StateObject private var viewModel = FirestoreViewModel()
    
    var body: some View {
        NavigationView {
            VStack(spacing: 16) {
                // Status indicator
                HStack {
                    Circle()
                        .fill(viewModel.isConnected ? Color.green : Color.red)
                        .frame(width: 12, height: 12)
                    Text(viewModel.status)
                        .font(.headline)
                }
                .padding()
                .frame(maxWidth: .infinity)
                .background(Color(.systemGray6))
                .cornerRadius(8)
                
                // Collection and Document ID inputs
                VStack(alignment: .leading, spacing: 12) {
                    Text("Collection & Document")
                        .font(.headline)
                        .padding(.horizontal)
                    
                    VStack(spacing: 8) {
                        HStack {
                            Text("Collection:")
                                .frame(width: 100, alignment: .leading)
                            TextField("test-collection", text: $viewModel.collectionPath)
                                .textFieldStyle(RoundedBorderTextFieldStyle())
                        }
                        
                        HStack {
                            Text("Document ID:")
                                .frame(width: 100, alignment: .leading)
                            TextField("user123", text: $viewModel.documentId)
                                .textFieldStyle(RoundedBorderTextFieldStyle())
                        }
                    }
                    .padding()
                    .background(Color(.systemGray6))
                    .cornerRadius(8)
                }
                
                // Action buttons
                VStack(spacing: 12) {
                    ActionButton(title: "Create Document", action: viewModel.createDocument)
                    ActionButton(title: "Read Document", action: viewModel.readDocument)
                    ActionButton(title: "Update Document", action: viewModel.updateDocument)
                    ActionButton(title: "Query Collection", action: viewModel.queryCollection)
                    
                    HStack(spacing: 12) {
                        ActionButton(title: "Start Listener", action: viewModel.startListener)
                        ActionButton(title: "Stop Listener", action: viewModel.stopListener)
                    }
                }
                
                // Log view
                VStack(alignment: .leading, spacing: 8) {
                    HStack {
                        Text("Log")
                            .font(.headline)
                        Spacer()
                        Button(action: {
                            viewModel.clearLogs()
                        }) {
                            Image(systemName: "trash")
                                .font(.system(size: 16))
                        }
                        .buttonStyle(.plain)
                    }
                    .padding(.horizontal)
                    
                    ScrollView {
                        Text(viewModel.logMessages.joined(separator: "\n"))
                            .font(.system(.caption, design: .monospaced))
                            .frame(maxWidth: .infinity, alignment: .leading)
                            .textSelection(.enabled)
                            .padding(.horizontal, 8)
                            .padding(.vertical, 4)
                    }
                    .frame(maxHeight: 300)
                    .background(Color(.systemGray6))
                    .cornerRadius(8)
                }
                
                Spacer()
            }
            .padding()
            .navigationTitle("Firestore KMP Example")
        }
    }
}

struct ActionButton: View {
    let title: String
    let action: () -> Void
    
    var body: some View {
        Button(action: action) {
            Text(title)
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)
                .frame(maxWidth: .infinity)
                .frame(height: 44)
                .background(Color.blue)
                .cornerRadius(8)
        }
    }
}

#Preview {
    ContentView()
}
