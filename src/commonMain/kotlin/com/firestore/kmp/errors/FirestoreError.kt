package com.firestore.kmp.errors

/**
 * Firestore error codes.
 */
enum class FirestoreErrorCode {
    OK,
    CANCELLED,
    UNKNOWN,
    INVALID_ARGUMENT,
    DEADLINE_EXCEEDED,
    NOT_FOUND,
    ALREADY_EXISTS,
    PERMISSION_DENIED,
    RESOURCE_EXHAUSTED,
    FAILED_PRECONDITION,
    ABORTED,
    OUT_OF_RANGE,
    UNIMPLEMENTED,
    INTERNAL,
    UNAVAILABLE,
    DATA_LOSS,
    UNAUTHENTICATED
}

/**
 * Maps HTTP status codes to Firestore error codes.
 */
fun httpStatusToErrorCode(status: Int): FirestoreErrorCode {
    return when (status) {
        200 -> FirestoreErrorCode.OK
        400 -> FirestoreErrorCode.INVALID_ARGUMENT
        401 -> FirestoreErrorCode.UNAUTHENTICATED
        403 -> FirestoreErrorCode.PERMISSION_DENIED
        404 -> FirestoreErrorCode.NOT_FOUND
        409 -> FirestoreErrorCode.ALREADY_EXISTS
        412 -> FirestoreErrorCode.FAILED_PRECONDITION
        429 -> FirestoreErrorCode.RESOURCE_EXHAUSTED
        499 -> FirestoreErrorCode.CANCELLED
        500 -> FirestoreErrorCode.INTERNAL
        503 -> FirestoreErrorCode.UNAVAILABLE
        504 -> FirestoreErrorCode.DEADLINE_EXCEEDED
        else -> FirestoreErrorCode.UNKNOWN
    }
}

