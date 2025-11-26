#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Firestore_kmpFirestoreHttpClient, Firestore_kmpWriteResult, Firestore_kmpBatch, Firestore_kmpDocumentReference, Firestore_kmpDocumentSnapshot, Firestore_kmpQuery, Firestore_kmpKotlinArray<T>, Firestore_kmpQuerySnapshot, Firestore_kmpCollectionReference, Firestore_kmpTransactionResult, Firestore_kmpFirestoreDocument, Firestore_kmpRunQueryResponseItemCompanion, Firestore_kmpRunQueryResponseItem, Firestore_kmpTransaction, Firestore_kmpTransactionRunner, Firestore_kmpNoAuth, Firestore_kmpKtor_client_coreHttpClient, Firestore_kmpFirestoreHttpClientCompanion, Firestore_kmpFirestoreErrorCode, Firestore_kmpKotlinEnumCompanion, Firestore_kmpKotlinEnum<E>, Firestore_kmpKotlinThrowable, Firestore_kmpKotlinException, Firestore_kmpFirestoreException, Firestore_kmpFirestoreValue, Firestore_kmpArrayValueCompanion, Firestore_kmpArrayValue, Firestore_kmpCollectionSelectorCompanion, Firestore_kmpCollectionSelector, Firestore_kmpFirestoreWrite, Firestore_kmpCommitRequestCompanion, Firestore_kmpCommitRequest, Firestore_kmpCommitResponseCompanion, Firestore_kmpCommitResponse, Firestore_kmpCompositeOperator, Firestore_kmpFilter, Firestore_kmpCompositeFilterCompanion, Firestore_kmpCompositeFilter, Firestore_kmpCursorCompanion, Firestore_kmpCursor, Firestore_kmpDirection, Firestore_kmpDocumentMaskCompanion, Firestore_kmpDocumentMask, Firestore_kmpFieldTransform, Firestore_kmpDocumentTransformCompanion, Firestore_kmpDocumentTransform, Firestore_kmpFieldReference, Firestore_kmpFieldOperator, Firestore_kmpFieldFilterCompanion, Firestore_kmpFieldFilter, Firestore_kmpFieldReferenceCompanion, Firestore_kmpServerValue, Firestore_kmpFieldTransformCompanion, Firestore_kmpUnaryFilter, Firestore_kmpFilterCompanion, Firestore_kmpFirestoreDocumentCompanion, Firestore_kmpStructuredQuery, Firestore_kmpFirestoreQueryCompanion, Firestore_kmpFirestoreQuery, Firestore_kmpFirestoreUpdateRequestCompanion, Firestore_kmpFirestoreUpdateRequest, Firestore_kmpMapValue, Firestore_kmpGeoPointValue, Firestore_kmpFirestoreValueCompanion, Firestore_kmpValueType, Firestore_kmpPrecondition, Firestore_kmpFirestoreWriteCompanion, Firestore_kmpFirestoreWriteRequestCompanion, Firestore_kmpFirestoreWriteRequest, Firestore_kmpGeoPointValueCompanion, Firestore_kmpMapValueCompanion, Firestore_kmpOrderCompanion, Firestore_kmpOrder, Firestore_kmpPreconditionCompanion, Firestore_kmpProjectionCompanion, Firestore_kmpProjection, Firestore_kmpReadOnlyCompanion, Firestore_kmpReadOnly, Firestore_kmpReadWriteCompanion, Firestore_kmpReadWrite, Firestore_kmpStructuredQueryCompanion, Firestore_kmpTransactionOptionsCompanion, Firestore_kmpTransactionOptions, Firestore_kmpTransactionRequestCompanion, Firestore_kmpTransactionRequest, Firestore_kmpTransactionResponseCompanion, Firestore_kmpTransactionResponse, Firestore_kmpUnaryOperator, Firestore_kmpUnaryFilterCompanion, Firestore_kmpValueTransformResultCompanion, Firestore_kmpValueTransformResult, Firestore_kmpWriteResultCompanion, Firestore_kmpFirestoreDeserializer, Firestore_kmpFirestoreSerializer, Firestore_kmpKotlinRuntimeException, Firestore_kmpKotlinIllegalStateException, Firestore_kmpKtor_client_coreHttpClientEngineConfig, Firestore_kmpKtor_client_coreHttpClientConfig<T>, Firestore_kmpKtor_eventsEvents, Firestore_kmpKtor_client_coreHttpReceivePipeline, Firestore_kmpKtor_client_coreHttpRequestPipeline, Firestore_kmpKtor_client_coreHttpResponsePipeline, Firestore_kmpKtor_client_coreHttpSendPipeline, Firestore_kmpKotlinx_serialization_coreSerializersModule, Firestore_kmpKotlinx_serialization_coreSerialKind, Firestore_kmpKotlinNothing, Firestore_kmpKtor_client_coreHttpRequestData, Firestore_kmpKtor_client_coreHttpResponseData, Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher, Firestore_kmpKtor_client_coreProxyConfig, Firestore_kmpKtor_utilsAttributeKey<T>, Firestore_kmpKtor_eventsEventDefinition<T>, Firestore_kmpKtor_utilsPipelinePhase, Firestore_kmpKtor_utilsPipeline<TSubject, TContext>, Firestore_kmpKtor_client_coreHttpReceivePipelinePhases, Firestore_kmpKtor_client_coreHttpResponse, Firestore_kmpKotlinUnit, Firestore_kmpKtor_client_coreHttpRequestPipelinePhases, Firestore_kmpKtor_client_coreHttpRequestBuilder, Firestore_kmpKtor_client_coreHttpResponsePipelinePhases, Firestore_kmpKtor_client_coreHttpResponseContainer, Firestore_kmpKtor_client_coreHttpClientCall, Firestore_kmpKtor_client_coreHttpSendPipelinePhases, Firestore_kmpKtor_httpUrl, Firestore_kmpKtor_httpHttpMethod, Firestore_kmpKtor_httpOutgoingContent, Firestore_kmpKtor_httpHttpStatusCode, Firestore_kmpKtor_utilsGMTDate, Firestore_kmpKtor_httpHttpProtocolVersion, Firestore_kmpKotlinAbstractCoroutineContextElement, Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcherKey, Firestore_kmpKtor_httpHeadersBuilder, Firestore_kmpKtor_client_coreHttpRequestBuilderCompanion, Firestore_kmpKtor_httpURLBuilder, Firestore_kmpKtor_utilsTypeInfo, Firestore_kmpKtor_client_coreHttpClientCallCompanion, Firestore_kmpKtor_httpUrlCompanion, Firestore_kmpKtor_httpURLProtocol, Firestore_kmpKtor_httpHttpMethodCompanion, Firestore_kmpKtor_httpContentType, Firestore_kmpKotlinCancellationException, Firestore_kmpKtor_httpHttpStatusCodeCompanion, Firestore_kmpKtor_utilsGMTDateCompanion, Firestore_kmpKtor_utilsWeekDay, Firestore_kmpKtor_utilsMonth, Firestore_kmpKtor_httpHttpProtocolVersionCompanion, Firestore_kmpKotlinAbstractCoroutineContextKey<B, E>, Firestore_kmpKtor_ioMemory, Firestore_kmpKtor_ioChunkBuffer, Firestore_kmpKtor_ioBuffer, Firestore_kmpKotlinByteArray, Firestore_kmpKtor_ioByteReadPacket, Firestore_kmpKtor_utilsStringValuesBuilderImpl, Firestore_kmpKtor_httpURLBuilderCompanion, Firestore_kmpKtor_httpURLProtocolCompanion, Firestore_kmpKtor_httpHeaderValueParam, Firestore_kmpKtor_httpHeaderValueWithParametersCompanion, Firestore_kmpKtor_httpHeaderValueWithParameters, Firestore_kmpKtor_httpContentTypeCompanion, Firestore_kmpKtor_utilsWeekDayCompanion, Firestore_kmpKtor_utilsMonthCompanion, Firestore_kmpKtor_ioMemoryCompanion, Firestore_kmpKtor_ioBufferCompanion, Firestore_kmpKtor_ioChunkBufferCompanion, Firestore_kmpKotlinByteIterator, Firestore_kmpKtor_ioInputCompanion, Firestore_kmpKtor_ioInput, Firestore_kmpKtor_ioByteReadPacketCompanion, Firestore_kmpKotlinKTypeProjection, Firestore_kmpKotlinKVariance, Firestore_kmpKotlinKTypeProjectionCompanion;

@protocol Firestore_kmpKotlinx_coroutines_coreFlow, Firestore_kmpFirestoreAuth, Firestore_kmpKotlinSuspendFunction1, Firestore_kmpKotlinx_serialization_coreKSerializer, Firestore_kmpKotlinComparable, Firestore_kmpKotlinIterator, Firestore_kmpKotlinx_coroutines_coreFlowCollector, Firestore_kmpKotlinFunction, Firestore_kmpKotlinx_serialization_coreEncoder, Firestore_kmpKotlinx_serialization_coreSerialDescriptor, Firestore_kmpKotlinx_serialization_coreSerializationStrategy, Firestore_kmpKotlinx_serialization_coreDecoder, Firestore_kmpKotlinx_serialization_coreDeserializationStrategy, Firestore_kmpKotlinCoroutineContext, Firestore_kmpKotlinx_coroutines_coreCoroutineScope, Firestore_kmpKtor_ioCloseable, Firestore_kmpKtor_client_coreHttpClientEngine, Firestore_kmpKtor_client_coreHttpClientEngineCapability, Firestore_kmpKtor_utilsAttributes, Firestore_kmpKotlinx_serialization_coreCompositeEncoder, Firestore_kmpKotlinAnnotation, Firestore_kmpKotlinx_serialization_coreCompositeDecoder, Firestore_kmpKotlinCoroutineContextElement, Firestore_kmpKotlinCoroutineContextKey, Firestore_kmpKtor_client_coreHttpClientPlugin, Firestore_kmpKotlinx_coroutines_coreDisposableHandle, Firestore_kmpKotlinSuspendFunction2, Firestore_kmpKotlinx_serialization_coreSerializersModuleCollector, Firestore_kmpKotlinKClass, Firestore_kmpKtor_httpHeaders, Firestore_kmpKotlinx_coroutines_coreJob, Firestore_kmpKotlinContinuation, Firestore_kmpKotlinContinuationInterceptor, Firestore_kmpKotlinx_coroutines_coreRunnable, Firestore_kmpKtor_httpHttpMessage, Firestore_kmpKtor_ioByteReadChannel, Firestore_kmpKtor_httpHttpMessageBuilder, Firestore_kmpKtor_client_coreHttpRequest, Firestore_kmpKotlinKDeclarationContainer, Firestore_kmpKotlinKAnnotatedElement, Firestore_kmpKotlinKClassifier, Firestore_kmpKtor_httpParameters, Firestore_kmpKotlinMapEntry, Firestore_kmpKtor_utilsStringValues, Firestore_kmpKotlinx_coroutines_coreChildHandle, Firestore_kmpKotlinx_coroutines_coreChildJob, Firestore_kmpKotlinSequence, Firestore_kmpKotlinx_coroutines_coreSelectClause0, Firestore_kmpKtor_ioReadSession, Firestore_kmpKotlinAppendable, Firestore_kmpKtor_utilsStringValuesBuilder, Firestore_kmpKtor_httpParametersBuilder, Firestore_kmpKotlinKType, Firestore_kmpKotlinx_coroutines_coreParentJob, Firestore_kmpKotlinx_coroutines_coreSelectInstance, Firestore_kmpKotlinx_coroutines_coreSelectClause, Firestore_kmpKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Firestore_kmpBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface Firestore_kmpBase (Firestore_kmpBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface Firestore_kmpMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Firestore_kmpMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFirestore_kmpKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface Firestore_kmpNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface Firestore_kmpByte : Firestore_kmpNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface Firestore_kmpUByte : Firestore_kmpNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface Firestore_kmpShort : Firestore_kmpNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface Firestore_kmpUShort : Firestore_kmpNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface Firestore_kmpInt : Firestore_kmpNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface Firestore_kmpUInt : Firestore_kmpNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface Firestore_kmpLong : Firestore_kmpNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface Firestore_kmpULong : Firestore_kmpNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface Firestore_kmpFloat : Firestore_kmpNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface Firestore_kmpDouble : Firestore_kmpNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface Firestore_kmpBoolean : Firestore_kmpNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Batch")))
@interface Firestore_kmpBatch : Firestore_kmpBase
- (instancetype)initWithClient:(Firestore_kmpFirestoreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)commitWithCompletionHandler:(void (^)(Firestore_kmpWriteResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("commit(completionHandler:)")));
- (Firestore_kmpBatch *)deleteDocumentRef:(Firestore_kmpDocumentReference *)documentRef __attribute__((swift_name("delete(documentRef:)")));
- (Firestore_kmpBatch *)setDocumentRef:(Firestore_kmpDocumentReference *)documentRef data:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("set(documentRef:data:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (Firestore_kmpBatch *)updateDocumentRef:(Firestore_kmpDocumentReference *)documentRef fields:(NSDictionary<NSString *, id> *)fields __attribute__((swift_name("update(documentRef:fields:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionReference")))
@interface Firestore_kmpCollectionReference : Firestore_kmpBase
- (instancetype)initWithPath:(NSString *)path client:(Firestore_kmpFirestoreHttpClient *)client __attribute__((swift_name("init(path:client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addData:(NSDictionary<NSString *, id> *)data completionHandler:(void (^)(Firestore_kmpDocumentSnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(data:completionHandler:)")));
- (Firestore_kmpDocumentReference *)documentId:(NSString *)id __attribute__((swift_name("document(id:)")));
- (Firestore_kmpQuery *)endAtFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("endAt(fieldValues:)")));
- (Firestore_kmpQuery *)endBeforeFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("endBefore(fieldValues:)")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(Firestore_kmpQuerySnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (NSString *)id __attribute__((swift_name("id()")));
- (Firestore_kmpQuery *)limitCount:(int32_t)count __attribute__((swift_name("limit(count:)")));
- (Firestore_kmpQuery *)orderByField:(NSString *)field direction:(NSString *)direction __attribute__((swift_name("orderBy(field:direction:)")));
- (NSString *)path __attribute__((swift_name("path()")));
- (id<Firestore_kmpKotlinx_coroutines_coreFlow>)snapshotsPollIntervalMs:(int64_t)pollIntervalMs __attribute__((swift_name("snapshots(pollIntervalMs:)")));
- (Firestore_kmpQuery *)startAfterFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("startAfter(fieldValues:)")));
- (Firestore_kmpQuery *)startAtFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("startAt(fieldValues:)")));
- (Firestore_kmpQuery *)whereField:(NSString *)field operator:(NSString *)operator_ value:(id _Nullable)value __attribute__((swift_name("where(field:operator:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentReference")))
@interface Firestore_kmpDocumentReference : Firestore_kmpBase
- (instancetype)initWithPath:(NSString *)path client:(Firestore_kmpFirestoreHttpClient *)client __attribute__((swift_name("init(path:client:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpCollectionReference *)collectionCollectionPath:(NSString *)collectionPath __attribute__((swift_name("collection(collectionPath:)")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithCompletionHandler:(void (^)(Firestore_kmpWriteResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(completionHandler:)")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(Firestore_kmpDocumentSnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)path __attribute__((swift_name("path()")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setData:(NSDictionary<NSString *, id> *)data completionHandler:(void (^)(Firestore_kmpDocumentSnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(data:completionHandler:)")));
- (id<Firestore_kmpKotlinx_coroutines_coreFlow>)snapshotsPollIntervalMs:(int64_t)pollIntervalMs __attribute__((swift_name("snapshots(pollIntervalMs:)")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateFields:(NSDictionary<NSString *, id> *)fields completionHandler:(void (^)(Firestore_kmpWriteResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(fields:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firestore")))
@interface Firestore_kmpFirestore : Firestore_kmpBase
- (instancetype)initWithProjectId:(NSString *)projectId databaseId:(NSString *)databaseId auth:(id<Firestore_kmpFirestoreAuth>)auth httpClient:(Firestore_kmpFirestoreHttpClient * _Nullable)httpClient __attribute__((swift_name("init(projectId:databaseId:auth:httpClient:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpBatch *)batch __attribute__((swift_name("batch()")));
- (void)close __attribute__((swift_name("close()")));
- (Firestore_kmpCollectionReference *)collectionPath:(NSString *)path __attribute__((swift_name("collection(path:)")));
- (Firestore_kmpDocumentReference *)documentPath:(NSString *)path __attribute__((swift_name("document(path:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runTransactionBlock:(id<Firestore_kmpKotlinSuspendFunction1>)block completionHandler:(void (^)(Firestore_kmpTransactionResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("runTransaction(block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface Firestore_kmpQuery : Firestore_kmpBase
- (instancetype)initWithCollectionRef:(Firestore_kmpCollectionReference *)collectionRef client:(Firestore_kmpFirestoreHttpClient *)client __attribute__((swift_name("init(collectionRef:client:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpQuery *)endAtFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("endAt(fieldValues:)")));
- (Firestore_kmpQuery *)endBeforeFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("endBefore(fieldValues:)")));

/**
 * @note This method converts instances of FirestoreException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(Firestore_kmpQuerySnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (Firestore_kmpQuery *)limitCount:(int32_t)count __attribute__((swift_name("limit(count:)")));
- (Firestore_kmpQuery *)offsetCount:(int32_t)count __attribute__((swift_name("offset(count:)")));
- (Firestore_kmpQuery *)orderByField:(NSString *)field direction:(NSString *)direction __attribute__((swift_name("orderBy(field:direction:)")));
- (id<Firestore_kmpKotlinx_coroutines_coreFlow>)snapshotsPollIntervalMs:(int64_t)pollIntervalMs __attribute__((swift_name("snapshots(pollIntervalMs:)")));
- (Firestore_kmpQuery *)startAfterFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("startAfter(fieldValues:)")));
- (Firestore_kmpQuery *)startAtFieldValues:(Firestore_kmpKotlinArray<id> *)fieldValues __attribute__((swift_name("startAt(fieldValues:)")));
- (Firestore_kmpQuery *)whereField:(NSString *)field operator:(NSString *)operator_ value:(id _Nullable)value __attribute__((swift_name("where(field:operator:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunQueryResponseItem")))
@interface Firestore_kmpRunQueryResponseItem : Firestore_kmpBase
- (instancetype)initWithDocument:(Firestore_kmpFirestoreDocument * _Nullable)document readTime:(NSString * _Nullable)readTime skippedResults:(Firestore_kmpInt * _Nullable)skippedResults __attribute__((swift_name("init(document:readTime:skippedResults:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpRunQueryResponseItemCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpRunQueryResponseItem *)doCopyDocument:(Firestore_kmpFirestoreDocument * _Nullable)document readTime:(NSString * _Nullable)readTime skippedResults:(Firestore_kmpInt * _Nullable)skippedResults __attribute__((swift_name("doCopy(document:readTime:skippedResults:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpFirestoreDocument * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable readTime __attribute__((swift_name("readTime")));
@property (readonly) Firestore_kmpInt * _Nullable skippedResults __attribute__((swift_name("skippedResults")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunQueryResponseItem.Companion")))
@interface Firestore_kmpRunQueryResponseItemCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpRunQueryResponseItemCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface Firestore_kmpTransaction : Firestore_kmpBase
- (instancetype)initWithTransactionId:(NSString *)transactionId client:(Firestore_kmpFirestoreHttpClient *)client __attribute__((swift_name("init(transactionId:client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)commitWithCompletionHandler:(void (^)(Firestore_kmpTransactionResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("commit(completionHandler:)")));
- (Firestore_kmpTransaction *)deleteDocumentRef:(Firestore_kmpDocumentReference *)documentRef __attribute__((swift_name("delete(documentRef:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDocumentRef:(Firestore_kmpDocumentReference *)documentRef completionHandler:(void (^)(Firestore_kmpDocumentSnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(documentRef:completionHandler:)")));
- (NSString *)getTransactionId __attribute__((swift_name("getTransactionId()")));
- (Firestore_kmpTransaction *)setDocumentRef:(Firestore_kmpDocumentReference *)documentRef data:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("set(documentRef:data:)")));
- (Firestore_kmpTransaction *)updateDocumentRef:(Firestore_kmpDocumentReference *)documentRef fields:(NSDictionary<NSString *, id> *)fields __attribute__((swift_name("update(documentRef:fields:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionRunner")))
@interface Firestore_kmpTransactionRunner : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionRunner __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpTransactionRunner *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runClient:(Firestore_kmpFirestoreHttpClient *)client block:(id<Firestore_kmpKotlinSuspendFunction1>)block completionHandler:(void (^)(Firestore_kmpTransactionResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("run(client:block:completionHandler:)")));
@end

__attribute__((swift_name("FirestoreAuth")))
@protocol Firestore_kmpFirestoreAuth
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFreshIdTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFreshIdToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdToken(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoAuth")))
@interface Firestore_kmpNoAuth : Firestore_kmpBase <Firestore_kmpFirestoreAuth>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noAuth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpNoAuth *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdToken(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTokenAuth")))
@interface Firestore_kmpStaticTokenAuth : Firestore_kmpBase <Firestore_kmpFirestoreAuth>
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdToken(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreHttpClient")))
@interface Firestore_kmpFirestoreHttpClient : Firestore_kmpBase
- (instancetype)initWithProjectId:(NSString *)projectId databaseId:(NSString *)databaseId auth:(id<Firestore_kmpFirestoreAuth>)auth httpClient:(Firestore_kmpKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(projectId:databaseId:auth:httpClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreHttpClientCompanion *companion __attribute__((swift_name("companion")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePath:(NSString *)path queryParameters:(NSDictionary<NSString *, NSString *> *)queryParameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(path:queryParameters:completionHandler:)")));
- (Firestore_kmpFirestoreErrorCode *)extractErrorCodeFromMessageInlineMessage:(NSString * _Nullable)message __attribute__((swift_name("extractErrorCodeFromMessageInline(message:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPath:(NSString *)path queryParameters:(NSDictionary<NSString *, NSString *> *)queryParameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(path:queryParameters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)patchPath:(NSString *)path body:(id _Nullable)body queryParameters:(NSDictionary<NSString *, NSArray<NSString *> *> *)queryParameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("patch(path:body:queryParameters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postPath:(NSString *)path body:(id _Nullable)body queryParameters:(NSDictionary<NSString *, NSString *> *)queryParameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(path:body:queryParameters:completionHandler:)")));
@property (readonly) id<Firestore_kmpFirestoreAuth> auth __attribute__((swift_name("auth")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreHttpClient.Companion")))
@interface Firestore_kmpFirestoreHttpClientCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreHttpClientCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_client_coreHttpClient *)createDefaultHttpClient __attribute__((swift_name("createDefaultHttpClient()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol Firestore_kmpKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface Firestore_kmpKotlinEnum<E> : Firestore_kmpBase <Firestore_kmpKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreErrorCode")))
@interface Firestore_kmpFirestoreErrorCode : Firestore_kmpKotlinEnum<Firestore_kmpFirestoreErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *ok __attribute__((swift_name("ok")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *cancelled __attribute__((swift_name("cancelled")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *invalidArgument __attribute__((swift_name("invalidArgument")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *deadlineExceeded __attribute__((swift_name("deadlineExceeded")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *alreadyExists __attribute__((swift_name("alreadyExists")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *permissionDenied __attribute__((swift_name("permissionDenied")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *resourceExhausted __attribute__((swift_name("resourceExhausted")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *failedPrecondition __attribute__((swift_name("failedPrecondition")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *aborted __attribute__((swift_name("aborted")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *outOfRange __attribute__((swift_name("outOfRange")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *unimplemented __attribute__((swift_name("unimplemented")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *internal __attribute__((swift_name("internal")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *unavailable __attribute__((swift_name("unavailable")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *dataLoss __attribute__((swift_name("dataLoss")));
@property (class, readonly) Firestore_kmpFirestoreErrorCode *unauthenticated __attribute__((swift_name("unauthenticated")));
+ (Firestore_kmpKotlinArray<Firestore_kmpFirestoreErrorCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpFirestoreErrorCode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface Firestore_kmpKotlinThrowable : Firestore_kmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (Firestore_kmpKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface Firestore_kmpKotlinException : Firestore_kmpKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("FirestoreException")))
@interface Firestore_kmpFirestoreException : Firestore_kmpKotlinException
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) Firestore_kmpFirestoreErrorCode *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.AbortedException")))
@interface Firestore_kmpFirestoreExceptionAbortedException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.AlreadyExistsException")))
@interface Firestore_kmpFirestoreExceptionAlreadyExistsException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.CancelledException")))
@interface Firestore_kmpFirestoreExceptionCancelledException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.DataLossException")))
@interface Firestore_kmpFirestoreExceptionDataLossException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.DeadlineExceededException")))
@interface Firestore_kmpFirestoreExceptionDeadlineExceededException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.FailedPreconditionException")))
@interface Firestore_kmpFirestoreExceptionFailedPreconditionException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.InternalException")))
@interface Firestore_kmpFirestoreExceptionInternalException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.InvalidArgumentException")))
@interface Firestore_kmpFirestoreExceptionInvalidArgumentException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.NotFoundException")))
@interface Firestore_kmpFirestoreExceptionNotFoundException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.OutOfRangeException")))
@interface Firestore_kmpFirestoreExceptionOutOfRangeException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.PermissionDeniedException")))
@interface Firestore_kmpFirestoreExceptionPermissionDeniedException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.ResourceExhaustedException")))
@interface Firestore_kmpFirestoreExceptionResourceExhaustedException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.UnauthenticatedException")))
@interface Firestore_kmpFirestoreExceptionUnauthenticatedException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.UnavailableException")))
@interface Firestore_kmpFirestoreExceptionUnavailableException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.UnimplementedException")))
@interface Firestore_kmpFirestoreExceptionUnimplementedException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreException.UnknownException")))
@interface Firestore_kmpFirestoreExceptionUnknownException : Firestore_kmpFirestoreException
- (instancetype)initWithMessage:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message code:(Firestore_kmpFirestoreErrorCode *)code cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:code:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayValue")))
@interface Firestore_kmpArrayValue : Firestore_kmpBase
- (instancetype)initWithValues:(NSArray<Firestore_kmpFirestoreValue *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpArrayValueCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpArrayValue *)doCopyValues:(NSArray<Firestore_kmpFirestoreValue *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Firestore_kmpFirestoreValue *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayValue.Companion")))
@interface Firestore_kmpArrayValueCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpArrayValueCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionSelector")))
@interface Firestore_kmpCollectionSelector : Firestore_kmpBase
- (instancetype)initWithCollectionId:(NSString *)collectionId allDescendants:(BOOL)allDescendants __attribute__((swift_name("init(collectionId:allDescendants:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpCollectionSelectorCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpCollectionSelector *)doCopyCollectionId:(NSString *)collectionId allDescendants:(BOOL)allDescendants __attribute__((swift_name("doCopy(collectionId:allDescendants:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allDescendants __attribute__((swift_name("allDescendants")));
@property (readonly) NSString *collectionId __attribute__((swift_name("collectionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionSelector.Companion")))
@interface Firestore_kmpCollectionSelectorCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpCollectionSelectorCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommitRequest")))
@interface Firestore_kmpCommitRequest : Firestore_kmpBase
- (instancetype)initWithWrites:(NSArray<Firestore_kmpFirestoreWrite *> *)writes transaction:(NSString * _Nullable)transaction __attribute__((swift_name("init(writes:transaction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpCommitRequestCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpCommitRequest *)doCopyWrites:(NSArray<Firestore_kmpFirestoreWrite *> *)writes transaction:(NSString * _Nullable)transaction __attribute__((swift_name("doCopy(writes:transaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable transaction __attribute__((swift_name("transaction")));
@property (readonly) NSArray<Firestore_kmpFirestoreWrite *> *writes __attribute__((swift_name("writes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommitRequest.Companion")))
@interface Firestore_kmpCommitRequestCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpCommitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommitResponse")))
@interface Firestore_kmpCommitResponse : Firestore_kmpBase
- (instancetype)initWithWriteResults:(NSArray<Firestore_kmpWriteResult *> *)writeResults commitTime:(NSString *)commitTime __attribute__((swift_name("init(writeResults:commitTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpCommitResponseCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpCommitResponse *)doCopyWriteResults:(NSArray<Firestore_kmpWriteResult *> *)writeResults commitTime:(NSString *)commitTime __attribute__((swift_name("doCopy(writeResults:commitTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *commitTime __attribute__((swift_name("commitTime")));
@property (readonly) NSArray<Firestore_kmpWriteResult *> *writeResults __attribute__((swift_name("writeResults")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommitResponse.Companion")))
@interface Firestore_kmpCommitResponseCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpCommitResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeFilter")))
@interface Firestore_kmpCompositeFilter : Firestore_kmpBase
- (instancetype)initWithOp:(Firestore_kmpCompositeOperator *)op filters:(NSArray<Firestore_kmpFilter *> *)filters __attribute__((swift_name("init(op:filters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpCompositeFilterCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpCompositeFilter *)doCopyOp:(Firestore_kmpCompositeOperator *)op filters:(NSArray<Firestore_kmpFilter *> *)filters __attribute__((swift_name("doCopy(op:filters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Firestore_kmpFilter *> *filters __attribute__((swift_name("filters")));
@property (readonly) Firestore_kmpCompositeOperator *op __attribute__((swift_name("op")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeFilter.Companion")))
@interface Firestore_kmpCompositeFilterCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpCompositeFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeOperator")))
@interface Firestore_kmpCompositeOperator : Firestore_kmpKotlinEnum<Firestore_kmpCompositeOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpCompositeOperator *operatorUnspecified __attribute__((swift_name("operatorUnspecified")));
@property (class, readonly) Firestore_kmpCompositeOperator *and_ __attribute__((swift_name("and_")));
@property (class, readonly) Firestore_kmpCompositeOperator *or_ __attribute__((swift_name("or_")));
+ (Firestore_kmpKotlinArray<Firestore_kmpCompositeOperator *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpCompositeOperator *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cursor")))
@interface Firestore_kmpCursor : Firestore_kmpBase
- (instancetype)initWithValues:(NSArray<Firestore_kmpFirestoreValue *> *)values before:(BOOL)before __attribute__((swift_name("init(values:before:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpCursorCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpCursor *)doCopyValues:(NSArray<Firestore_kmpFirestoreValue *> *)values before:(BOOL)before __attribute__((swift_name("doCopy(values:before:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL before __attribute__((swift_name("before")));
@property (readonly) NSArray<Firestore_kmpFirestoreValue *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cursor.Companion")))
@interface Firestore_kmpCursorCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpCursorCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Direction")))
@interface Firestore_kmpDirection : Firestore_kmpKotlinEnum<Firestore_kmpDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpDirection *directionUnspecified __attribute__((swift_name("directionUnspecified")));
@property (class, readonly) Firestore_kmpDirection *ascending __attribute__((swift_name("ascending")));
@property (class, readonly) Firestore_kmpDirection *descending __attribute__((swift_name("descending")));
+ (Firestore_kmpKotlinArray<Firestore_kmpDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpDirection *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentMask")))
@interface Firestore_kmpDocumentMask : Firestore_kmpBase
- (instancetype)initWithFieldPaths:(NSArray<NSString *> *)fieldPaths __attribute__((swift_name("init(fieldPaths:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpDocumentMaskCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpDocumentMask *)doCopyFieldPaths:(NSArray<NSString *> *)fieldPaths __attribute__((swift_name("doCopy(fieldPaths:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *fieldPaths __attribute__((swift_name("fieldPaths")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentMask.Companion")))
@interface Firestore_kmpDocumentMaskCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpDocumentMaskCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentSnapshot")))
@interface Firestore_kmpDocumentSnapshot : Firestore_kmpBase
- (instancetype)initWithDocument:(Firestore_kmpFirestoreDocument * _Nullable)document exists:(BOOL)exists id:(NSString *)id path:(NSString *)path error:(NSString * _Nullable)error __attribute__((swift_name("init(document:exists:id:path:error:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpDocumentSnapshot *)doCopyDocument:(Firestore_kmpFirestoreDocument * _Nullable)document exists:(BOOL)exists id:(NSString *)id path:(NSString *)path error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(document:exists:id:path:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getField:(NSString *)field __attribute__((swift_name("get(field:)")));
- (NSDictionary<NSString *, Firestore_kmpFirestoreValue *> * _Nullable)getData __attribute__((swift_name("getData()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpFirestoreDocument * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL exists __attribute__((swift_name("exists")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentTransform")))
@interface Firestore_kmpDocumentTransform : Firestore_kmpBase
- (instancetype)initWithDocument:(NSString *)document fieldTransforms:(NSArray<Firestore_kmpFieldTransform *> *)fieldTransforms __attribute__((swift_name("init(document:fieldTransforms:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpDocumentTransformCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpDocumentTransform *)doCopyDocument:(NSString *)document fieldTransforms:(NSArray<Firestore_kmpFieldTransform *> *)fieldTransforms __attribute__((swift_name("doCopy(document:fieldTransforms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *document __attribute__((swift_name("document")));
@property (readonly) NSArray<Firestore_kmpFieldTransform *> *fieldTransforms __attribute__((swift_name("fieldTransforms")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentTransform.Companion")))
@interface Firestore_kmpDocumentTransformCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpDocumentTransformCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldFilter")))
@interface Firestore_kmpFieldFilter : Firestore_kmpBase
- (instancetype)initWithField:(Firestore_kmpFieldReference *)field op:(Firestore_kmpFieldOperator *)op value:(Firestore_kmpFirestoreValue *)value __attribute__((swift_name("init(field:op:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFieldFilterCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFieldFilter *)doCopyField:(Firestore_kmpFieldReference *)field op:(Firestore_kmpFieldOperator *)op value:(Firestore_kmpFirestoreValue *)value __attribute__((swift_name("doCopy(field:op:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpFieldReference *field __attribute__((swift_name("field")));
@property (readonly) Firestore_kmpFieldOperator *op __attribute__((swift_name("op")));
@property (readonly) Firestore_kmpFirestoreValue *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldFilter.Companion")))
@interface Firestore_kmpFieldFilterCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFieldFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldOperator")))
@interface Firestore_kmpFieldOperator : Firestore_kmpKotlinEnum<Firestore_kmpFieldOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpFieldOperator *operatorUnspecified __attribute__((swift_name("operatorUnspecified")));
@property (class, readonly) Firestore_kmpFieldOperator *lessThan __attribute__((swift_name("lessThan")));
@property (class, readonly) Firestore_kmpFieldOperator *lessThanOrEqual __attribute__((swift_name("lessThanOrEqual")));
@property (class, readonly) Firestore_kmpFieldOperator *greaterThan __attribute__((swift_name("greaterThan")));
@property (class, readonly) Firestore_kmpFieldOperator *greaterThanOrEqual __attribute__((swift_name("greaterThanOrEqual")));
@property (class, readonly) Firestore_kmpFieldOperator *equal __attribute__((swift_name("equal")));
@property (class, readonly) Firestore_kmpFieldOperator *notEqual __attribute__((swift_name("notEqual")));
@property (class, readonly) Firestore_kmpFieldOperator *arrayContains __attribute__((swift_name("arrayContains")));
@property (class, readonly) Firestore_kmpFieldOperator *in __attribute__((swift_name("in")));
@property (class, readonly) Firestore_kmpFieldOperator *arrayContainsAny __attribute__((swift_name("arrayContainsAny")));
@property (class, readonly) Firestore_kmpFieldOperator *notIn __attribute__((swift_name("notIn")));
+ (Firestore_kmpKotlinArray<Firestore_kmpFieldOperator *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpFieldOperator *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldReference")))
@interface Firestore_kmpFieldReference : Firestore_kmpBase
- (instancetype)initWithFieldPath:(NSString *)fieldPath __attribute__((swift_name("init(fieldPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFieldReferenceCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFieldReference *)doCopyFieldPath:(NSString *)fieldPath __attribute__((swift_name("doCopy(fieldPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fieldPath __attribute__((swift_name("fieldPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldReference.Companion")))
@interface Firestore_kmpFieldReferenceCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFieldReferenceCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldTransform")))
@interface Firestore_kmpFieldTransform : Firestore_kmpBase
- (instancetype)initWithFieldPath:(NSString *)fieldPath setToServerValue:(Firestore_kmpServerValue * _Nullable)setToServerValue increment:(Firestore_kmpFirestoreValue * _Nullable)increment maximum:(Firestore_kmpFirestoreValue * _Nullable)maximum minimum:(Firestore_kmpFirestoreValue * _Nullable)minimum appendMissingElements:(Firestore_kmpArrayValue * _Nullable)appendMissingElements removeAllFromArray:(Firestore_kmpArrayValue * _Nullable)removeAllFromArray __attribute__((swift_name("init(fieldPath:setToServerValue:increment:maximum:minimum:appendMissingElements:removeAllFromArray:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFieldTransformCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFieldTransform *)doCopyFieldPath:(NSString *)fieldPath setToServerValue:(Firestore_kmpServerValue * _Nullable)setToServerValue increment:(Firestore_kmpFirestoreValue * _Nullable)increment maximum:(Firestore_kmpFirestoreValue * _Nullable)maximum minimum:(Firestore_kmpFirestoreValue * _Nullable)minimum appendMissingElements:(Firestore_kmpArrayValue * _Nullable)appendMissingElements removeAllFromArray:(Firestore_kmpArrayValue * _Nullable)removeAllFromArray __attribute__((swift_name("doCopy(fieldPath:setToServerValue:increment:maximum:minimum:appendMissingElements:removeAllFromArray:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpArrayValue * _Nullable appendMissingElements __attribute__((swift_name("appendMissingElements")));
@property (readonly) NSString *fieldPath __attribute__((swift_name("fieldPath")));
@property (readonly) Firestore_kmpFirestoreValue * _Nullable increment __attribute__((swift_name("increment")));
@property (readonly) Firestore_kmpFirestoreValue * _Nullable maximum __attribute__((swift_name("maximum")));
@property (readonly) Firestore_kmpFirestoreValue * _Nullable minimum __attribute__((swift_name("minimum")));
@property (readonly) Firestore_kmpArrayValue * _Nullable removeAllFromArray __attribute__((swift_name("removeAllFromArray")));
@property (readonly) Firestore_kmpServerValue * _Nullable setToServerValue __attribute__((swift_name("setToServerValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldTransform.Companion")))
@interface Firestore_kmpFieldTransformCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFieldTransformCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter")))
@interface Firestore_kmpFilter : Firestore_kmpBase
- (instancetype)initWithCompositeFilter:(Firestore_kmpCompositeFilter * _Nullable)compositeFilter fieldFilter:(Firestore_kmpFieldFilter * _Nullable)fieldFilter unaryFilter:(Firestore_kmpUnaryFilter * _Nullable)unaryFilter __attribute__((swift_name("init(compositeFilter:fieldFilter:unaryFilter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFilterCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFilter *)doCopyCompositeFilter:(Firestore_kmpCompositeFilter * _Nullable)compositeFilter fieldFilter:(Firestore_kmpFieldFilter * _Nullable)fieldFilter unaryFilter:(Firestore_kmpUnaryFilter * _Nullable)unaryFilter __attribute__((swift_name("doCopy(compositeFilter:fieldFilter:unaryFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpCompositeFilter * _Nullable compositeFilter __attribute__((swift_name("compositeFilter")));
@property (readonly) Firestore_kmpFieldFilter * _Nullable fieldFilter __attribute__((swift_name("fieldFilter")));
@property (readonly) Firestore_kmpUnaryFilter * _Nullable unaryFilter __attribute__((swift_name("unaryFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter.Companion")))
@interface Firestore_kmpFilterCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreDocument")))
@interface Firestore_kmpFirestoreDocument : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name fields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("init(name:fields:createTime:updateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreDocumentCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreDocument *)doCopyName:(NSString *)name fields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("doCopy(name:fields:createTime:updateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));
@property (readonly) NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *fields __attribute__((swift_name("fields")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreDocument.Companion")))
@interface Firestore_kmpFirestoreDocumentCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreDocumentCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreQuery")))
@interface Firestore_kmpFirestoreQuery : Firestore_kmpBase
- (instancetype)initWithStructuredQuery:(Firestore_kmpStructuredQuery * _Nullable)structuredQuery parent:(NSString * _Nullable)parent __attribute__((swift_name("init(structuredQuery:parent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreQueryCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreQuery *)doCopyStructuredQuery:(Firestore_kmpStructuredQuery * _Nullable)structuredQuery parent:(NSString * _Nullable)parent __attribute__((swift_name("doCopy(structuredQuery:parent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) Firestore_kmpStructuredQuery * _Nullable structuredQuery __attribute__((swift_name("structuredQuery")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreQuery.Companion")))
@interface Firestore_kmpFirestoreQueryCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreQueryCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreUpdateRequest")))
@interface Firestore_kmpFirestoreUpdateRequest : Firestore_kmpBase
- (instancetype)initWithFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreUpdateRequest *)doCopyFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreUpdateRequest.Companion")))
@interface Firestore_kmpFirestoreUpdateRequestCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreValue")))
@interface Firestore_kmpFirestoreValue : Firestore_kmpBase
- (instancetype)initWithStringValue:(NSString * _Nullable)stringValue integerValue:(NSString * _Nullable)integerValue doubleValue:(Firestore_kmpDouble * _Nullable)doubleValue booleanValue:(Firestore_kmpBoolean * _Nullable)booleanValue timestampValue:(NSString * _Nullable)timestampValue referenceValue:(NSString * _Nullable)referenceValue arrayValue:(Firestore_kmpArrayValue * _Nullable)arrayValue mapValue:(Firestore_kmpMapValue * _Nullable)mapValue nullValue:(NSString * _Nullable)nullValue bytesValue:(NSString * _Nullable)bytesValue geoPointValue:(Firestore_kmpGeoPointValue * _Nullable)geoPointValue __attribute__((swift_name("init(stringValue:integerValue:doubleValue:booleanValue:timestampValue:referenceValue:arrayValue:mapValue:nullValue:bytesValue:geoPointValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreValueCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreValue *)doCopyStringValue:(NSString * _Nullable)stringValue integerValue:(NSString * _Nullable)integerValue doubleValue:(Firestore_kmpDouble * _Nullable)doubleValue booleanValue:(Firestore_kmpBoolean * _Nullable)booleanValue timestampValue:(NSString * _Nullable)timestampValue referenceValue:(NSString * _Nullable)referenceValue arrayValue:(Firestore_kmpArrayValue * _Nullable)arrayValue mapValue:(Firestore_kmpMapValue * _Nullable)mapValue nullValue:(NSString * _Nullable)nullValue bytesValue:(NSString * _Nullable)bytesValue geoPointValue:(Firestore_kmpGeoPointValue * _Nullable)geoPointValue __attribute__((swift_name("doCopy(stringValue:integerValue:doubleValue:booleanValue:timestampValue:referenceValue:arrayValue:mapValue:nullValue:bytesValue:geoPointValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpArrayValue * _Nullable arrayValue __attribute__((swift_name("arrayValue")));
@property (readonly) Firestore_kmpBoolean * _Nullable booleanValue __attribute__((swift_name("booleanValue")));
@property (readonly) NSString * _Nullable bytesValue __attribute__((swift_name("bytesValue")));
@property (readonly) Firestore_kmpDouble * _Nullable doubleValue __attribute__((swift_name("doubleValue")));
@property (readonly) Firestore_kmpGeoPointValue * _Nullable geoPointValue __attribute__((swift_name("geoPointValue")));
@property (readonly) NSString * _Nullable integerValue __attribute__((swift_name("integerValue")));
@property (readonly) Firestore_kmpMapValue * _Nullable mapValue __attribute__((swift_name("mapValue")));
@property (readonly) NSString * _Nullable nullValue __attribute__((swift_name("nullValue")));
@property (readonly) NSString * _Nullable referenceValue __attribute__((swift_name("referenceValue")));
@property (readonly) NSString * _Nullable stringValue __attribute__((swift_name("stringValue")));
@property (readonly) NSString * _Nullable timestampValue __attribute__((swift_name("timestampValue")));
@property (readonly) Firestore_kmpValueType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreValue.Companion")))
@interface Firestore_kmpFirestoreValueCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreValueCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreWrite")))
@interface Firestore_kmpFirestoreWrite : Firestore_kmpBase
- (instancetype)initWithUpdate:(Firestore_kmpFirestoreDocument * _Nullable)update delete:(NSString * _Nullable)delete_ transform:(Firestore_kmpDocumentTransform * _Nullable)transform updateMask:(Firestore_kmpDocumentMask * _Nullable)updateMask currentDocument:(Firestore_kmpPrecondition * _Nullable)currentDocument __attribute__((swift_name("init(update:delete:transform:updateMask:currentDocument:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreWriteCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreWrite *)doCopyUpdate:(Firestore_kmpFirestoreDocument * _Nullable)update delete:(NSString * _Nullable)delete_ transform:(Firestore_kmpDocumentTransform * _Nullable)transform updateMask:(Firestore_kmpDocumentMask * _Nullable)updateMask currentDocument:(Firestore_kmpPrecondition * _Nullable)currentDocument __attribute__((swift_name("doCopy(update:delete:transform:updateMask:currentDocument:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpPrecondition * _Nullable currentDocument __attribute__((swift_name("currentDocument")));
@property (readonly, getter=delete) NSString * _Nullable delete_ __attribute__((swift_name("delete_")));
@property (readonly) Firestore_kmpDocumentTransform * _Nullable transform __attribute__((swift_name("transform")));
@property (readonly) Firestore_kmpFirestoreDocument * _Nullable update __attribute__((swift_name("update")));
@property (readonly) Firestore_kmpDocumentMask * _Nullable updateMask __attribute__((swift_name("updateMask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreWrite.Companion")))
@interface Firestore_kmpFirestoreWriteCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreWriteCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreWriteRequest")))
@interface Firestore_kmpFirestoreWriteRequest : Firestore_kmpBase
- (instancetype)initWithFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpFirestoreWriteRequestCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpFirestoreWriteRequest *)doCopyFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreWriteRequest.Companion")))
@interface Firestore_kmpFirestoreWriteRequestCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreWriteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPointValue")))
@interface Firestore_kmpGeoPointValue : Firestore_kmpBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpGeoPointValueCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpGeoPointValue *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPointValue.Companion")))
@interface Firestore_kmpGeoPointValueCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpGeoPointValueCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapValue")))
@interface Firestore_kmpMapValue : Firestore_kmpBase
- (instancetype)initWithFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpMapValueCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpMapValue *)doCopyFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapValue.Companion")))
@interface Firestore_kmpMapValueCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpMapValueCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order")))
@interface Firestore_kmpOrder : Firestore_kmpBase
- (instancetype)initWithField:(Firestore_kmpFieldReference *)field direction:(Firestore_kmpDirection *)direction __attribute__((swift_name("init(field:direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpOrderCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpOrder *)doCopyField:(Firestore_kmpFieldReference *)field direction:(Firestore_kmpDirection *)direction __attribute__((swift_name("doCopy(field:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpDirection *direction __attribute__((swift_name("direction")));
@property (readonly) Firestore_kmpFieldReference *field __attribute__((swift_name("field")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order.Companion")))
@interface Firestore_kmpOrderCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpOrderCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Precondition")))
@interface Firestore_kmpPrecondition : Firestore_kmpBase
- (instancetype)initWithExists:(Firestore_kmpBoolean * _Nullable)exists updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("init(exists:updateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpPreconditionCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpPrecondition *)doCopyExists:(Firestore_kmpBoolean * _Nullable)exists updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("doCopy(exists:updateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpBoolean * _Nullable exists __attribute__((swift_name("exists")));
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Precondition.Companion")))
@interface Firestore_kmpPreconditionCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpPreconditionCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Projection")))
@interface Firestore_kmpProjection : Firestore_kmpBase
- (instancetype)initWithFields:(NSArray<Firestore_kmpFieldReference *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpProjectionCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpProjection *)doCopyFields:(NSArray<Firestore_kmpFieldReference *> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Firestore_kmpFieldReference *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Projection.Companion")))
@interface Firestore_kmpProjectionCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpProjectionCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuerySnapshot")))
@interface Firestore_kmpQuerySnapshot : Firestore_kmpBase
- (instancetype)initWithDocuments:(NSArray<Firestore_kmpDocumentSnapshot *> *)documents size:(int32_t)size __attribute__((swift_name("init(documents:size:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpQuerySnapshot *)doCopyDocuments:(NSArray<Firestore_kmpDocumentSnapshot *> *)documents size:(int32_t)size __attribute__((swift_name("doCopy(documents:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Firestore_kmpDocumentSnapshot *> *documents __attribute__((swift_name("documents")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadOnly")))
@interface Firestore_kmpReadOnly : Firestore_kmpBase
- (instancetype)initWithReadTime:(NSString * _Nullable)readTime __attribute__((swift_name("init(readTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpReadOnlyCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpReadOnly *)doCopyReadTime:(NSString * _Nullable)readTime __attribute__((swift_name("doCopy(readTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable readTime __attribute__((swift_name("readTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadOnly.Companion")))
@interface Firestore_kmpReadOnlyCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpReadOnlyCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadWrite")))
@interface Firestore_kmpReadWrite : Firestore_kmpBase
- (instancetype)initWithRetryTransaction:(NSString * _Nullable)retryTransaction __attribute__((swift_name("init(retryTransaction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpReadWriteCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpReadWrite *)doCopyRetryTransaction:(NSString * _Nullable)retryTransaction __attribute__((swift_name("doCopy(retryTransaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable retryTransaction __attribute__((swift_name("retryTransaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadWrite.Companion")))
@interface Firestore_kmpReadWriteCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpReadWriteCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerValue")))
@interface Firestore_kmpServerValue : Firestore_kmpKotlinEnum<Firestore_kmpServerValue *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpServerValue *serverValueUnspecified __attribute__((swift_name("serverValueUnspecified")));
@property (class, readonly) Firestore_kmpServerValue *requestTime __attribute__((swift_name("requestTime")));
+ (Firestore_kmpKotlinArray<Firestore_kmpServerValue *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpServerValue *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructuredQuery")))
@interface Firestore_kmpStructuredQuery : Firestore_kmpBase
- (instancetype)initWithSelect:(Firestore_kmpProjection * _Nullable)select from:(NSArray<Firestore_kmpCollectionSelector *> *)from where:(Firestore_kmpFilter * _Nullable)where orderBy:(NSArray<Firestore_kmpOrder *> *)orderBy startAt:(Firestore_kmpCursor * _Nullable)startAt endAt:(Firestore_kmpCursor * _Nullable)endAt offset:(Firestore_kmpInt * _Nullable)offset limit:(Firestore_kmpInt * _Nullable)limit __attribute__((swift_name("init(select:from:where:orderBy:startAt:endAt:offset:limit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpStructuredQueryCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpStructuredQuery *)doCopySelect:(Firestore_kmpProjection * _Nullable)select from:(NSArray<Firestore_kmpCollectionSelector *> *)from where:(Firestore_kmpFilter * _Nullable)where orderBy:(NSArray<Firestore_kmpOrder *> *)orderBy startAt:(Firestore_kmpCursor * _Nullable)startAt endAt:(Firestore_kmpCursor * _Nullable)endAt offset:(Firestore_kmpInt * _Nullable)offset limit:(Firestore_kmpInt * _Nullable)limit __attribute__((swift_name("doCopy(select:from:where:orderBy:startAt:endAt:offset:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpCursor * _Nullable endAt __attribute__((swift_name("endAt")));
@property (readonly) NSArray<Firestore_kmpCollectionSelector *> *from __attribute__((swift_name("from")));
@property (readonly) Firestore_kmpInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) Firestore_kmpInt * _Nullable offset __attribute__((swift_name("offset")));
@property (readonly) NSArray<Firestore_kmpOrder *> *orderBy __attribute__((swift_name("orderBy")));
@property (readonly) Firestore_kmpProjection * _Nullable select __attribute__((swift_name("select")));
@property (readonly) Firestore_kmpCursor * _Nullable startAt __attribute__((swift_name("startAt")));
@property (readonly) Firestore_kmpFilter * _Nullable where __attribute__((swift_name("where")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructuredQuery.Companion")))
@interface Firestore_kmpStructuredQueryCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpStructuredQueryCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionOptions")))
@interface Firestore_kmpTransactionOptions : Firestore_kmpBase
- (instancetype)initWithReadOnly:(Firestore_kmpReadOnly * _Nullable)readOnly readWrite:(Firestore_kmpReadWrite * _Nullable)readWrite __attribute__((swift_name("init(readOnly:readWrite:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpTransactionOptionsCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpTransactionOptions *)doCopyReadOnly:(Firestore_kmpReadOnly * _Nullable)readOnly readWrite:(Firestore_kmpReadWrite * _Nullable)readWrite __attribute__((swift_name("doCopy(readOnly:readWrite:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpReadOnly * _Nullable readOnly __attribute__((swift_name("readOnly")));
@property (readonly) Firestore_kmpReadWrite * _Nullable readWrite __attribute__((swift_name("readWrite")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionOptions.Companion")))
@interface Firestore_kmpTransactionOptionsCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpTransactionOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionRequest")))
@interface Firestore_kmpTransactionRequest : Firestore_kmpBase
- (instancetype)initWithOptions:(Firestore_kmpTransactionOptions * _Nullable)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpTransactionRequestCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpTransactionRequest *)doCopyOptions:(Firestore_kmpTransactionOptions * _Nullable)options __attribute__((swift_name("doCopy(options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpTransactionOptions * _Nullable options __attribute__((swift_name("options")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionRequest.Companion")))
@interface Firestore_kmpTransactionRequestCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpTransactionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionResponse")))
@interface Firestore_kmpTransactionResponse : Firestore_kmpBase
- (instancetype)initWithTransaction:(NSString *)transaction __attribute__((swift_name("init(transaction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpTransactionResponseCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpTransactionResponse *)doCopyTransaction:(NSString *)transaction __attribute__((swift_name("doCopy(transaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *transaction __attribute__((swift_name("transaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionResponse.Companion")))
@interface Firestore_kmpTransactionResponseCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpTransactionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionResult")))
@interface Firestore_kmpTransactionResult : Firestore_kmpBase
- (instancetype)initWithWriteResults:(NSArray<Firestore_kmpWriteResult *> *)writeResults commitTime:(NSString *)commitTime __attribute__((swift_name("init(writeResults:commitTime:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpTransactionResult *)doCopyWriteResults:(NSArray<Firestore_kmpWriteResult *> *)writeResults commitTime:(NSString *)commitTime __attribute__((swift_name("doCopy(writeResults:commitTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *commitTime __attribute__((swift_name("commitTime")));
@property (readonly) NSArray<Firestore_kmpWriteResult *> *writeResults __attribute__((swift_name("writeResults")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnaryFilter")))
@interface Firestore_kmpUnaryFilter : Firestore_kmpBase
- (instancetype)initWithOp:(Firestore_kmpUnaryOperator *)op field:(Firestore_kmpFieldReference * _Nullable)field __attribute__((swift_name("init(op:field:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpUnaryFilterCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpUnaryFilter *)doCopyOp:(Firestore_kmpUnaryOperator *)op field:(Firestore_kmpFieldReference * _Nullable)field __attribute__((swift_name("doCopy(op:field:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpFieldReference * _Nullable field __attribute__((swift_name("field")));
@property (readonly) Firestore_kmpUnaryOperator *op __attribute__((swift_name("op")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnaryFilter.Companion")))
@interface Firestore_kmpUnaryFilterCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpUnaryFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnaryOperator")))
@interface Firestore_kmpUnaryOperator : Firestore_kmpKotlinEnum<Firestore_kmpUnaryOperator *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpUnaryOperator *operatorUnspecified __attribute__((swift_name("operatorUnspecified")));
@property (class, readonly) Firestore_kmpUnaryOperator *isNan __attribute__((swift_name("isNan")));
@property (class, readonly) Firestore_kmpUnaryOperator *isNull __attribute__((swift_name("isNull")));
@property (class, readonly) Firestore_kmpUnaryOperator *isNotNan __attribute__((swift_name("isNotNan")));
@property (class, readonly) Firestore_kmpUnaryOperator *isNotNull __attribute__((swift_name("isNotNull")));
+ (Firestore_kmpKotlinArray<Firestore_kmpUnaryOperator *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpUnaryOperator *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueTransformResult")))
@interface Firestore_kmpValueTransformResult : Firestore_kmpBase
- (instancetype)initWithIntegerValue:(NSString * _Nullable)integerValue doubleValue:(Firestore_kmpDouble * _Nullable)doubleValue __attribute__((swift_name("init(integerValue:doubleValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpValueTransformResultCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpValueTransformResult *)doCopyIntegerValue:(NSString * _Nullable)integerValue doubleValue:(Firestore_kmpDouble * _Nullable)doubleValue __attribute__((swift_name("doCopy(integerValue:doubleValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpDouble * _Nullable doubleValue __attribute__((swift_name("doubleValue")));
@property (readonly) NSString * _Nullable integerValue __attribute__((swift_name("integerValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueTransformResult.Companion")))
@interface Firestore_kmpValueTransformResultCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpValueTransformResultCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueType")))
@interface Firestore_kmpValueType : Firestore_kmpKotlinEnum<Firestore_kmpValueType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpValueType *string __attribute__((swift_name("string")));
@property (class, readonly) Firestore_kmpValueType *integer __attribute__((swift_name("integer")));
@property (class, readonly) Firestore_kmpValueType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) Firestore_kmpValueType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) Firestore_kmpValueType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) Firestore_kmpValueType *reference __attribute__((swift_name("reference")));
@property (class, readonly) Firestore_kmpValueType *array __attribute__((swift_name("array")));
@property (class, readonly) Firestore_kmpValueType *map __attribute__((swift_name("map")));
@property (class, readonly) Firestore_kmpValueType *null __attribute__((swift_name("null")));
@property (class, readonly) Firestore_kmpValueType *bytes __attribute__((swift_name("bytes")));
@property (class, readonly) Firestore_kmpValueType *geopoint __attribute__((swift_name("geopoint")));
+ (Firestore_kmpKotlinArray<Firestore_kmpValueType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpValueType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WriteResult")))
@interface Firestore_kmpWriteResult : Firestore_kmpBase
- (instancetype)initWithUpdateTime:(NSString * _Nullable)updateTime transformResults:(NSArray<Firestore_kmpValueTransformResult *> * _Nullable)transformResults __attribute__((swift_name("init(updateTime:transformResults:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpWriteResultCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpWriteResult *)doCopyUpdateTime:(NSString * _Nullable)updateTime transformResults:(NSArray<Firestore_kmpValueTransformResult *> * _Nullable)transformResults __attribute__((swift_name("doCopy(updateTime:transformResults:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Firestore_kmpValueTransformResult *> * _Nullable transformResults __attribute__((swift_name("transformResults")));
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WriteResult.Companion")))
@interface Firestore_kmpWriteResultCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpWriteResultCompanion *shared __attribute__((swift_name("shared")));
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreDeserializer")))
@interface Firestore_kmpFirestoreDeserializer : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)firestoreDeserializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreDeserializer *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, id> *)fromFirestoreFieldsFields:(NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)fields __attribute__((swift_name("fromFirestoreFields(fields:)")));
- (id _Nullable)fromFirestoreValueValue:(Firestore_kmpFirestoreValue *)value __attribute__((swift_name("fromFirestoreValue(value:)")));
- (id _Nullable)fromFirestoreValueTypedValue:(Firestore_kmpFirestoreValue *)value __attribute__((swift_name("fromFirestoreValueTyped(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreSerializer")))
@interface Firestore_kmpFirestoreSerializer : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)firestoreSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpFirestoreSerializer *shared __attribute__((swift_name("shared")));
- (Firestore_kmpFirestoreDocument *)toFirestoreDocumentName:(NSString *)name data:(NSDictionary<NSString *, id> *)data createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("toFirestoreDocument(name:data:createTime:updateTime:)")));
- (NSDictionary<NSString *, Firestore_kmpFirestoreValue *> *)toFirestoreFieldsData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("toFirestoreFields(data:)")));
- (Firestore_kmpFirestoreValue *)toFirestoreValueValue:(id _Nullable)value __attribute__((swift_name("toFirestoreValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreErrorKt")))
@interface Firestore_kmpFirestoreErrorKt : Firestore_kmpBase
+ (Firestore_kmpFirestoreErrorCode *)httpStatusToErrorCodeStatus:(int32_t)status __attribute__((swift_name("httpStatusToErrorCode(status:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreExceptionKt")))
@interface Firestore_kmpFirestoreExceptionKt : Firestore_kmpBase
+ (Firestore_kmpFirestoreException *)createFirestoreExceptionCode:(Firestore_kmpFirestoreErrorCode *)code message:(NSString *)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("createFirestoreException(code:message:cause:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface Firestore_kmpKotlinRuntimeException : Firestore_kmpKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Firestore_kmpKotlinIllegalStateException : Firestore_kmpKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface Firestore_kmpKotlinCancellationException : Firestore_kmpKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Firestore_kmpKotlinArray<T> : Firestore_kmpBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Firestore_kmpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Firestore_kmpKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol Firestore_kmpKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<Firestore_kmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol Firestore_kmpKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol Firestore_kmpKotlinSuspendFunction1 <Firestore_kmpKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Firestore_kmpKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Firestore_kmpKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Firestore_kmpKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Firestore_kmpKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Firestore_kmpKotlinx_serialization_coreKSerializer <Firestore_kmpKotlinx_serialization_coreSerializationStrategy, Firestore_kmpKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol Firestore_kmpKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol Firestore_kmpKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface Firestore_kmpKtor_client_coreHttpClient : Firestore_kmpBase <Firestore_kmpKotlinx_coroutines_coreCoroutineScope, Firestore_kmpKtor_ioCloseable>
- (instancetype)initWithEngine:(id<Firestore_kmpKtor_client_coreHttpClientEngine>)engine userConfig:(Firestore_kmpKtor_client_coreHttpClientConfig<Firestore_kmpKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (Firestore_kmpKtor_client_coreHttpClient *)configBlock:(void (^)(Firestore_kmpKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<Firestore_kmpKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<Firestore_kmpKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) Firestore_kmpKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) Firestore_kmpKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) Firestore_kmpKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) Firestore_kmpKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) Firestore_kmpKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Firestore_kmpKotlinEnumCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol Firestore_kmpKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol Firestore_kmpKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Firestore_kmpKotlinx_serialization_coreEncoder
@required
- (id<Firestore_kmpKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Firestore_kmpKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Firestore_kmpKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Firestore_kmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Firestore_kmpKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<Firestore_kmpKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<Firestore_kmpKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) Firestore_kmpKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Firestore_kmpKotlinx_serialization_coreDecoder
@required
- (id<Firestore_kmpKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Firestore_kmpKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (Firestore_kmpKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Firestore_kmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol Firestore_kmpKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<Firestore_kmpKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<Firestore_kmpKotlinCoroutineContextElement> _Nullable)getKey:(id<Firestore_kmpKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<Firestore_kmpKotlinCoroutineContext>)minusKeyKey:(id<Firestore_kmpKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<Firestore_kmpKotlinCoroutineContext>)plusContext:(id<Firestore_kmpKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol Firestore_kmpKtor_client_coreHttpClientEngine <Firestore_kmpKotlinx_coroutines_coreCoroutineScope, Firestore_kmpKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(Firestore_kmpKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(Firestore_kmpKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(Firestore_kmpKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<Firestore_kmpKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface Firestore_kmpKtor_client_coreHttpClientEngineConfig : Firestore_kmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property Firestore_kmpKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface Firestore_kmpKtor_client_coreHttpClientConfig<T> : Firestore_kmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Firestore_kmpKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(Firestore_kmpKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<Firestore_kmpKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(Firestore_kmpKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(Firestore_kmpKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol Firestore_kmpKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol Firestore_kmpKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<Firestore_kmpKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface Firestore_kmpKtor_eventsEvents : Firestore_kmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(Firestore_kmpKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<Firestore_kmpKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(Firestore_kmpKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(Firestore_kmpKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface Firestore_kmpKtor_utilsPipeline<TSubject, TContext> : Firestore_kmpBase
- (instancetype)initWithPhases:(Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(Firestore_kmpKtor_utilsPipelinePhase *)reference phase:(Firestore_kmpKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(Firestore_kmpKtor_utilsPipelinePhase *)reference phase:(Firestore_kmpKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase block:(id<Firestore_kmpKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(Firestore_kmpKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(Firestore_kmpKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(Firestore_kmpKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<Firestore_kmpKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface Firestore_kmpKtor_client_coreHttpReceivePipeline : Firestore_kmpKtor_utilsPipeline<Firestore_kmpKtor_client_coreHttpResponse *, Firestore_kmpKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface Firestore_kmpKtor_client_coreHttpRequestPipeline : Firestore_kmpKtor_utilsPipeline<id, Firestore_kmpKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface Firestore_kmpKtor_client_coreHttpResponsePipeline : Firestore_kmpKtor_utilsPipeline<Firestore_kmpKtor_client_coreHttpResponseContainer *, Firestore_kmpKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface Firestore_kmpKtor_client_coreHttpSendPipeline : Firestore_kmpKtor_utilsPipeline<id, Firestore_kmpKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(Firestore_kmpKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<Firestore_kmpKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Firestore_kmpKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Firestore_kmpKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Firestore_kmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Firestore_kmpKotlinx_serialization_coreSerializersModule : Firestore_kmpBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<Firestore_kmpKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Firestore_kmpKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Firestore_kmpKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Firestore_kmpKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol Firestore_kmpKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Firestore_kmpKotlinx_serialization_coreSerialKind : Firestore_kmpBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Firestore_kmpKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Firestore_kmpKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Firestore_kmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Firestore_kmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Firestore_kmpKotlinNothing : Firestore_kmpBase
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol Firestore_kmpKotlinCoroutineContextElement <Firestore_kmpKotlinCoroutineContext>
@required
@property (readonly) id<Firestore_kmpKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol Firestore_kmpKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface Firestore_kmpKtor_client_coreHttpRequestData : Firestore_kmpBase
- (instancetype)initWithUrl:(Firestore_kmpKtor_httpUrl *)url method:(Firestore_kmpKtor_httpHttpMethod *)method headers:(id<Firestore_kmpKtor_httpHeaders>)headers body:(Firestore_kmpKtor_httpOutgoingContent *)body executionContext:(id<Firestore_kmpKotlinx_coroutines_coreJob>)executionContext attributes:(id<Firestore_kmpKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<Firestore_kmpKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) Firestore_kmpKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<Firestore_kmpKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<Firestore_kmpKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) Firestore_kmpKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface Firestore_kmpKtor_client_coreHttpResponseData : Firestore_kmpBase
- (instancetype)initWithStatusCode:(Firestore_kmpKtor_httpHttpStatusCode *)statusCode requestTime:(Firestore_kmpKtor_utilsGMTDate *)requestTime headers:(id<Firestore_kmpKtor_httpHeaders>)headers version:(Firestore_kmpKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<Firestore_kmpKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<Firestore_kmpKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) Firestore_kmpKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) Firestore_kmpKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface Firestore_kmpKotlinAbstractCoroutineContextElement : Firestore_kmpBase <Firestore_kmpKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<Firestore_kmpKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Firestore_kmpKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol Firestore_kmpKotlinContinuationInterceptor <Firestore_kmpKotlinCoroutineContextElement>
@required
- (id<Firestore_kmpKotlinContinuation>)interceptContinuationContinuation:(id<Firestore_kmpKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<Firestore_kmpKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher : Firestore_kmpKotlinAbstractCoroutineContextElement <Firestore_kmpKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<Firestore_kmpKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<Firestore_kmpKotlinCoroutineContext>)context block:(id<Firestore_kmpKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<Firestore_kmpKotlinCoroutineContext>)context block:(id<Firestore_kmpKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<Firestore_kmpKotlinContinuation>)interceptContinuationContinuation:(id<Firestore_kmpKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<Firestore_kmpKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<Firestore_kmpKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface Firestore_kmpKtor_client_coreProxyConfig : Firestore_kmpBase
- (instancetype)initWithUrl:(Firestore_kmpKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol Firestore_kmpKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(Firestore_kmpKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) Firestore_kmpKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface Firestore_kmpKtor_utilsAttributeKey<T> : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface Firestore_kmpKtor_eventsEventDefinition<T> : Firestore_kmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol Firestore_kmpKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface Firestore_kmpKtor_utilsPipelinePhase : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol Firestore_kmpKotlinSuspendFunction2 <Firestore_kmpKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface Firestore_kmpKtor_client_coreHttpReceivePipelinePhases : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol Firestore_kmpKtor_httpHttpMessage
@required
@property (readonly) id<Firestore_kmpKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface Firestore_kmpKtor_client_coreHttpResponse : Firestore_kmpBase <Firestore_kmpKtor_httpHttpMessage, Firestore_kmpKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<Firestore_kmpKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) Firestore_kmpKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) Firestore_kmpKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface Firestore_kmpKotlinUnit : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface Firestore_kmpKtor_client_coreHttpRequestPipelinePhases : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol Firestore_kmpKtor_httpHttpMessageBuilder
@required
@property (readonly) Firestore_kmpKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface Firestore_kmpKtor_client_coreHttpRequestBuilder : Firestore_kmpBase <Firestore_kmpKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<Firestore_kmpKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<Firestore_kmpKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<Firestore_kmpKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (Firestore_kmpKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(Firestore_kmpKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (Firestore_kmpKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(Firestore_kmpKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(Firestore_kmpKtor_httpURLBuilder *, Firestore_kmpKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property Firestore_kmpKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<Firestore_kmpKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) Firestore_kmpKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property Firestore_kmpKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) Firestore_kmpKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface Firestore_kmpKtor_client_coreHttpResponsePipelinePhases : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface Firestore_kmpKtor_client_coreHttpResponseContainer : Firestore_kmpBase
- (instancetype)initWithExpectedType:(Firestore_kmpKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(Firestore_kmpKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firestore_kmpKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface Firestore_kmpKtor_client_coreHttpClientCall : Firestore_kmpBase <Firestore_kmpKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(Firestore_kmpKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(Firestore_kmpKtor_client_coreHttpClient *)client requestData:(Firestore_kmpKtor_client_coreHttpRequestData *)requestData responseData:(Firestore_kmpKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(Firestore_kmpKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(Firestore_kmpKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<Firestore_kmpKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<Firestore_kmpKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property Firestore_kmpKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface Firestore_kmpKtor_client_coreHttpSendPipelinePhases : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) Firestore_kmpKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Firestore_kmpKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Firestore_kmpKotlinKClass>)kClass provider:(id<Firestore_kmpKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Firestore_kmpKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Firestore_kmpKotlinKClass>)kClass serializer:(id<Firestore_kmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass actualClass:(id<Firestore_kmpKotlinKClass>)actualClass actualSerializer:(id<Firestore_kmpKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass defaultDeserializerProvider:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass defaultDeserializerProvider:(id<Firestore_kmpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<Firestore_kmpKotlinKClass>)baseClass defaultSerializerProvider:(id<Firestore_kmpKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Firestore_kmpKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Firestore_kmpKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol Firestore_kmpKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol Firestore_kmpKotlinKClass <Firestore_kmpKotlinKDeclarationContainer, Firestore_kmpKotlinKAnnotatedElement, Firestore_kmpKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface Firestore_kmpKtor_httpUrl : Firestore_kmpBase
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<Firestore_kmpKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface Firestore_kmpKtor_httpHttpMethod : Firestore_kmpBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol Firestore_kmpKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<Firestore_kmpKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol Firestore_kmpKtor_httpHeaders <Firestore_kmpKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface Firestore_kmpKtor_httpOutgoingContent : Firestore_kmpBase
- (id _Nullable)getPropertyKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(Firestore_kmpKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<Firestore_kmpKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) Firestore_kmpLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) Firestore_kmpKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<Firestore_kmpKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol Firestore_kmpKotlinx_coroutines_coreJob <Firestore_kmpKotlinCoroutineContextElement>
@required
- (id<Firestore_kmpKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<Firestore_kmpKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(Firestore_kmpKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (Firestore_kmpKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<Firestore_kmpKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(Firestore_kmpKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<Firestore_kmpKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(Firestore_kmpKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<Firestore_kmpKotlinx_coroutines_coreJob>)plusOther_:(id<Firestore_kmpKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<Firestore_kmpKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<Firestore_kmpKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<Firestore_kmpKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface Firestore_kmpKtor_httpHttpStatusCode : Firestore_kmpBase <Firestore_kmpKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(Firestore_kmpKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (Firestore_kmpKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (Firestore_kmpKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface Firestore_kmpKtor_utilsGMTDate : Firestore_kmpBase <Firestore_kmpKotlinComparable>
@property (class, readonly, getter=companion) Firestore_kmpKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(Firestore_kmpKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (Firestore_kmpKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(Firestore_kmpKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(Firestore_kmpKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) Firestore_kmpKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) Firestore_kmpKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface Firestore_kmpKtor_httpHttpProtocolVersion : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol Firestore_kmpKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface Firestore_kmpKotlinAbstractCoroutineContextKey<B, E> : Firestore_kmpBase <Firestore_kmpKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<Firestore_kmpKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<Firestore_kmpKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcherKey : Firestore_kmpKotlinAbstractCoroutineContextKey<id<Firestore_kmpKotlinContinuationInterceptor>, Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<Firestore_kmpKotlinCoroutineContextKey>)baseKey safeCast:(id<Firestore_kmpKotlinCoroutineContextElement> _Nullable (^)(id<Firestore_kmpKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol Firestore_kmpKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol Firestore_kmpKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(Firestore_kmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(Firestore_kmpLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(Firestore_kmpKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(Firestore_kmpLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(Firestore_kmpKtor_ioChunkBuffer *)dst completionHandler:(void (^)(Firestore_kmpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(Firestore_kmpKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(Firestore_kmpKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(Firestore_kmpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(Firestore_kmpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(Firestore_kmpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(Firestore_kmpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(Firestore_kmpByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(Firestore_kmpDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(Firestore_kmpFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(Firestore_kmpKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(Firestore_kmpKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(Firestore_kmpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(Firestore_kmpLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(Firestore_kmpKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(Firestore_kmpKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<Firestore_kmpKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(Firestore_kmpShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<Firestore_kmpKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<Firestore_kmpKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(Firestore_kmpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) Firestore_kmpKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol Firestore_kmpKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<Firestore_kmpKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<Firestore_kmpKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<Firestore_kmpKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<Firestore_kmpKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface Firestore_kmpKtor_utilsStringValuesBuilderImpl : Firestore_kmpBase <Firestore_kmpKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<Firestore_kmpKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<Firestore_kmpKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<Firestore_kmpKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<Firestore_kmpKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Firestore_kmpMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface Firestore_kmpKtor_httpHeadersBuilder : Firestore_kmpKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<Firestore_kmpKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface Firestore_kmpKtor_client_coreHttpRequestBuilderCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface Firestore_kmpKtor_httpURLBuilder : Firestore_kmpBase
- (instancetype)initWithProtocol:(Firestore_kmpKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<Firestore_kmpKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<Firestore_kmpKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<Firestore_kmpKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property Firestore_kmpKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface Firestore_kmpKtor_utilsTypeInfo : Firestore_kmpBase
- (instancetype)initWithType:(id<Firestore_kmpKotlinKClass>)type reifiedType:(id<Firestore_kmpKotlinKType>)reifiedType kotlinType:(id<Firestore_kmpKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpKtor_utilsTypeInfo *)doCopyType:(id<Firestore_kmpKotlinKClass>)type reifiedType:(id<Firestore_kmpKotlinKType>)reifiedType kotlinType:(id<Firestore_kmpKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<Firestore_kmpKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<Firestore_kmpKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<Firestore_kmpKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface Firestore_kmpKtor_client_coreHttpClientCallCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol Firestore_kmpKtor_client_coreHttpRequest <Firestore_kmpKtor_httpHttpMessage, Firestore_kmpKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<Firestore_kmpKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) Firestore_kmpKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) Firestore_kmpKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) Firestore_kmpKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface Firestore_kmpKtor_httpUrlCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol Firestore_kmpKtor_httpParameters <Firestore_kmpKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface Firestore_kmpKtor_httpURLProtocol : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface Firestore_kmpKtor_httpHttpMethodCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<Firestore_kmpKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) Firestore_kmpKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol Firestore_kmpKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface Firestore_kmpKtor_httpHeaderValueWithParameters : Firestore_kmpBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<Firestore_kmpKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<Firestore_kmpKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface Firestore_kmpKtor_httpContentType : Firestore_kmpKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<Firestore_kmpKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<Firestore_kmpKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(Firestore_kmpKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (Firestore_kmpKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (Firestore_kmpKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol Firestore_kmpKotlinx_coroutines_coreChildHandle <Firestore_kmpKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(Firestore_kmpKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<Firestore_kmpKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol Firestore_kmpKotlinx_coroutines_coreChildJob <Firestore_kmpKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<Firestore_kmpKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol Firestore_kmpKotlinSequence
@required
- (id<Firestore_kmpKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol Firestore_kmpKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) Firestore_kmpKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<Firestore_kmpKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(Firestore_kmpKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<Firestore_kmpKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol Firestore_kmpKotlinx_coroutines_coreSelectClause0 <Firestore_kmpKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface Firestore_kmpKtor_httpHttpStatusCodeCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) Firestore_kmpKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<Firestore_kmpKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface Firestore_kmpKtor_utilsGMTDateCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface Firestore_kmpKtor_utilsWeekDay : Firestore_kmpKotlinEnum<Firestore_kmpKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) Firestore_kmpKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface Firestore_kmpKtor_utilsMonth : Firestore_kmpKotlinEnum<Firestore_kmpKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) Firestore_kmpKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (Firestore_kmpKotlinArray<Firestore_kmpKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface Firestore_kmpKtor_httpHttpProtocolVersionCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (Firestore_kmpKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) Firestore_kmpKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface Firestore_kmpKtor_ioMemory : Firestore_kmpBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(Firestore_kmpKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(Firestore_kmpKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (Firestore_kmpKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (Firestore_kmpKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface Firestore_kmpKtor_ioBuffer : Firestore_kmpBase
- (instancetype)initWithMemory:(Firestore_kmpKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) Firestore_kmpKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (Firestore_kmpKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(Firestore_kmpKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) Firestore_kmpKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface Firestore_kmpKtor_ioChunkBuffer : Firestore_kmpKtor_ioBuffer
- (instancetype)initWithMemory:(Firestore_kmpKtor_ioMemory *)memory origin:(Firestore_kmpKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<Firestore_kmpKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(Firestore_kmpKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (Firestore_kmpKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<Firestore_kmpKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) Firestore_kmpKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) Firestore_kmpKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Firestore_kmpKotlinByteArray : Firestore_kmpBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Firestore_kmpByte *(^)(Firestore_kmpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Firestore_kmpKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface Firestore_kmpKtor_ioInput : Firestore_kmpBase <Firestore_kmpKtor_ioCloseable>
- (instancetype)initWithHead:(Firestore_kmpKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<Firestore_kmpKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) Firestore_kmpKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Firestore_kmpKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(Firestore_kmpKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(Firestore_kmpKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(Firestore_kmpKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<Firestore_kmpKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<Firestore_kmpKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<Firestore_kmpKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface Firestore_kmpKtor_ioByteReadPacket : Firestore_kmpKtor_ioInput
- (instancetype)initWithHead:(Firestore_kmpKtor_ioChunkBuffer *)head pool:(id<Firestore_kmpKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(Firestore_kmpKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<Firestore_kmpKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Firestore_kmpKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (Firestore_kmpKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Firestore_kmpKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(Firestore_kmpKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol Firestore_kmpKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (Firestore_kmpKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol Firestore_kmpKotlinAppendable
@required
- (id<Firestore_kmpKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<Firestore_kmpKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<Firestore_kmpKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface Firestore_kmpKtor_httpURLBuilderCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol Firestore_kmpKtor_httpParametersBuilder <Firestore_kmpKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol Firestore_kmpKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<Firestore_kmpKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<Firestore_kmpKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface Firestore_kmpKtor_httpURLProtocolCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) Firestore_kmpKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, Firestore_kmpKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface Firestore_kmpKtor_httpHeaderValueParam : Firestore_kmpBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (Firestore_kmpKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface Firestore_kmpKtor_httpHeaderValueWithParametersCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<Firestore_kmpKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface Firestore_kmpKtor_httpContentTypeCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) Firestore_kmpKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol Firestore_kmpKotlinx_coroutines_coreParentJob <Firestore_kmpKotlinx_coroutines_coreJob>
@required
- (Firestore_kmpKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol Firestore_kmpKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<Firestore_kmpKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<Firestore_kmpKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface Firestore_kmpKtor_utilsWeekDayCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (Firestore_kmpKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface Firestore_kmpKtor_utilsMonthCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (Firestore_kmpKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (Firestore_kmpKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface Firestore_kmpKtor_ioMemoryCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface Firestore_kmpKtor_ioBufferCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol Firestore_kmpKtor_ioObjectPool <Firestore_kmpKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface Firestore_kmpKtor_ioChunkBufferCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<Firestore_kmpKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<Firestore_kmpKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface Firestore_kmpKotlinByteIterator : Firestore_kmpBase <Firestore_kmpKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Firestore_kmpByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface Firestore_kmpKtor_ioInputCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface Firestore_kmpKtor_ioByteReadPacketCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Firestore_kmpKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface Firestore_kmpKotlinKTypeProjection : Firestore_kmpBase
- (instancetype)initWithVariance:(Firestore_kmpKotlinKVariance * _Nullable)variance type:(id<Firestore_kmpKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Firestore_kmpKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (Firestore_kmpKotlinKTypeProjection *)doCopyVariance:(Firestore_kmpKotlinKVariance * _Nullable)variance type:(id<Firestore_kmpKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<Firestore_kmpKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) Firestore_kmpKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface Firestore_kmpKotlinKVariance : Firestore_kmpKotlinEnum<Firestore_kmpKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Firestore_kmpKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) Firestore_kmpKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) Firestore_kmpKotlinKVariance *out __attribute__((swift_name("out")));
+ (Firestore_kmpKotlinArray<Firestore_kmpKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Firestore_kmpKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface Firestore_kmpKotlinKTypeProjectionCompanion : Firestore_kmpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firestore_kmpKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (Firestore_kmpKotlinKTypeProjection *)contravariantType:(id<Firestore_kmpKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (Firestore_kmpKotlinKTypeProjection *)covariantType:(id<Firestore_kmpKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (Firestore_kmpKotlinKTypeProjection *)invariantType:(id<Firestore_kmpKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) Firestore_kmpKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
