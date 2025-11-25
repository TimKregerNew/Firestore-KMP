package com.firestore.kmp.integration

import com.firestore.kmp.models.*
import com.firestore.kmp.serialization.FirestoreDeserializer
import com.firestore.kmp.serialization.FirestoreSerializer
import kotlin.test.*

class SerializationTest {
    
    @Test
    fun testSerializeString() {
        val value = FirestoreSerializer.toFirestoreValue("test")
        assertEquals(ValueType.STRING, value.type)
        assertEquals("test", value.stringValue)
    }
    
    @Test
    fun testSerializeInt() {
        val value = FirestoreSerializer.toFirestoreValue(42)
        assertEquals(ValueType.INTEGER, value.type)
        assertEquals("42", value.integerValue)
    }
    
    @Test
    fun testSerializeLong() {
        val value = FirestoreSerializer.toFirestoreValue(42L)
        assertEquals(ValueType.INTEGER, value.type)
        assertEquals("42", value.integerValue)
    }
    
    @Test
    fun testSerializeDouble() {
        val value = FirestoreSerializer.toFirestoreValue(3.14)
        assertEquals(ValueType.DOUBLE, value.type)
        assertEquals(3.14, value.doubleValue)
    }
    
    @Test
    fun testSerializeBoolean() {
        val value = FirestoreSerializer.toFirestoreValue(true)
        assertEquals(ValueType.BOOLEAN, value.type)
        assertEquals(true, value.booleanValue)
    }
    
    @Test
    fun testSerializeNull() {
        val value = FirestoreSerializer.toFirestoreValue(null)
        assertEquals(ValueType.NULL, value.type)
        assertEquals("NULL_VALUE", value.nullValue)
    }
    
    @Test
    fun testSerializeMap() {
        val data = mapOf(
            "name" to "John",
            "age" to 30,
            "active" to true
        )
        val value = FirestoreSerializer.toFirestoreValue(data)
        assertEquals(ValueType.MAP, value.type)
        assertNotNull(value.mapValue)
        assertEquals("John", value.mapValue?.fields?.get("name")?.stringValue)
        assertEquals("30", value.mapValue?.fields?.get("age")?.integerValue)
        assertEquals(true, value.mapValue?.fields?.get("active")?.booleanValue)
    }
    
    @Test
    fun testSerializeList() {
        val data = listOf("a", "b", "c")
        val value = FirestoreSerializer.toFirestoreValue(data)
        assertEquals(ValueType.ARRAY, value.type)
        assertNotNull(value.arrayValue)
        assertEquals(3, value.arrayValue?.values?.size)
    }
    
    @Test
    fun testDeserializeString() {
        val firestoreValue = FirestoreValue(stringValue = "test")
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue)
        assertEquals("test", result)
    }
    
    @Test
    fun testDeserializeInt() {
        val firestoreValue = FirestoreValue(integerValue = "42")
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue) as? Long
        assertEquals(42L, result)
    }
    
    @Test
    fun testDeserializeDouble() {
        val firestoreValue = FirestoreValue(doubleValue = 3.14)
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue) as? Double
        assertEquals(3.14, result)
    }
    
    @Test
    fun testDeserializeBoolean() {
        val firestoreValue = FirestoreValue(booleanValue = true)
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue) as? Boolean
        assertEquals(true, result)
    }
    
    @Test
    fun testDeserializeNull() {
        val firestoreValue = FirestoreValue(nullValue = "NULL_VALUE")
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue)
        assertNull(result)
    }
    
    @Test
    fun testDeserializeMap() {
        val firestoreValue = FirestoreValue(
            mapValue = MapValue(
                fields = mapOf(
                    "name" to FirestoreValue(stringValue = "John"),
                    "age" to FirestoreValue(integerValue = "30")
                )
            )
        )
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue) as? Map<*, *>
        assertNotNull(result)
        assertEquals("John", result["name"])
    }
    
    @Test
    fun testDeserializeArray() {
        val firestoreValue = FirestoreValue(
            arrayValue = ArrayValue(
                values = listOf(
                    FirestoreValue(stringValue = "a"),
                    FirestoreValue(stringValue = "b"),
                    FirestoreValue(stringValue = "c")
                )
            )
        )
        val result = FirestoreDeserializer.fromFirestoreValue(firestoreValue) as? List<*>
        assertNotNull(result)
        assertEquals(3, result.size)
        assertEquals("a", result[0])
    }
    
    @Test
    fun testSerializeAndDeserializeRoundTrip() {
        val original = mapOf(
            "name" to "John Doe",
            "age" to 30,
            "active" to true,
            "scores" to listOf(95, 87, 92),
            "metadata" to mapOf(
                "created" to "2024-01-01",
                "version" to 1
            )
        )
        
        val fields = FirestoreSerializer.toFirestoreFields(original)
        val deserialized = FirestoreDeserializer.fromFirestoreFields(fields)
        
        assertEquals(original["name"], deserialized["name"])
        assertEquals((original["age"] as Number).toLong(), (deserialized["age"] as? Number)?.toLong())
        assertEquals(original["active"], deserialized["active"])
    }
}

