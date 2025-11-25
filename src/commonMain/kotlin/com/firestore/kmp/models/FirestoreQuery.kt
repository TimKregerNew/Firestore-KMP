package com.firestore.kmp.models

import kotlinx.serialization.Serializable

/**
 * Represents a Firestore query request.
 */
@Serializable
data class FirestoreQuery(
    val structuredQuery: StructuredQuery? = null,
    val parent: String? = null
)

@Serializable
data class StructuredQuery(
    val select: Projection? = null,
    val from: List<CollectionSelector> = emptyList(),
    val where: Filter? = null,
    val orderBy: List<Order> = emptyList(),
    val startAt: Cursor? = null,
    val endAt: Cursor? = null,
    val offset: Int? = null,
    val limit: Int? = null
)

@Serializable
data class Projection(
    val fields: List<FieldReference> = emptyList()
)

@Serializable
data class CollectionSelector(
    val collectionId: String,
    val allDescendants: Boolean = false
)

@Serializable
data class Filter(
    val compositeFilter: CompositeFilter? = null,
    val fieldFilter: FieldFilter? = null,
    val unaryFilter: UnaryFilter? = null
)

@Serializable
data class CompositeFilter(
    val op: CompositeOperator,
    val filters: List<Filter> = emptyList()
)

enum class CompositeOperator {
    OPERATOR_UNSPECIFIED,
    AND,
    OR
}

@Serializable
data class FieldFilter(
    val field: FieldReference,
    val op: FieldOperator,
    val value: FirestoreValue
)

enum class FieldOperator {
    OPERATOR_UNSPECIFIED,
    LESS_THAN,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN,
    GREATER_THAN_OR_EQUAL,
    EQUAL,
    NOT_EQUAL,
    ARRAY_CONTAINS,
    IN,
    ARRAY_CONTAINS_ANY,
    NOT_IN
}

@Serializable
data class UnaryFilter(
    val op: UnaryOperator,
    val field: FieldReference? = null
)

enum class UnaryOperator {
    OPERATOR_UNSPECIFIED,
    IS_NAN,
    IS_NULL,
    IS_NOT_NAN,
    IS_NOT_NULL
}

@Serializable
data class FieldReference(
    val fieldPath: String
)

@Serializable
data class Order(
    val field: FieldReference,
    val direction: Direction = Direction.ASCENDING
)

enum class Direction {
    DIRECTION_UNSPECIFIED,
    ASCENDING,
    DESCENDING
}

@Serializable
data class Cursor(
    val values: List<FirestoreValue> = emptyList(),
    val before: Boolean = false
)

