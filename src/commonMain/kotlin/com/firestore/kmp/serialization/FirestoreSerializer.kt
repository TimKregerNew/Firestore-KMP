package com.firestore.kmp.serialization

import com.firestore.kmp.models.*

/**
 * Serializes Kotlin values to Firestore value format.
 */
object FirestoreSerializer {
    
    /**
     * Converts a Kotlin value to FirestoreValue.
     */
    fun toFirestoreValue(value: Any?): FirestoreValue {
        return when (value) {
            null -> FirestoreValue(nullValue = "NULL_VALUE")
            is String -> FirestoreValue(stringValue = value)
            is Int -> FirestoreValue(integerValue = value.toString())
            is Long -> FirestoreValue(integerValue = value.toString())
            is Double -> FirestoreValue(doubleValue = value)
            is Float -> FirestoreValue(doubleValue = value.toDouble())
            is Boolean -> FirestoreValue(booleanValue = value)
            is Map<*, *> -> {
                val fields = value.mapKeys { it.key.toString() }
                    .mapValues { toFirestoreValue(it.value) }
                FirestoreValue(mapValue = MapValue(fields))
            }
            is List<*> -> {
                val values = value.map { toFirestoreValue(it) }
                FirestoreValue(arrayValue = ArrayValue(values))
            }
            is Array<*> -> {
                val values = value.map { toFirestoreValue(it) }
                FirestoreValue(arrayValue = ArrayValue(values))
            }
            is FirestoreValue -> value
            else -> {
                // Fallback to string representation for unknown types
                    FirestoreValue(stringValue = value.toString())
            }
        }
    }
    
    /**
     * Converts a map of Kotlin values to Firestore document fields.
     */
    fun toFirestoreFields(data: Map<String, Any?>): Map<String, FirestoreValue> {
        return data.mapValues { toFirestoreValue(it.value) }
    }
    
    /**
     * Creates a FirestoreDocument from a map of data.
     */
    fun toFirestoreDocument(
        name: String,
        data: Map<String, Any?>,
        createTime: String? = null,
        updateTime: String? = null
    ): FirestoreDocument {
        return FirestoreDocument(
            name = name,
            fields = toFirestoreFields(data),
            createTime = createTime,
            updateTime = updateTime
        )
    }
}

