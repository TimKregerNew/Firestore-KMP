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
                    Text("Log")
                        .font(.headline)
                        .padding(.horizontal)
                    
                    ScrollViewReader { proxy in
                        ScrollView {
                            VStack(alignment: .leading, spacing: 4) {
                                ForEach(viewModel.logMessages.indices, id: \.self) { index in
                                    Text(viewModel.logMessages[index])
                                        .font(.system(.caption, design: .monospaced))
                                        .frame(maxWidth: .infinity, alignment: .leading)
                                        .padding(.horizontal, 8)
                                        .padding(.vertical, 2)
                                }
                            }
                            .padding(.vertical, 4)
                        }
                        .frame(maxHeight: 300)
                        .background(Color(.systemGray6))
                        .cornerRadius(8)
                        .onChange(of: viewModel.logMessages.count) { _ in
                            if let lastIndex = viewModel.logMessages.indices.last {
                                withAnimation {
                                    proxy.scrollTo(lastIndex, anchor: .bottom)
                                }
                            }
                        }
                    }
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
