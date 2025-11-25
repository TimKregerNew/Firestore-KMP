package com.firestore.kmp.models

import kotlinx.serialization.Serializable
import kotlinx.serialization.json.JsonObject

/**
 * Represents a Firestore value that can be one of several types.
 * Firestore REST API uses a discriminated union format.
 */
@Serializable
data class FirestoreValue(
    val stringValue: String? = null,
    val integerValue: String? = null,
    val doubleValue: Double? = null,
    val booleanValue: Boolean? = null,
    val timestampValue: String? = null,
    val referenceValue: String? = null,
    val arrayValue: ArrayValue? = null,
    val mapValue: MapValue? = null,
    val nullValue: String? = null,
    val bytesValue: String? = null,
    val geoPointValue: GeoPointValue? = null
) {
    val type: ValueType
        get() = when {
            stringValue != null -> ValueType.STRING
            integerValue != null -> ValueType.INTEGER
            doubleValue != null -> ValueType.DOUBLE
            booleanValue != null -> ValueType.BOOLEAN
            timestampValue != null -> ValueType.TIMESTAMP
            referenceValue != null -> ValueType.REFERENCE
            arrayValue != null -> ValueType.ARRAY
            mapValue != null -> ValueType.MAP
            nullValue != null -> ValueType.NULL
            bytesValue != null -> ValueType.BYTES
            geoPointValue != null -> ValueType.GEOPOINT
            else -> ValueType.NULL
        }
}

@Serializable
data class ArrayValue(
    val values: List<FirestoreValue> = emptyList()
)

@Serializable
data class MapValue(
    val fields: Map<String, FirestoreValue> = emptyMap()
)

@Serializable
data class GeoPointValue(
    val latitude: Double,
    val longitude: Double
)

enum class ValueType {
    STRING,
    INTEGER,
    DOUBLE,
    BOOLEAN,
    TIMESTAMP,
    REFERENCE,
    ARRAY,
    MAP,
    NULL,
    BYTES,
    GEOPOINT
}

