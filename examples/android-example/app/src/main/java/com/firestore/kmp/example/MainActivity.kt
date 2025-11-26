package com.firestore.kmp.example

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            MaterialTheme {
                FirestoreExampleScreen()
            }
        }
    }
}

@Composable
fun FirestoreExampleScreen(viewModel: FirestoreViewModel = viewModel()) {
    val status by viewModel.status.collectAsState()
    val logMessages by viewModel.logMessages.collectAsState()
    val isConnected by viewModel.isConnected.collectAsState()
    val collectionPath by viewModel.collectionPath.collectAsState()
    val documentId by viewModel.documentId.collectAsState()
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .padding(16.dp),
        verticalArrangement = Arrangement.spacedBy(16.dp)
    ) {
        // Status indicator
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.Center,
            verticalAlignment = Alignment.CenterVertically
        ) {
            Box(
                modifier = Modifier
                    .size(12.dp)
                    .background(
                        color = if (isConnected) MaterialTheme.colorScheme.primary else MaterialTheme.colorScheme.error,
                        shape = androidx.compose.foundation.shape.CircleShape
                    )
            )
            Spacer(modifier = Modifier.width(8.dp))
            Text(
                text = status,
                style = MaterialTheme.typography.titleMedium
            )
        }
        
        // Collection and Document ID inputs
        Card {
            Column(
                modifier = Modifier.padding(16.dp),
                verticalArrangement = Arrangement.spacedBy(8.dp)
            ) {
                Text(
                    text = "Collection & Document",
                    style = MaterialTheme.typography.titleSmall
                )
                OutlinedTextField(
                    value = collectionPath,
                    onValueChange = { viewModel.collectionPath.value = it },
                    label = { Text("Collection") },
                    modifier = Modifier.fillMaxWidth()
                )
                OutlinedTextField(
                    value = documentId,
                    onValueChange = { viewModel.documentId.value = it },
                    label = { Text("Document ID") },
                    modifier = Modifier.fillMaxWidth()
                )
            }
        }
        
        // Action buttons
        Column(
            verticalArrangement = Arrangement.spacedBy(8.dp)
        ) {
            ActionButton("Create Document") { viewModel.createDocument() }
            ActionButton("Read Document") { viewModel.readDocument() }
            ActionButton("Update Document") { viewModel.updateDocument() }
            ActionButton("Query Collection") { viewModel.queryCollection() }
            
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.spacedBy(8.dp)
            ) {
                ActionButton(
                    "Start Listener",
                    modifier = Modifier.weight(1f)
                ) { viewModel.startListener() }
                ActionButton(
                    "Stop Listener",
                    modifier = Modifier.weight(1f)
                ) { viewModel.stopListener() }
            }
        }
        
        // Log view
        Card(
            modifier = Modifier.weight(1f)
        ) {
            Column(
                modifier = Modifier
                    .fillMaxSize()
                    .padding(16.dp)
            ) {
                Row(
                    modifier = Modifier.fillMaxWidth(),
                    horizontalArrangement = Arrangement.SpaceBetween,
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Text(
                        text = "Log",
                        style = MaterialTheme.typography.titleSmall
                    )
                    TextButton(onClick = { viewModel.clearLogs() }) {
                        Text("Clear")
                    }
                }
                
                SelectionContainer {
                    Column(
                        modifier = Modifier
                            .fillMaxSize()
                            .verticalScroll(rememberScrollState())
                    ) {
                        logMessages.forEach { message ->
                            Text(
                                text = message,
                                style = MaterialTheme.typography.bodySmall,
                                fontFamily = FontFamily.Monospace,
                                modifier = Modifier.padding(vertical = 2.dp)
                            )
                        }
                    }
                }
            }
        }
    }
}

@Composable
fun ActionButton(
    text: String,
    modifier: Modifier = Modifier,
    onClick: () -> Unit
) {
    Button(
        onClick = onClick,
        modifier = modifier.height(48.dp)
    ) {
        Text(text)
    }
}

