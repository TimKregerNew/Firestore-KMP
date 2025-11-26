package com.firestore.kmp.example

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.firestore.kmp.api.Firestore
import com.firestore.kmp.models.DocumentSnapshot
import com.firestore.kmp.models.FirestoreValue
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.launch
import kotlinx.coroutines.Job
import java.text.SimpleDateFormat
import java.util.*

class FirestoreViewModel : ViewModel() {
    private var firestore: Firestore? = null
    
    private val _status = MutableStateFlow("Initializing...")
    val status: StateFlow<String> = _status.asStateFlow()
    
    private val _logMessages = MutableStateFlow<List<String>>(emptyList())
    val logMessages: StateFlow<List<String>> = _logMessages.asStateFlow()
    
    private val _isConnected = MutableStateFlow(false)
    val isConnected: StateFlow<Boolean> = _isConnected.asStateFlow()
    
    val collectionPath = MutableStateFlow("test-collection")
    val documentId = MutableStateFlow("user123")
    
    // Support multiple listeners - keyed by "collection/documentId"
    private val listenerJobs: MutableMap<String, Job> = mutableMapOf()
    private val lastLoggedSnapshots: MutableMap<String, DocumentSnapshot> = mutableMapOf()
    
    init {
        initializeFirestore()
    }
    
    override fun onCleared() {
        super.onCleared()
        // Cancel all listeners
        listenerJobs.values.forEach { it.cancel() }
        firestore?.close()
    }
    
    private fun initializeFirestore() {
        viewModelScope.launch {
            try {
                val auth = AuthProvider()
                firestore = Firestore(
                    projectId = FirestoreConfig.PROJECT_ID,
                    databaseId = FirestoreConfig.DATABASE_ID,
                    auth = auth,
                    httpClient = null
                )
                _status.value = "Connected to Firestore"
                _isConnected.value = true
                log("Firestore initialized successfully")
            } catch (e: Exception) {
                _status.value = "Error: ${e.message}"
                _isConnected.value = false
                log("Failed to initialize Firestore: $e")
            }
        }
    }
    
    fun log(message: String) {
        val timestamp = SimpleDateFormat("HH:mm:ss", Locale.getDefault()).format(Date())
        val logMessage = "[$timestamp] $message"
        val currentLogs = _logMessages.value.toMutableList()
        currentLogs.add(logMessage)
        // Keep only last 100 log messages
        if (currentLogs.size > 100) {
            currentLogs.removeFirst()
        }
        _logMessages.value = currentLogs
    }
    
    fun clearLogs() {
        _logMessages.value = emptyList()
        log("Logs cleared")
    }
    
    private fun formatDocumentFields(data: Map<String, Any?>?): String {
        if (data == null || data.isEmpty()) {
            return "{}"
        }
        
        // Only show name, age, and email fields
        val fieldsToShow = listOf("name", "age", "email")
        val filteredData = data.filter { fieldsToShow.contains(it.key) }
        
        if (filteredData.isEmpty()) {
            return "{}"
        }
        
        val formattedFields = filteredData.map { (key, value) ->
            "$key=$value"
        }.joinToString(", ")
        
        return "{$formattedFields}"
    }
    
    private fun formatDocumentFields(snapshot: DocumentSnapshot): String {
        if (!snapshot.exists) {
            return "(document does not exist)"
        }
        
        // Extract only name, age, and email fields
        val nameValue = snapshot.get<String>("name")
        val ageValue = snapshot.get<Long>("age")
        val emailValue = snapshot.get<String>("email")
        
        val fields = mutableListOf<String>()
        nameValue?.let { fields.add("name=$it") }
        ageValue?.let { fields.add("age=$it") }
        emailValue?.let { fields.add("email=$it") }
        
        if (fields.isEmpty()) {
            return "{}"
        }
        
        return "{${fields.joinToString(", ")}}"
    }
    
    fun createDocument() {
        val firestore = firestore ?: run {
            log("Firestore not initialized")
            return
        }
        
        val collection = collectionPath.value
        val document = documentId.value
        
        if (collection.isEmpty() || document.isEmpty()) {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        viewModelScope.launch {
            try {
                val data = mapOf(
                    "name" to "John Doe",
                    "email" to "john@example.com",
                    "age" to 30L,
                    "createdAt" to System.currentTimeMillis()
                )
                
                val docRef = firestore.collection(collection).document(document)
                val snapshot = docRef.set(data)
                val fields = formatDocumentFields(snapshot)
                log("✓ Document created: ${snapshot.id} in collection '$collection' with fields: $fields")
            } catch (e: Exception) {
                log("✗ Failed to create document: ${e.message}")
                e.printStackTrace()
            }
        }
    }
    
    fun readDocument() {
        val firestore = firestore ?: run {
            log("Firestore not initialized")
            return
        }
        
        val collection = collectionPath.value
        val document = documentId.value
        
        if (collection.isEmpty() || document.isEmpty()) {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        viewModelScope.launch {
            try {
                val docRef = firestore.collection(collection).document(document)
                val snapshot = docRef.get()
                
                if (snapshot.exists) {
                    val fields = formatDocumentFields(snapshot)
                    log("✓ Document read from '$collection/$document': $fields")
                } else {
                    log("✗ Document '$collection/$document' does not exist")
                }
            } catch (e: Exception) {
                log("✗ Failed to read document: ${e.message}")
            }
        }
    }
    
    fun updateDocument() {
        val firestore = firestore ?: run {
            log("Firestore not initialized")
            return
        }
        
        val collection = collectionPath.value
        val document = documentId.value
        
        if (collection.isEmpty() || document.isEmpty()) {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        viewModelScope.launch {
            try {
                val docRef = firestore.collection(collection).document(document)
                val fields = mapOf(
                    "age" to 31L,
                    "lastUpdated" to System.currentTimeMillis()
                )
                docRef.update(fields)
                val fieldsStr = formatDocumentFields(fields)
                log("✓ Document '$collection/$document' updated with fields: $fieldsStr")
            } catch (e: Exception) {
                log("✗ Failed to update document: ${e.message}")
            }
        }
    }
    
    fun queryCollection() {
        val firestore = firestore ?: run {
            log("Firestore not initialized")
            return
        }
        
        val collection = collectionPath.value
        
        if (collection.isEmpty()) {
            log("✗ Collection path must be set")
            return
        }
        
        viewModelScope.launch {
            try {
                val query = firestore.collection(collection)
                    .where("age", ">=", 18L)
                    .orderBy("age", "DESCENDING")
                    .limit(10)
                
                val snapshot = query.get()
                log("✓ Query on '$collection' returned ${snapshot.size} documents")
                snapshot.documents.forEach { doc ->
                    val fields = formatDocumentFields(doc)
                    log("  - ${doc.id}: $fields")
                }
            } catch (e: Exception) {
                log("✗ Failed to query: ${e.message}")
            }
        }
    }
    
    fun startListener() {
        val firestore = firestore ?: run {
            log("Firestore not initialized")
            return
        }
        
        val collection = collectionPath.value
        val document = documentId.value
        
        if (collection.isEmpty() || document.isEmpty()) {
            log("✗ Collection path and document ID must be set")
            return
        }
        
        val listenerKey = "$collection/$document"
        
        // Stop existing listener for this path if any
        stopListener(listenerKey)
        
        val job = viewModelScope.launch {
            try {
                val docRef = firestore.collection(collection).document(document)
                val flow = docRef.snapshots(2000)
                
                flow.collect { snapshot ->
                    // Check if document has changed
                    val lastSnapshot = lastLoggedSnapshots[listenerKey]
                    if (hasDocumentChanged(lastSnapshot, snapshot)) {
                        if (snapshot.exists) {
                            val fields = formatDocumentFields(snapshot)
                            log("📡 [$listenerKey] Document changed: $fields")
                        } else {
                            log("📡 [$listenerKey] Listener: Document does not exist")
                        }
                        lastLoggedSnapshots[listenerKey] = snapshot
                    }
                }
            } catch (e: kotlinx.coroutines.CancellationException) {
                log("✓ [$listenerKey] Listener cancelled")
            } catch (e: Exception) {
                log("✗ [$listenerKey] Listener error: ${e.message}")
            }
        }
        
        listenerJobs[listenerKey] = job
        log("✓ Listener started for '$listenerKey'")
    }
    
    fun stopListener() {
        val listenerKey = "${collectionPath.value}/${documentId.value}"
        stopListener(listenerKey)
    }
    
    private fun stopListener(listenerKey: String) {
        listenerJobs[listenerKey]?.cancel()
        listenerJobs.remove(listenerKey)
        lastLoggedSnapshots.remove(listenerKey)
        log("✓ Listener stopped for '$listenerKey'")
    }
    
    fun stopAllListeners() {
        listenerJobs.keys.toList().forEach { key ->
            stopListener(key)
        }
        log("✓ All listeners stopped")
    }
    
    private fun hasDocumentChanged(old: DocumentSnapshot?, new: DocumentSnapshot): Boolean {
        if (old == null) return true
        
        if (old.exists != new.exists) return true
        if (!old.exists && !new.exists) return false
        
        val oldData = old.getData() ?: emptyMap<String, com.firestore.kmp.models.FirestoreValue>()
        val newData = new.getData() ?: emptyMap<String, com.firestore.kmp.models.FirestoreValue>()
        
        if (oldData.size != newData.size) return true
        
        for ((key, value) in oldData) {
            val newValue = newData[key]
            if (newValue == null || !areFirestoreValuesEqual(value, newValue)) {
                return true
            }
        }
        
        for (key in newData.keys) {
            if (!oldData.containsKey(key)) {
                return true
            }
        }
        
        return false
    }
    
    private fun areFirestoreValuesEqual(v1: com.firestore.kmp.models.FirestoreValue, v2: com.firestore.kmp.models.FirestoreValue): Boolean {
        return v1.stringValue == v2.stringValue &&
               v1.integerValue == v2.integerValue &&
               v1.doubleValue == v2.doubleValue &&
               v1.booleanValue == v2.booleanValue &&
               v1.nullValue == v2.nullValue
    }
}

