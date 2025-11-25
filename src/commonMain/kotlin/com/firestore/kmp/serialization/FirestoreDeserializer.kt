package com.firestore.kmp.serialization

import com.firestore.kmp.models.FirestoreValue
import com.firestore.kmp.models.ValueType

/**
 * Deserializes Firestore values to Kotlin types.
 */
object FirestoreDeserializer {
    
    /**
     * Converts a FirestoreValue to a Kotlin value.
     */
    fun fromFirestoreValue(value: FirestoreValue): Any? {
        return when (value.type) {
            ValueType.NULL -> null
            ValueType.STRING -> value.stringValue
            ValueType.INTEGER -> value.integerValue?.toLongOrNull() ?: value.integerValue
            ValueType.DOUBLE -> value.doubleValue
            ValueType.BOOLEAN -> value.booleanValue
            ValueType.TIMESTAMP -> value.timestampValue
            ValueType.REFERENCE -> value.referenceValue
            ValueType.ARRAY -> {
                value.arrayValue?.values?.map { fromFirestoreValue(it) } ?: emptyList<Any?>()
            }
            ValueType.MAP -> {
                value.mapValue?.fields?.mapValues { (_, v) -> fromFirestoreValue(v) } ?: emptyMap<String, Any?>()
            }
            ValueType.BYTES -> value.bytesValue
            ValueType.GEOPOINT -> value.geoPointValue
        }
    }
    
    /**
     * Converts Firestore document fields to a map of Kotlin values.
     */
    fun fromFirestoreFields(fields: Map<String, FirestoreValue>): Map<String, Any?> {
        return fields.mapValues { fromFirestoreValue(it.value) }
    }
    
    /**
     * Converts a FirestoreValue to a specific type.
     */
    inline fun <reified T> fromFirestoreValueTyped(value: FirestoreValue): T? {
        val result = fromFirestoreValue(value)
        return when {
            result == null -> null
            result is T -> result
            else -> {
                // Try to cast or convert
                when (T::class) {
                    String::class -> result.toString() as? T
                    Int::class -> (result as? Number)?.toInt() as? T
                    Long::class -> (result as? Number)?.toLong() as? T
                    Double::class -> (result as? Number)?.toDouble() as? T
                    Float::class -> (result as? Number)?.toFloat() as? T
                    Boolean::class -> result as? T
                    else -> result as? T
                }
            }
        }
    }
}

