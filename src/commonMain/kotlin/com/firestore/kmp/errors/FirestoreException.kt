package com.firestore.kmp.errors

import kotlin.native.ObjCName

/**
 * Base exception class for Firestore operations.
 * Made open (instead of sealed) for proper Swift/Objective-C interop.
 */
open class FirestoreException(
    message: String,
    val code: FirestoreErrorCode,
    cause: Throwable? = null
) : Exception(message, cause) {
    
    class CancelledException(message: String = "Operation was cancelled", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.CANCELLED, cause)
    
    class UnknownException(message: String = "Unknown error occurred", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.UNKNOWN, cause)
    
    class InvalidArgumentException(message: String = "Invalid argument", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.INVALID_ARGUMENT, cause)
    
    class DeadlineExceededException(message: String = "Deadline exceeded", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.DEADLINE_EXCEEDED, cause)
    
    class NotFoundException(message: String = "Resource not found", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.NOT_FOUND, cause)
    
    class AlreadyExistsException(message: String = "Resource already exists", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.ALREADY_EXISTS, cause)
    
    class PermissionDeniedException(message: String = "Permission denied", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.PERMISSION_DENIED, cause)
    
    class ResourceExhaustedException(message: String = "Resource exhausted", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.RESOURCE_EXHAUSTED, cause)
    
    class FailedPreconditionException(message: String = "Failed precondition", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.FAILED_PRECONDITION, cause)
    
    class AbortedException(message: String = "Operation aborted", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.ABORTED, cause)
    
    class OutOfRangeException(message: String = "Value out of range", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.OUT_OF_RANGE, cause)
    
    class UnimplementedException(message: String = "Operation not implemented", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.UNIMPLEMENTED, cause)
    
    class InternalException(message: String = "Internal error", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.INTERNAL, cause)
    
    class UnavailableException(message: String = "Service unavailable", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.UNAVAILABLE, cause)
    
    class DataLossException(message: String = "Data loss", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.DATA_LOSS, cause)
    
    class UnauthenticatedException(message: String = "Unauthenticated", cause: Throwable? = null) :
        FirestoreException(message, FirestoreErrorCode.UNAUTHENTICATED, cause)
}

/**
 * Creates a FirestoreException from an error code.
 */
fun createFirestoreException(code: FirestoreErrorCode, message: String, cause: Throwable? = null): FirestoreException {
    return when (code) {
        FirestoreErrorCode.CANCELLED -> FirestoreException.CancelledException(message, cause)
        FirestoreErrorCode.UNKNOWN -> FirestoreException.UnknownException(message, cause)
        FirestoreErrorCode.INVALID_ARGUMENT -> FirestoreException.InvalidArgumentException(message, cause)
        FirestoreErrorCode.DEADLINE_EXCEEDED -> FirestoreException.DeadlineExceededException(message, cause)
        FirestoreErrorCode.NOT_FOUND -> FirestoreException.NotFoundException(message, cause)
        FirestoreErrorCode.ALREADY_EXISTS -> FirestoreException.AlreadyExistsException(message, cause)
        FirestoreErrorCode.PERMISSION_DENIED -> FirestoreException.PermissionDeniedException(message, cause)
        FirestoreErrorCode.RESOURCE_EXHAUSTED -> FirestoreException.ResourceExhaustedException(message, cause)
        FirestoreErrorCode.FAILED_PRECONDITION -> FirestoreException.FailedPreconditionException(message, cause)
        FirestoreErrorCode.ABORTED -> FirestoreException.AbortedException(message, cause)
        FirestoreErrorCode.OUT_OF_RANGE -> FirestoreException.OutOfRangeException(message, cause)
        FirestoreErrorCode.UNIMPLEMENTED -> FirestoreException.UnimplementedException(message, cause)
        FirestoreErrorCode.INTERNAL -> FirestoreException.InternalException(message, cause)
        FirestoreErrorCode.UNAVAILABLE -> FirestoreException.UnavailableException(message, cause)
        FirestoreErrorCode.DATA_LOSS -> FirestoreException.DataLossException(message, cause)
        FirestoreErrorCode.UNAUTHENTICATED -> FirestoreException.UnauthenticatedException(message, cause)
        FirestoreErrorCode.OK -> FirestoreException.UnknownException("Unexpected OK status in error", cause)
    }
}

