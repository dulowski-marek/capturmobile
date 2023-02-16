#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CapturmobileVerifyImageUIState, CapturmobileCapturError, CapturmobileVerifyImageUIStateError, CapturmobileVerifyImageUIStateFailure, CapturmobileVerifyImageUIStateInitial, CapturmobileVerifyImageUIStatePending, CapturmobileVerifyImageUIStateSuccess, CapturmobileVerifyImageRemotely, CapturmobileResponse<T>, CapturmobileCaptur, CapturmobileVerifyImageUseCase, CapturmobileVerifyImageLocallyUseCase, CapturmobileVerifyImageRemotelyUseCase, CapturmobileVerifyImageViewModel, CapturmobileCapturAnalyticsConfiguration, CapturmobileCapturApiConfiguration, CapturmobileCapturAuxiliaryConfiguration, CapturmobileCapturLoggerConfiguration, CapturmobileCapturLoggerLevel, CapturmobileKotlinEnumCompanion, CapturmobileKotlinEnum<E>, CapturmobileKotlinArray<T>, CapturmobileImageVerifierProxy, CapturmobileLocationCompanion, CapturmobileLocation, CapturmobileKotlinByteArray, CapturmobileCompressionResult, CapturmobileImageVerifierOutput, CapturmobileImageVerifierInputImage, UIImage, CapturmobileRecordType, CapturmobileImageVerifierInputImageType, CapturmobileVerifyImage, CapturmobileVerifyImageLocally, CapturmobileAnalyticalConfig, CapturmobileAnalyticsEventInitialised, CapturmobileAnalyticsEventPhotoQualityAnalysed, CapturmobileAnalyticsEventPhotoSubmitted, CapturmobileAnalyticsEventPhotoTaken, CapturmobileAnalyticsEventPhotoVerificationBypassed, CapturmobileAnalyticsManagerCompanion, CapturmobileEvent, CapturmobilePayloaderCompanion, CapturmobilePayloaderBuilderCompanion, CapturmobilePayloaderBuilder, CapturmobilePayloader, CapturmobileCapturErrorFailedToCompressImage, CapturmobileCapturErrorGeneralError, CapturmobileCapturErrorImageValidationFailed, CapturmobileCapturErrorImageValidationFailedLocally, CapturmobileCapturErrorImageValidationFailedRemotely, CapturmobileCapturErrorNetworkingIssue, CapturmobileKotlinThrowable, CapturmobileKotlinException, CapturmobileKtor_client_coreHttpClient, CapturmobileKotlinx_serialization_jsonJson, CapturmobileInstantDecisionResponseData, CapturmobileInstantDecisionResponseCompanion, CapturmobileInstantDecisionResponse, CapturmobileInstantDecisionResponseDataCompanion, CapturmobileResponseCompanion, CapturmobileNetworkEnvironmentFactory, CapturmobileNetworkingErrorInternalCompanion, CapturmobileNetworkingErrorInternal, NSData, CapturmobileKotlinByteIterator, CapturmobileKotlinRuntimeException, CapturmobileKotlinIllegalStateException, CapturmobileKtor_client_coreHttpClientEngineConfig, CapturmobileKtor_client_coreHttpClientConfig<T>, CapturmobileKtor_eventsEvents, CapturmobileKtor_client_coreHttpReceivePipeline, CapturmobileKtor_client_coreHttpRequestPipeline, CapturmobileKtor_client_coreHttpResponsePipeline, CapturmobileKtor_client_coreHttpSendPipeline, CapturmobileKotlinx_serialization_coreSerializersModule, CapturmobileKotlinx_serialization_jsonJsonDefault, CapturmobileKotlinx_serialization_jsonJsonElement, CapturmobileKotlinx_serialization_jsonJsonConfiguration, CapturmobileKotlinx_serialization_coreSerialKind, CapturmobileKotlinNothing, CapturmobileKtor_client_coreHttpRequestData, CapturmobileKtor_client_coreHttpResponseData, CapturmobileKotlinx_coroutines_coreCoroutineDispatcher, CapturmobileKtor_client_coreProxyConfig, CapturmobileKtor_utilsAttributeKey<T>, CapturmobileKtor_eventsEventDefinition<T>, CapturmobileKtor_utilsPipelinePhase, CapturmobileKtor_utilsPipeline<TSubject, TContext>, CapturmobileKtor_client_coreHttpReceivePipelinePhases, CapturmobileKtor_client_coreHttpResponse, CapturmobileKotlinUnit, CapturmobileKtor_client_coreHttpRequestPipelinePhases, CapturmobileKtor_client_coreHttpRequestBuilder, CapturmobileKtor_client_coreHttpResponsePipelinePhases, CapturmobileKtor_client_coreHttpResponseContainer, CapturmobileKtor_client_coreHttpClientCall, CapturmobileKtor_client_coreHttpSendPipelinePhases, CapturmobileKotlinx_serialization_jsonJsonElementCompanion, CapturmobileKtor_httpUrl, CapturmobileKtor_httpHttpMethod, CapturmobileKtor_httpOutgoingContent, CapturmobileKtor_httpHttpStatusCode, CapturmobileKtor_utilsGMTDate, CapturmobileKtor_httpHttpProtocolVersion, CapturmobileKotlinAbstractCoroutineContextElement, CapturmobileKotlinx_coroutines_coreCoroutineDispatcherKey, CapturmobileKtor_httpHeadersBuilder, CapturmobileKtor_client_coreHttpRequestBuilderCompanion, CapturmobileKtor_httpURLBuilder, CapturmobileKtor_utilsTypeInfo, CapturmobileKtor_client_coreHttpClientCallCompanion, CapturmobileKtor_httpUrlCompanion, CapturmobileKtor_httpURLProtocol, CapturmobileKtor_httpHttpMethodCompanion, CapturmobileKtor_httpContentType, CapturmobileKotlinCancellationException, CapturmobileKtor_httpHttpStatusCodeCompanion, CapturmobileKtor_utilsGMTDateCompanion, CapturmobileKtor_utilsWeekDay, CapturmobileKtor_utilsMonth, CapturmobileKtor_httpHttpProtocolVersionCompanion, CapturmobileKotlinAbstractCoroutineContextKey<B, E>, CapturmobileKtor_ioMemory, CapturmobileKtor_ioChunkBuffer, CapturmobileKtor_ioBuffer, CapturmobileKtor_ioByteReadPacket, CapturmobileKtor_utilsStringValuesBuilderImpl, CapturmobileKtor_httpURLBuilderCompanion, CapturmobileKtor_httpURLProtocolCompanion, CapturmobileKtor_httpHeaderValueParam, CapturmobileKtor_httpHeaderValueWithParametersCompanion, CapturmobileKtor_httpHeaderValueWithParameters, CapturmobileKtor_httpContentTypeCompanion, CapturmobileKtor_utilsWeekDayCompanion, CapturmobileKtor_utilsMonthCompanion, CapturmobileKtor_ioMemoryCompanion, CapturmobileKtor_ioBufferCompanion, CapturmobileKtor_ioChunkBufferCompanion, CapturmobileKtor_ioInputCompanion, CapturmobileKtor_ioInput, CapturmobileKtor_ioByteReadPacketCompanion, CapturmobileKotlinKTypeProjection, CapturmobileKotlinx_coroutines_coreAtomicDesc, CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, CapturmobileKotlinKVariance, CapturmobileKotlinKTypeProjectionCompanion, CapturmobileKotlinx_coroutines_coreAtomicOp<__contravariant T>, CapturmobileKotlinx_coroutines_coreOpDescriptor, CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode, CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol CapturmobilePlatform, CapturmobileUseCase, CapturmobileImageVerifierInput, CapturmobileKotlinx_coroutines_coreCoroutineScope, CapturmobileKotlinx_coroutines_coreStateFlow, CapturmobileCapturConfiguration, CapturmobileAnalyticsProvider, CapturmobileKotlinComparable, CapturmobileImageVerifier, CapturmobileBaseDataModel, CapturmobileKotlinx_serialization_coreKSerializer, CapturmobileAnalyticsEvent, CapturmobileKotlinSuspendFunction1, CapturmobileKotlinCoroutineContext, CapturmobileKotlinx_coroutines_coreCoroutineExceptionHandler, CapturmobileKotlinx_coroutines_coreFlowCollector, CapturmobileKotlinx_coroutines_coreFlow, CapturmobileKotlinx_coroutines_coreSharedFlow, CapturmobileKotlinIterator, CapturmobileKotlinx_serialization_coreEncoder, CapturmobileKotlinx_serialization_coreSerialDescriptor, CapturmobileKotlinx_serialization_coreSerializationStrategy, CapturmobileKotlinx_serialization_coreDecoder, CapturmobileKotlinx_serialization_coreDeserializationStrategy, CapturmobileKtor_ioCloseable, CapturmobileKtor_client_coreHttpClientEngine, CapturmobileKtor_client_coreHttpClientEngineCapability, CapturmobileKtor_utilsAttributes, CapturmobileKotlinx_serialization_coreSerialFormat, CapturmobileKotlinx_serialization_coreStringFormat, CapturmobileKotlinFunction, CapturmobileKotlinCoroutineContextElement, CapturmobileKotlinCoroutineContextKey, CapturmobileKotlinx_serialization_coreCompositeEncoder, CapturmobileKotlinAnnotation, CapturmobileKotlinx_serialization_coreCompositeDecoder, CapturmobileKtor_client_coreHttpClientPlugin, CapturmobileKotlinx_coroutines_coreDisposableHandle, CapturmobileKotlinSuspendFunction2, CapturmobileKotlinx_serialization_coreSerializersModuleCollector, CapturmobileKotlinKClass, CapturmobileKtor_httpHeaders, CapturmobileKotlinx_coroutines_coreJob, CapturmobileKotlinContinuation, CapturmobileKotlinContinuationInterceptor, CapturmobileKotlinx_coroutines_coreRunnable, CapturmobileKtor_httpHttpMessage, CapturmobileKtor_ioByteReadChannel, CapturmobileKtor_httpHttpMessageBuilder, CapturmobileKtor_client_coreHttpRequest, CapturmobileKotlinKDeclarationContainer, CapturmobileKotlinKAnnotatedElement, CapturmobileKotlinKClassifier, CapturmobileKtor_httpParameters, CapturmobileKotlinMapEntry, CapturmobileKtor_utilsStringValues, CapturmobileKotlinx_coroutines_coreChildHandle, CapturmobileKotlinx_coroutines_coreChildJob, CapturmobileKotlinSequence, CapturmobileKotlinx_coroutines_coreSelectClause0, CapturmobileKtor_ioReadSession, CapturmobileKotlinAppendable, CapturmobileKtor_utilsStringValuesBuilder, CapturmobileKtor_httpParametersBuilder, CapturmobileKotlinKType, CapturmobileKotlinx_coroutines_coreParentJob, CapturmobileKotlinx_coroutines_coreSelectInstance, CapturmobileKotlinSuspendFunction0, CapturmobileKtor_ioObjectPool;

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
@interface CapturmobileBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CapturmobileBase (CapturmobileBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CapturmobileMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CapturmobileMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCapturmobileKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CapturmobileNumber : NSNumber
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
@interface CapturmobileByte : CapturmobileNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CapturmobileUByte : CapturmobileNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CapturmobileShort : CapturmobileNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CapturmobileUShort : CapturmobileNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CapturmobileInt : CapturmobileNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CapturmobileUInt : CapturmobileNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CapturmobileLong : CapturmobileNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CapturmobileULong : CapturmobileNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CapturmobileFloat : CapturmobileNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CapturmobileDouble : CapturmobileNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CapturmobileBoolean : CapturmobileNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface CapturmobileGreeting : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end

__attribute__((swift_name("Platform")))
@protocol CapturmobilePlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface CapturmobileIOSPlatform : CapturmobileBase <CapturmobilePlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("VerifyImageUIState")))
@interface CapturmobileVerifyImageUIState : CapturmobileBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUIState.Error")))
@interface CapturmobileVerifyImageUIStateError : CapturmobileVerifyImageUIState
- (instancetype)initWithError:(CapturmobileCapturError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileCapturError *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileVerifyImageUIStateError *)doCopyError:(CapturmobileCapturError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileCapturError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUIState.Failure")))
@interface CapturmobileVerifyImageUIStateFailure : CapturmobileVerifyImageUIState
- (instancetype)initWithMessage:(NSString *)message failureCount:(int32_t)failureCount __attribute__((swift_name("init(message:failureCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileVerifyImageUIStateFailure *)doCopyMessage:(NSString *)message failureCount:(int32_t)failureCount __attribute__((swift_name("doCopy(message:failureCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t failureCount __attribute__((swift_name("failureCount")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUIState.Initial")))
@interface CapturmobileVerifyImageUIStateInitial : CapturmobileVerifyImageUIState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)initial __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileVerifyImageUIStateInitial *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUIState.Pending")))
@interface CapturmobileVerifyImageUIStatePending : CapturmobileVerifyImageUIState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pending __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileVerifyImageUIStatePending *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUIState.Success")))
@interface CapturmobileVerifyImageUIStateSuccess : CapturmobileVerifyImageUIState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileVerifyImageUIStateSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageViewModel")))
@interface CapturmobileVerifyImageViewModel : CapturmobileBase
- (instancetype)initWithUsecase:(id<CapturmobileUseCase>)usecase useCaseRemote:(id<CapturmobileUseCase>)useCaseRemote __attribute__((swift_name("init(usecase:useCaseRemote:)"))) __attribute__((objc_designated_initializer));
- (void)sendImageWithNoteInput:(id<CapturmobileImageVerifierInput>)input resp:(void (^)(CapturmobileResponse<CapturmobileVerifyImageRemotely *> *))resp __attribute__((swift_name("sendImageWithNote(input:resp:)")));
- (void)sendImageWithNoteInput:(id<CapturmobileImageVerifierInput>)input scope:(id<CapturmobileKotlinx_coroutines_coreCoroutineScope>)scope resp:(void (^)(CapturmobileResponse<CapturmobileVerifyImageRemotely *> *))resp __attribute__((swift_name("sendImageWithNote(input:scope:resp:)")));
- (void)verifyImageInput:(id<CapturmobileImageVerifierInput>)input __attribute__((swift_name("verifyImage(input:)")));
- (void)verifyImageInput:(id<CapturmobileImageVerifierInput>)input scope:(id<CapturmobileKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("verifyImage(input:scope:)")));
@property (readonly) id<CapturmobileKotlinx_coroutines_coreStateFlow> uiState __attribute__((swift_name("uiState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Captur")))
@interface CapturmobileCaptur : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)captur __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileCaptur *shared __attribute__((swift_name("shared")));
- (id<CapturmobileCapturConfiguration>)getConfiguration __attribute__((swift_name("getConfiguration()")));
- (void)setConfigurationConfiguration:(id<CapturmobileCapturConfiguration> _Nullable)configuration __attribute__((swift_name("setConfiguration(configuration:)")));
@property (readonly) CapturmobileVerifyImageUseCase *verifyImage __attribute__((swift_name("verifyImage")));
@property (readonly) CapturmobileVerifyImageLocallyUseCase *verifyImageLocally __attribute__((swift_name("verifyImageLocally")));
@property (readonly) CapturmobileVerifyImageRemotelyUseCase *verifyImageRemotely __attribute__((swift_name("verifyImageRemotely")));
@property (readonly) CapturmobileVerifyImageViewModel *verifyImageViewModel __attribute__((swift_name("verifyImageViewModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturAnalyticsConfiguration")))
@interface CapturmobileCapturAnalyticsConfiguration : CapturmobileBase
- (instancetype)initWithAnalyticsProviders:(NSArray<id<CapturmobileAnalyticsProvider>> *)analyticsProviders __attribute__((swift_name("init(analyticsProviders:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id<CapturmobileAnalyticsProvider>> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturAnalyticsConfiguration *)doCopyAnalyticsProviders:(NSArray<id<CapturmobileAnalyticsProvider>> *)analyticsProviders __attribute__((swift_name("doCopy(analyticsProviders:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id<CapturmobileAnalyticsProvider>> *analyticsProviders __attribute__((swift_name("analyticsProviders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturApiConfiguration")))
@interface CapturmobileCapturApiConfiguration : CapturmobileBase
- (instancetype)initWithWorkspaceId:(NSString *)workspaceId apiKey:(NSString *)apiKey __attribute__((swift_name("init(workspaceId:apiKey:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturApiConfiguration *)doCopyWorkspaceId:(NSString *)workspaceId apiKey:(NSString *)apiKey __attribute__((swift_name("doCopy(workspaceId:apiKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *workspaceId __attribute__((swift_name("workspaceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturAuxiliaryConfiguration")))
@interface CapturmobileCapturAuxiliaryConfiguration : CapturmobileBase
- (instancetype)initWithIsTelemetryEnabled:(BOOL)isTelemetryEnabled __attribute__((swift_name("init(isTelemetryEnabled:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturAuxiliaryConfiguration *)doCopyIsTelemetryEnabled:(BOOL)isTelemetryEnabled __attribute__((swift_name("doCopy(isTelemetryEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isTelemetryEnabled __attribute__((swift_name("isTelemetryEnabled")));
@end

__attribute__((swift_name("CapturConfiguration")))
@protocol CapturmobileCapturConfiguration
@required
- (CapturmobileCapturAnalyticsConfiguration * _Nullable)analytics __attribute__((swift_name("analytics()")));
- (CapturmobileCapturApiConfiguration *)api __attribute__((swift_name("api()")));
- (CapturmobileCapturAuxiliaryConfiguration *)auxiliary __attribute__((swift_name("auxiliary()")));
- (CapturmobileCapturLoggerConfiguration *)logger __attribute__((swift_name("logger()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturLoggerConfiguration")))
@interface CapturmobileCapturLoggerConfiguration : CapturmobileBase
- (instancetype)initWithLevel:(CapturmobileCapturLoggerLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileCapturLoggerLevel *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturLoggerConfiguration *)doCopyLevel:(CapturmobileCapturLoggerLevel *)level __attribute__((swift_name("doCopy(level:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileCapturLoggerLevel *level __attribute__((swift_name("level")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CapturmobileKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CapturmobileKotlinEnum<E> : CapturmobileBase <CapturmobileKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturLoggerLevel")))
@interface CapturmobileCapturLoggerLevel : CapturmobileKotlinEnum<CapturmobileCapturLoggerLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CapturmobileCapturLoggerLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CapturmobileCapturLoggerLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CapturmobileCapturLoggerLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) CapturmobileCapturLoggerLevel *error __attribute__((swift_name("error")));
+ (CapturmobileKotlinArray<CapturmobileCapturLoggerLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierProxy")))
@interface CapturmobileImageVerifierProxy : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)imageVerifierProxy __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileImageVerifierProxy *shared __attribute__((swift_name("shared")));
- (id<CapturmobileImageVerifier>)getImageVerifier __attribute__((swift_name("getImageVerifier()")));
- (void)setImageVerifierImageVerifier:(id<CapturmobileImageVerifier> _Nullable)imageVerifier __attribute__((swift_name("setImageVerifier(imageVerifier:)")));
@end

__attribute__((swift_name("BaseDataModel")))
@protocol CapturmobileBaseDataModel
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface CapturmobileLocation : CapturmobileBase <CapturmobileBaseDataModel>
- (instancetype)initWithLat:(double)lat lon:(double)lon __attribute__((swift_name("init(lat:lon:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileLocationCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileLocation *)doCopyLat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(lat:lon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface CapturmobileLocationCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompressionResult")))
@interface CapturmobileCompressionResult : CapturmobileBase
- (instancetype)initWithImage:(CapturmobileKotlinByteArray *)image __attribute__((swift_name("init(image:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileKotlinByteArray *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCompressionResult *)doCopyImage:(CapturmobileKotlinByteArray *)image __attribute__((swift_name("doCopy(image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKotlinByteArray *image __attribute__((swift_name("image")));
@end

__attribute__((swift_name("ImageCompressor")))
@protocol CapturmobileImageCompressor
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)compressImage:(CapturmobileKotlinByteArray *)image completionHandler:(void (^)(CapturmobileResponse<CapturmobileCompressionResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("compress(image:completionHandler:)")));
@end

__attribute__((swift_name("ImageVerifier")))
@protocol CapturmobileImageVerifier
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyInput:(id<CapturmobileImageVerifierInput>)input completionHandler:(void (^)(CapturmobileResponse<CapturmobileImageVerifierOutput *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verify(input:completionHandler:)")));
@end

__attribute__((swift_name("ImageVerifierInput")))
@protocol CapturmobileImageVerifierInput
@required
- (CapturmobileImageVerifierInputImage *)getImage __attribute__((swift_name("getImage()")));
@property (readonly) NSString * _Nullable assetType __attribute__((swift_name("assetType")));
@property (readonly) UIImage *image __attribute__((swift_name("image")));
@property (readonly) CapturmobileLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *locationName __attribute__((swift_name("locationName")));
@property (readonly) NSString * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) CapturmobileRecordType *recordType __attribute__((swift_name("recordType")));
@property (readonly) NSString *reference __attribute__((swift_name("reference")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierInputImage")))
@interface CapturmobileImageVerifierInputImage : CapturmobileBase
- (instancetype)initWithImage:(CapturmobileKotlinByteArray *)image type:(CapturmobileImageVerifierInputImageType *)type __attribute__((swift_name("init(image:type:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CapturmobileKotlinByteArray *image __attribute__((swift_name("image")));
@property (readonly) CapturmobileImageVerifierInputImageType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierInputImage.Type_")))
@interface CapturmobileImageVerifierInputImageType : CapturmobileKotlinEnum<CapturmobileImageVerifierInputImageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CapturmobileImageVerifierInputImageType *jpeg __attribute__((swift_name("jpeg")));
+ (CapturmobileKotlinArray<CapturmobileImageVerifierInputImageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierOutput")))
@interface CapturmobileImageVerifierOutput : CapturmobileBase
- (instancetype)initWithClassifications:(NSArray<NSString *> * _Nullable)classifications modelVersion:(NSString * _Nullable)modelVersion __attribute__((swift_name("init(classifications:modelVersion:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileImageVerifierOutput *)doCopyClassifications:(NSArray<NSString *> * _Nullable)classifications modelVersion:(NSString * _Nullable)modelVersion __attribute__((swift_name("doCopy(classifications:modelVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable classifications __attribute__((swift_name("classifications")));
@property (readonly) NSString * _Nullable modelVersion __attribute__((swift_name("modelVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordType")))
@interface CapturmobileRecordType : CapturmobileKotlinEnum<CapturmobileRecordType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CapturmobileRecordType *parkingIssue __attribute__((swift_name("parkingIssue")));
+ (CapturmobileKotlinArray<CapturmobileRecordType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIImageVerifierInput")))
@interface CapturmobileUIImageVerifierInput : CapturmobileBase <CapturmobileImageVerifierInput>
- (instancetype)initWithImage:(UIImage *)image reference:(NSString *)reference recordType:(CapturmobileRecordType *)recordType locationName:(NSString *)locationName location:(CapturmobileLocation * _Nullable)location notes:(NSString * _Nullable)notes assetType:(NSString * _Nullable)assetType metadata:(NSString * _Nullable)metadata __attribute__((swift_name("init(image:reference:recordType:locationName:location:notes:assetType:metadata:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileImageVerifierInputImage *)getImage __attribute__((swift_name("getImage()")));
@property (readonly) NSString * _Nullable assetType __attribute__((swift_name("assetType")));
@property (readonly) UIImage *image __attribute__((swift_name("image")));
@property (readonly) CapturmobileLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *locationName __attribute__((swift_name("locationName")));
@property (readonly) NSString * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) CapturmobileRecordType *recordType __attribute__((swift_name("recordType")));
@property (readonly) NSString *reference __attribute__((swift_name("reference")));
@end

__attribute__((swift_name("UseCase")))
@protocol CapturmobileUseCase
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(id _Nullable)input completionHandler:(void (^)(CapturmobileResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImage")))
@interface CapturmobileVerifyImage : CapturmobileBase
- (instancetype)initWithHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("init(hasPassed:reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileVerifyImage *)doCopyHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(hasPassed:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasPassed __attribute__((swift_name("hasPassed")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageLocally")))
@interface CapturmobileVerifyImageLocally : CapturmobileBase
- (instancetype)initWithHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("init(hasPassed:reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileVerifyImageLocally *)doCopyHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(hasPassed:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasPassed __attribute__((swift_name("hasPassed")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageLocallyUseCase")))
@interface CapturmobileVerifyImageLocallyUseCase : CapturmobileBase <CapturmobileUseCase>
- (instancetype)initWithVerifier:(id<CapturmobileImageVerifier>)verifier __attribute__((swift_name("init(verifier:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(id<CapturmobileImageVerifierInput>)input completionHandler:(void (^)(CapturmobileResponse<CapturmobileVerifyImageLocally *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageRemotely")))
@interface CapturmobileVerifyImageRemotely : CapturmobileBase
- (instancetype)initWithHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("init(hasPassed:reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileVerifyImageRemotely *)doCopyHasPassed:(BOOL)hasPassed reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(hasPassed:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasPassed __attribute__((swift_name("hasPassed")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageRemotelyUseCase")))
@interface CapturmobileVerifyImageRemotelyUseCase : CapturmobileBase <CapturmobileUseCase>
- (instancetype)initWithVerifier:(id<CapturmobileImageVerifier>)verifier __attribute__((swift_name("init(verifier:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(id<CapturmobileImageVerifierInput>)input completionHandler:(void (^)(CapturmobileResponse<CapturmobileVerifyImageRemotely *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyImageUseCase")))
@interface CapturmobileVerifyImageUseCase : CapturmobileBase <CapturmobileUseCase>
- (instancetype)initWithVerifyImageLocally:(id<CapturmobileUseCase>)verifyImageLocally verifyImageRemotely:(id<CapturmobileUseCase>)verifyImageRemotely __attribute__((swift_name("init(verifyImageLocally:verifyImageRemotely:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInput:(id<CapturmobileImageVerifierInput>)input completionHandler:(void (^)(CapturmobileResponse<CapturmobileVerifyImage *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(input:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticalConfig")))
@interface CapturmobileAnalyticalConfig : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analyticalConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileAnalyticalConfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *amplitudeKey __attribute__((swift_name("amplitudeKey")));
@end

__attribute__((swift_name("AnalyticsEvent")))
@protocol CapturmobileAnalyticsEvent
@required
- (NSDictionary<NSString *, id> *)getPayload __attribute__((swift_name("getPayload()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsEventInitialised")))
@interface CapturmobileAnalyticsEventInitialised : CapturmobileBase <CapturmobileAnalyticsEvent>
- (instancetype)initWithVersion:(NSString *)version device:(NSString *)device platform:(NSString *)platform __attribute__((swift_name("init(version:device:platform:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileAnalyticsEventInitialised *)doCopyVersion:(NSString *)version device:(NSString *)device platform:(NSString *)platform __attribute__((swift_name("doCopy(version:device:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSDictionary<NSString *, NSString *> *)getPayload __attribute__((swift_name("getPayload()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *device __attribute__((swift_name("device")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsEventPhotoQualityAnalysed")))
@interface CapturmobileAnalyticsEventPhotoQualityAnalysed : CapturmobileBase <CapturmobileAnalyticsEvent>
- (instancetype)initWithModelFingerprint:(NSString *)modelFingerprint processingTimeMs:(int32_t)processingTimeMs classification:(NSString *)classification __attribute__((swift_name("init(modelFingerprint:processingTimeMs:classification:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileAnalyticsEventPhotoQualityAnalysed *)doCopyModelFingerprint:(NSString *)modelFingerprint processingTimeMs:(int32_t)processingTimeMs classification:(NSString *)classification __attribute__((swift_name("doCopy(modelFingerprint:processingTimeMs:classification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSDictionary<NSString *, id> *)getPayload __attribute__((swift_name("getPayload()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *classification __attribute__((swift_name("classification")));
@property (readonly) NSString *modelFingerprint __attribute__((swift_name("modelFingerprint")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t processingTimeMs __attribute__((swift_name("processingTimeMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsEventPhotoSubmitted")))
@interface CapturmobileAnalyticsEventPhotoSubmitted : CapturmobileBase <CapturmobileAnalyticsEvent>
- (instancetype)initWithPhotoReference:(NSString *)photoReference recordId:(NSString *)recordId decision:(NSString *)decision requestUrl:(NSString *)requestUrl __attribute__((swift_name("init(photoReference:recordId:decision:requestUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileAnalyticsEventPhotoSubmitted *)doCopyPhotoReference:(NSString *)photoReference recordId:(NSString *)recordId decision:(NSString *)decision requestUrl:(NSString *)requestUrl __attribute__((swift_name("doCopy(photoReference:recordId:decision:requestUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSDictionary<NSString *, NSString *> *)getPayload __attribute__((swift_name("getPayload()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *decision __attribute__((swift_name("decision")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *photoReference __attribute__((swift_name("photoReference")));
@property (readonly) NSString *recordId __attribute__((swift_name("recordId")));
@property (readonly) NSString *requestUrl __attribute__((swift_name("requestUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsEventPhotoTaken")))
@interface CapturmobileAnalyticsEventPhotoTaken : CapturmobileBase <CapturmobileAnalyticsEvent>
- (instancetype)initWithPhotoReference:(NSString *)photoReference imageWidth:(int32_t)imageWidth imageHeight:(int32_t)imageHeight __attribute__((swift_name("init(photoReference:imageWidth:imageHeight:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileAnalyticsEventPhotoTaken *)doCopyPhotoReference:(NSString *)photoReference imageWidth:(int32_t)imageWidth imageHeight:(int32_t)imageHeight __attribute__((swift_name("doCopy(photoReference:imageWidth:imageHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSDictionary<NSString *, id> *)getPayload __attribute__((swift_name("getPayload()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t imageHeight __attribute__((swift_name("imageHeight")));
@property (readonly) int32_t imageWidth __attribute__((swift_name("imageWidth")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *photoReference __attribute__((swift_name("photoReference")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsEventPhotoVerificationBypassed")))
@interface CapturmobileAnalyticsEventPhotoVerificationBypassed : CapturmobileBase <CapturmobileAnalyticsEvent>
- (instancetype)initWithPhotoReference:(NSString *)photoReference notes:(NSString * _Nullable)notes __attribute__((swift_name("init(photoReference:notes:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileAnalyticsEventPhotoVerificationBypassed *)doCopyPhotoReference:(NSString *)photoReference notes:(NSString * _Nullable)notes __attribute__((swift_name("doCopy(photoReference:notes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSDictionary<NSString *, NSString *> *)getPayload __attribute__((swift_name("getPayload()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) NSString *photoReference __attribute__((swift_name("photoReference")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsManager")))
@interface CapturmobileAnalyticsManager : CapturmobileBase
- (instancetype)initWithProviders:(NSArray<id<CapturmobileAnalyticsProvider>> *)providers __attribute__((swift_name("init(providers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileAnalyticsManagerCompanion *companion __attribute__((swift_name("companion")));
- (void)fireEventEvent:(id<CapturmobileAnalyticsEvent>)event __attribute__((swift_name("fireEvent(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsManager.Companion")))
@interface CapturmobileAnalyticsManagerCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileAnalyticsManagerCompanion *shared __attribute__((swift_name("shared")));
- (void)fireEventEvent:(id<CapturmobileAnalyticsEvent>)event __attribute__((swift_name("fireEvent(event:)")));
- (void)initialiseProviders:(NSArray<id<CapturmobileAnalyticsProvider>> *)providers __attribute__((swift_name("initialise(providers:)")));
@end

__attribute__((swift_name("AnalyticsProvider")))
@protocol CapturmobileAnalyticsProvider
@required
- (void)trackEventEvent:(id<CapturmobileAnalyticsEvent>)event __attribute__((swift_name("trackEvent(event:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface CapturmobileEvent : CapturmobileKotlinEnum<CapturmobileEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CapturmobileEvent *initialise __attribute__((swift_name("initialise")));
@property (class, readonly) CapturmobileEvent *photoTaken __attribute__((swift_name("photoTaken")));
@property (class, readonly) CapturmobileEvent *imageQualityMlResult __attribute__((swift_name("imageQualityMlResult")));
@property (class, readonly) CapturmobileEvent *imageSubmissionResult __attribute__((swift_name("imageSubmissionResult")));
@property (class, readonly) CapturmobileEvent *imageBypass __attribute__((swift_name("imageBypass")));
+ (CapturmobileKotlinArray<CapturmobileEvent *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payloader")))
@interface CapturmobilePayloader : CapturmobileBase
@property (class, readonly, getter=companion) CapturmobilePayloaderCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) CapturmobileMutableDictionary<NSString *, id> *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payloader.Builder")))
@interface CapturmobilePayloaderBuilder : CapturmobileBase
@property (class, readonly, getter=companion) CapturmobilePayloaderBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobilePayloaderBuilder *)addDeviceInformationPlatform:(NSString *)platform version:(NSString *)version deviceInfo:(NSString *)deviceInfo __attribute__((swift_name("addDeviceInformation(platform:version:deviceInfo:)")));
- (CapturmobilePayloader *)build __attribute__((swift_name("build()")));
- (CapturmobilePayloaderBuilder *)imageBypassReason:(NSString *)reason __attribute__((swift_name("imageBypass(reason:)")));
- (CapturmobilePayloaderBuilder *)imageQualityMLResultModelFingerprint:(NSString *)modelFingerprint processingTime:(NSString *)processingTime imageResult:(NSString *)imageResult __attribute__((swift_name("imageQualityMLResult(modelFingerprint:processingTime:imageResult:)")));
- (CapturmobilePayloaderBuilder *)imageSubmissionResultPhotoReference:(NSString *)photoReference recordId:(NSString *)recordId submissionTimeIncludingResult:(NSString *)submissionTimeIncludingResult decision:(NSString *)decision restURL:(NSString *)restURL __attribute__((swift_name("imageSubmissionResult(photoReference:recordId:submissionTimeIncludingResult:decision:restURL:)")));
- (CapturmobilePayloaderBuilder *)photoTakenPhotoReference:(NSString *)photoReference imageWidth:(int32_t)imageWidth imageHeight:(int32_t)imageHeight __attribute__((swift_name("photoTaken(photoReference:imageWidth:imageHeight:)")));
@property (readonly) CapturmobileMutableDictionary<NSString *, id> *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payloader.BuilderCompanion")))
@interface CapturmobilePayloaderBuilderCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobilePayloaderBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobilePayloaderBuilder *builder __attribute__((swift_name("builder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payloader.Companion")))
@interface CapturmobilePayloaderCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobilePayloaderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CapturError")))
@interface CapturmobileCapturError : CapturmobileBase
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.FailedToCompressImage")))
@interface CapturmobileCapturErrorFailedToCompressImage : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorFailedToCompressImage *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.GeneralError")))
@interface CapturmobileCapturErrorGeneralError : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorGeneralError *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.ImageValidationFailed")))
@interface CapturmobileCapturErrorImageValidationFailed : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorImageValidationFailed *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.ImageValidationFailedLocally")))
@interface CapturmobileCapturErrorImageValidationFailedLocally : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorImageValidationFailedLocally *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.ImageValidationFailedRemotely")))
@interface CapturmobileCapturErrorImageValidationFailedRemotely : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorImageValidationFailedRemotely *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturError.NetworkingIssue")))
@interface CapturmobileCapturErrorNetworkingIssue : CapturmobileCapturError
- (instancetype)initWithErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("init(errorCode:internalMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileCapturErrorNetworkingIssue *)doCopyErrorCode:(NSString *)errorCode internalMessage:(NSString *)internalMessage __attribute__((swift_name("doCopy(errorCode:internalMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *internalMessage __attribute__((swift_name("internalMessage")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CapturmobileKotlinThrowable : CapturmobileBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CapturmobileKotlinException : CapturmobileKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationNotSetException")))
@interface CapturmobileConfigurationNotSetException : CapturmobileKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierNotSetException")))
@interface CapturmobileImageVerifierNotSetException : CapturmobileKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantDecisionImageVerifier")))
@interface CapturmobileInstantDecisionImageVerifier : CapturmobileBase <CapturmobileImageVerifier>
- (instancetype)initWithClient:(CapturmobileKtor_client_coreHttpClient *)client configuration:(CapturmobileCapturApiConfiguration *)configuration jsonParser:(CapturmobileKotlinx_serialization_jsonJson *)jsonParser __attribute__((swift_name("init(client:configuration:jsonParser:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyInput:(id<CapturmobileImageVerifierInput>)input completionHandler:(void (^)(CapturmobileResponse<CapturmobileImageVerifierOutput *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verify(input:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantDecisionResponse")))
@interface CapturmobileInstantDecisionResponse : CapturmobileBase
- (instancetype)initWithData:(CapturmobileInstantDecisionResponseData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileInstantDecisionResponseCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobileInstantDecisionResponseData *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileInstantDecisionResponse *)doCopyData:(CapturmobileInstantDecisionResponseData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileInstantDecisionResponseData *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantDecisionResponse.Companion")))
@interface CapturmobileInstantDecisionResponseCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileInstantDecisionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantDecisionResponse.Data")))
@interface CapturmobileInstantDecisionResponseData : CapturmobileBase
- (instancetype)initWithRecordId:(NSString *)recordId reference:(NSString *)reference decision:(NSString *)decision timestamp:(NSString *)timestamp __attribute__((swift_name("init(recordId:reference:decision:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileInstantDecisionResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileInstantDecisionResponseData *)doCopyRecordId:(NSString *)recordId reference:(NSString *)reference decision:(NSString *)decision timestamp:(NSString *)timestamp __attribute__((swift_name("doCopy(recordId:reference:decision:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *decision __attribute__((swift_name("decision")));
@property (readonly) NSString *recordId __attribute__((swift_name("recordId")));
@property (readonly) NSString *reference __attribute__((swift_name("reference")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantDecisionResponse.DataCompanion")))
@interface CapturmobileInstantDecisionResponseDataCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileInstantDecisionResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response")))
@interface CapturmobileResponse<T> : CapturmobileBase
- (instancetype)initWithValue:(T _Nullable)value error:(CapturmobileCapturError * _Nullable)error __attribute__((swift_name("init(value:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileResponseCompanion *companion __attribute__((swift_name("companion")));
- (void)callCallback:(void (^)(CapturmobileResponse<T> *))callback __attribute__((swift_name("call(callback:)")));
- (CapturmobileResponse<id> *)flatMapSupplier:(CapturmobileResponse<id> *(^)(T _Nullable))supplier __attribute__((swift_name("flatMap(supplier:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flatMapAsyncSupplier:(id<CapturmobileKotlinSuspendFunction1>)supplier completionHandler:(void (^)(CapturmobileResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("flatMapAsync(supplier:completionHandler:)")));
- (CapturmobileResponse<T> *)isErrorBlock:(void (^)(CapturmobileCapturError *))block __attribute__((swift_name("isError(block:)")));
- (CapturmobileResponse<T> *)isSuccessBlock:(void (^)(T _Nullable))block __attribute__((swift_name("isSuccess(block:)")));
- (CapturmobileResponse<id> *)mapSupplier:(id _Nullable (^)(T _Nullable))supplier __attribute__((swift_name("map(supplier:)")));
@property (readonly) CapturmobileCapturError * _Nullable error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseCompanion")))
@interface CapturmobileResponseCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileResponseCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileResponse<id> *)errorError:(CapturmobileCapturError *)error __attribute__((swift_name("error(error:)")));
- (CapturmobileResponse<id> *)successValue:(id _Nullable)value __attribute__((swift_name("success(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CapturmobileKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CapturmobileKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainCoroutineScope")))
@interface CapturmobileMainCoroutineScope : CapturmobileBase <CapturmobileKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<CapturmobileKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkEnvironmentFactory")))
@interface CapturmobileNetworkEnvironmentFactory : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkEnvironmentFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileNetworkEnvironmentFactory *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_client_coreHttpClient *)getHttpClient __attribute__((swift_name("getHttpClient()")));
- (void)setHttpClientHttpClient:(CapturmobileKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("setHttpClient(httpClient:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkingErrorInternal")))
@interface CapturmobileNetworkingErrorInternal : CapturmobileBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileNetworkingErrorInternalCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileNetworkingErrorInternal *)doCopyCode:(NSString *)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkingErrorInternal.Companion")))
@interface CapturmobileNetworkingErrorInternalCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileNetworkingErrorInternalCompanion *shared __attribute__((swift_name("shared")));
- (id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkingErrorThrowable")))
@interface CapturmobileNetworkingErrorThrowable : CapturmobileKotlinException
- (instancetype)initWithNetworkingInternalError:(CapturmobileNetworkingErrorInternal *)networkingInternalError __attribute__((swift_name("init(networkingInternalError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) CapturmobileNetworkingErrorInternal *networkingInternalError __attribute__((swift_name("networkingInternalError")));
@end

@interface CapturmobileImageVerifierInputImage (Extensions)
- (NSString *)getContentType __attribute__((swift_name("getContentType()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface CapturmobilePlatformKt : CapturmobileBase
+ (id<CapturmobilePlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageVerifierInputKt")))
@interface CapturmobileImageVerifierInputKt : CapturmobileBase
+ (CapturmobileKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
+ (CapturmobileKotlinByteArray *)toByteArray_:(UIImage *)receiver __attribute__((swift_name("toByteArray(__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionHandlerKt")))
@interface CapturmobileExceptionHandlerKt : CapturmobileBase
+ (id<CapturmobileKotlinx_coroutines_coreCoroutineExceptionHandler>)exceptionHandlerResponse:(void (^ _Nullable)(CapturmobileResponse<id> *))response __attribute__((swift_name("exceptionHandler(response:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CapturmobileKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CapturmobileKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CapturmobileKotlinx_coroutines_coreSharedFlow <CapturmobileKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CapturmobileKotlinx_coroutines_coreStateFlow <CapturmobileKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CapturmobileKotlinEnumCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CapturmobileKotlinArray<T> : CapturmobileBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CapturmobileInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CapturmobileKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CapturmobileKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CapturmobileKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CapturmobileKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CapturmobileKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CapturmobileKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CapturmobileKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CapturmobileKotlinx_serialization_coreKSerializer <CapturmobileKotlinx_serialization_coreSerializationStrategy, CapturmobileKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CapturmobileKotlinByteArray : CapturmobileBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CapturmobileByte *(^)(CapturmobileInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CapturmobileKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CapturmobileKotlinRuntimeException : CapturmobileKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CapturmobileKotlinIllegalStateException : CapturmobileKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CapturmobileKotlinCancellationException : CapturmobileKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol CapturmobileKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CapturmobileKtor_client_coreHttpClient : CapturmobileBase <CapturmobileKotlinx_coroutines_coreCoroutineScope, CapturmobileKtor_ioCloseable>
- (instancetype)initWithEngine:(id<CapturmobileKtor_client_coreHttpClientEngine>)engine userConfig:(CapturmobileKtor_client_coreHttpClientConfig<CapturmobileKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (CapturmobileKtor_client_coreHttpClient *)configBlock:(void (^)(CapturmobileKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<CapturmobileKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<CapturmobileKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<CapturmobileKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) CapturmobileKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) CapturmobileKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) CapturmobileKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) CapturmobileKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) CapturmobileKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) CapturmobileKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol CapturmobileKotlinx_serialization_coreSerialFormat
@required
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol CapturmobileKotlinx_serialization_coreStringFormat <CapturmobileKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface CapturmobileKotlinx_serialization_jsonJson : CapturmobileBase <CapturmobileKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) CapturmobileKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(CapturmobileKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (CapturmobileKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (CapturmobileKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) CapturmobileKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol CapturmobileKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CapturmobileKotlinSuspendFunction1 <CapturmobileKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CapturmobileKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CapturmobileKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CapturmobileKotlinCoroutineContextElement> _Nullable)getKey:(id<CapturmobileKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CapturmobileKotlinCoroutineContext>)minusKeyKey:(id<CapturmobileKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CapturmobileKotlinCoroutineContext>)plusContext:(id<CapturmobileKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CapturmobileKotlinCoroutineContextElement <CapturmobileKotlinCoroutineContext>
@required
@property (readonly) id<CapturmobileKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineExceptionHandler")))
@protocol CapturmobileKotlinx_coroutines_coreCoroutineExceptionHandler <CapturmobileKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<CapturmobileKotlinCoroutineContext>)context exception:(CapturmobileKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CapturmobileKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CapturmobileKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CapturmobileKotlinx_serialization_coreEncoder
@required
- (id<CapturmobileKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CapturmobileKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CapturmobileKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CapturmobileKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<CapturmobileKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<CapturmobileKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) CapturmobileKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CapturmobileKotlinx_serialization_coreDecoder
@required
- (id<CapturmobileKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CapturmobileKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (CapturmobileKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface CapturmobileKotlinByteIterator : CapturmobileBase <CapturmobileKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CapturmobileByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CapturmobileKtor_client_coreHttpClientEngine <CapturmobileKotlinx_coroutines_coreCoroutineScope, CapturmobileKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(CapturmobileKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(CapturmobileKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(CapturmobileKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) CapturmobileKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) CapturmobileKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<CapturmobileKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CapturmobileKtor_client_coreHttpClientEngineConfig : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property CapturmobileKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CapturmobileKtor_client_coreHttpClientConfig<T> : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CapturmobileKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CapturmobileKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<CapturmobileKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(CapturmobileKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CapturmobileKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol CapturmobileKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CapturmobileKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CapturmobileKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CapturmobileKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CapturmobileKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface CapturmobileKtor_eventsEvents : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(CapturmobileKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<CapturmobileKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(CapturmobileKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(CapturmobileKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CapturmobileKtor_utilsPipeline<TSubject, TContext> : CapturmobileBase
- (instancetype)initWithPhase:(CapturmobileKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CapturmobileKotlinArray<CapturmobileKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CapturmobileKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(CapturmobileKtor_utilsPipelinePhase *)reference phase:(CapturmobileKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CapturmobileKtor_utilsPipelinePhase *)reference phase:(CapturmobileKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CapturmobileKtor_utilsPipelinePhase *)phase block:(id<CapturmobileKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(CapturmobileKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(CapturmobileKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(CapturmobileKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(CapturmobileKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<CapturmobileKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CapturmobileKtor_client_coreHttpReceivePipeline : CapturmobileKtor_utilsPipeline<CapturmobileKtor_client_coreHttpResponse *, CapturmobileKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CapturmobileKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CapturmobileKotlinArray<CapturmobileKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CapturmobileKtor_client_coreHttpRequestPipeline : CapturmobileKtor_utilsPipeline<id, CapturmobileKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CapturmobileKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CapturmobileKotlinArray<CapturmobileKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CapturmobileKtor_client_coreHttpResponsePipeline : CapturmobileKtor_utilsPipeline<CapturmobileKtor_client_coreHttpResponseContainer *, CapturmobileKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CapturmobileKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CapturmobileKotlinArray<CapturmobileKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CapturmobileKtor_client_coreHttpSendPipeline : CapturmobileKtor_utilsPipeline<id, CapturmobileKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CapturmobileKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CapturmobileKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CapturmobileKotlinArray<CapturmobileKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CapturmobileKotlinx_serialization_coreSerializersModule : CapturmobileBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CapturmobileKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CapturmobileKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CapturmobileKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CapturmobileKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CapturmobileKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CapturmobileKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CapturmobileKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CapturmobileKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface CapturmobileKotlinx_serialization_jsonJsonDefault : CapturmobileKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CapturmobileKotlinx_serialization_jsonJsonElement : CapturmobileBase
@property (class, readonly, getter=companion) CapturmobileKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface CapturmobileKotlinx_serialization_jsonJsonConfiguration : CapturmobileBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CapturmobileKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CapturmobileKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CapturmobileKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CapturmobileKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CapturmobileKotlinx_serialization_coreSerialKind : CapturmobileBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CapturmobileKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CapturmobileKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CapturmobileKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CapturmobileKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CapturmobileKotlinNothing : CapturmobileBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface CapturmobileKtor_client_coreHttpRequestData : CapturmobileBase
- (instancetype)initWithUrl:(CapturmobileKtor_httpUrl *)url method:(CapturmobileKtor_httpHttpMethod *)method headers:(id<CapturmobileKtor_httpHeaders>)headers body:(CapturmobileKtor_httpOutgoingContent *)body executionContext:(id<CapturmobileKotlinx_coroutines_coreJob>)executionContext attributes:(id<CapturmobileKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<CapturmobileKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CapturmobileKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<CapturmobileKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<CapturmobileKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CapturmobileKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CapturmobileKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface CapturmobileKtor_client_coreHttpResponseData : CapturmobileBase
- (instancetype)initWithStatusCode:(CapturmobileKtor_httpHttpStatusCode *)statusCode requestTime:(CapturmobileKtor_utilsGMTDate *)requestTime headers:(id<CapturmobileKtor_httpHeaders>)headers version:(CapturmobileKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<CapturmobileKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<CapturmobileKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<CapturmobileKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CapturmobileKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CapturmobileKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CapturmobileKotlinAbstractCoroutineContextElement : CapturmobileBase <CapturmobileKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CapturmobileKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CapturmobileKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CapturmobileKotlinContinuationInterceptor <CapturmobileKotlinCoroutineContextElement>
@required
- (id<CapturmobileKotlinContinuation>)interceptContinuationContinuation:(id<CapturmobileKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CapturmobileKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CapturmobileKotlinx_coroutines_coreCoroutineDispatcher : CapturmobileKotlinAbstractCoroutineContextElement <CapturmobileKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CapturmobileKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<CapturmobileKotlinCoroutineContext>)context block:(id<CapturmobileKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CapturmobileKotlinCoroutineContext>)context block:(id<CapturmobileKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CapturmobileKotlinContinuation>)interceptContinuationContinuation:(id<CapturmobileKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CapturmobileKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (CapturmobileKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (CapturmobileKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CapturmobileKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CapturmobileKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface CapturmobileKtor_client_coreProxyConfig : CapturmobileBase
- (instancetype)initWithUrl:(CapturmobileKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol CapturmobileKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(CapturmobileKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CapturmobileKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CapturmobileKtor_utilsAttributeKey<T> : CapturmobileBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface CapturmobileKtor_eventsEventDefinition<T> : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CapturmobileKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CapturmobileKtor_utilsPipelinePhase : CapturmobileBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CapturmobileKotlinSuspendFunction2 <CapturmobileKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface CapturmobileKtor_client_coreHttpReceivePipelinePhases : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CapturmobileKtor_httpHttpMessage
@required
@property (readonly) id<CapturmobileKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface CapturmobileKtor_client_coreHttpResponse : CapturmobileBase <CapturmobileKtor_httpHttpMessage, CapturmobileKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<CapturmobileKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) CapturmobileKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CapturmobileKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CapturmobileKotlinUnit : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface CapturmobileKtor_client_coreHttpRequestPipelinePhases : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol CapturmobileKtor_httpHttpMessageBuilder
@required
@property (readonly) CapturmobileKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface CapturmobileKtor_client_coreHttpRequestBuilder : CapturmobileBase <CapturmobileKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobileKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<CapturmobileKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<CapturmobileKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<CapturmobileKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (CapturmobileKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(CapturmobileKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (CapturmobileKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(CapturmobileKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(CapturmobileKtor_httpURLBuilder *, CapturmobileKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property CapturmobileKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<CapturmobileKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) CapturmobileKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property CapturmobileKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CapturmobileKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface CapturmobileKtor_client_coreHttpResponsePipelinePhases : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface CapturmobileKtor_client_coreHttpResponseContainer : CapturmobileBase
- (instancetype)initWithExpectedType:(CapturmobileKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (CapturmobileKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(CapturmobileKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CapturmobileKtor_client_coreHttpClientCall : CapturmobileBase <CapturmobileKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(CapturmobileKtor_client_coreHttpClient *)client requestData:(CapturmobileKtor_client_coreHttpRequestData *)requestData responseData:(CapturmobileKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(CapturmobileKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(CapturmobileKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(CapturmobileKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<CapturmobileKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CapturmobileKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<CapturmobileKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<CapturmobileKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property CapturmobileKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface CapturmobileKtor_client_coreHttpSendPipelinePhases : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CapturmobileKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CapturmobileKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CapturmobileKotlinKClass>)kClass provider:(id<CapturmobileKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CapturmobileKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CapturmobileKotlinKClass>)kClass serializer:(id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CapturmobileKotlinKClass>)baseClass actualClass:(id<CapturmobileKotlinKClass>)actualClass actualSerializer:(id<CapturmobileKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CapturmobileKotlinKClass>)baseClass defaultDeserializerProvider:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<CapturmobileKotlinKClass>)baseClass defaultDeserializerProvider:(id<CapturmobileKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<CapturmobileKotlinKClass>)baseClass defaultSerializerProvider:(id<CapturmobileKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CapturmobileKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CapturmobileKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CapturmobileKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CapturmobileKotlinKClass <CapturmobileKotlinKDeclarationContainer, CapturmobileKotlinKAnnotatedElement, CapturmobileKotlinKClassifier>
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
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CapturmobileKotlinx_serialization_jsonJsonElementCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CapturmobileKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CapturmobileKtor_httpUrl : CapturmobileBase
@property (class, readonly, getter=companion) CapturmobileKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) id<CapturmobileKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) CapturmobileKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CapturmobileKtor_httpHttpMethod : CapturmobileBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CapturmobileKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CapturmobileKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CapturmobileKtor_httpHeaders <CapturmobileKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CapturmobileKtor_httpOutgoingContent : CapturmobileBase
- (id _Nullable)getPropertyKey:(CapturmobileKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CapturmobileKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<CapturmobileKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) CapturmobileLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) CapturmobileKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<CapturmobileKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CapturmobileKotlinx_coroutines_coreJob <CapturmobileKotlinCoroutineContextElement>
@required
- (id<CapturmobileKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CapturmobileKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CapturmobileKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (CapturmobileKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CapturmobileKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CapturmobileKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CapturmobileKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CapturmobileKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CapturmobileKotlinx_coroutines_coreJob>)plusOther_:(id<CapturmobileKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CapturmobileKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CapturmobileKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CapturmobileKtor_httpHttpStatusCode : CapturmobileBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CapturmobileKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CapturmobileKtor_utilsGMTDate : CapturmobileBase <CapturmobileKotlinComparable>
@property (class, readonly, getter=companion) CapturmobileKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CapturmobileKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CapturmobileKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CapturmobileKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CapturmobileKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) CapturmobileKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CapturmobileKtor_httpHttpProtocolVersion : CapturmobileBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
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
@protocol CapturmobileKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CapturmobileKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface CapturmobileKotlinAbstractCoroutineContextKey<B, E> : CapturmobileBase <CapturmobileKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<CapturmobileKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<CapturmobileKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface CapturmobileKotlinx_coroutines_coreCoroutineDispatcherKey : CapturmobileKotlinAbstractCoroutineContextKey<id<CapturmobileKotlinContinuationInterceptor>, CapturmobileKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<CapturmobileKotlinCoroutineContextKey>)baseKey safeCast:(id<CapturmobileKotlinCoroutineContextElement> _Nullable (^)(id<CapturmobileKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CapturmobileKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol CapturmobileKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(CapturmobileKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(CapturmobileLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(CapturmobileKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(CapturmobileLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CapturmobileKtor_ioChunkBuffer *)dst completionHandler:(void (^)(CapturmobileInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CapturmobileKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CapturmobileInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(CapturmobileKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CapturmobileInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CapturmobileInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(CapturmobileBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(CapturmobileByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(CapturmobileDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(CapturmobileFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CapturmobileKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CapturmobileKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

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
- (void)readIntWithCompletionHandler:(void (^)(CapturmobileInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(CapturmobileLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(CapturmobileKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(CapturmobileKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<CapturmobileKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(CapturmobileShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<CapturmobileKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<CapturmobileKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(CapturmobileBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) CapturmobileKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol CapturmobileKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CapturmobileKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CapturmobileKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CapturmobileKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CapturmobileKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
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
@interface CapturmobileKtor_utilsStringValuesBuilderImpl : CapturmobileBase <CapturmobileKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CapturmobileKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CapturmobileKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CapturmobileKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CapturmobileKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
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
@property (readonly) CapturmobileMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface CapturmobileKtor_httpHeadersBuilder : CapturmobileKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CapturmobileKtor_httpHeaders>)build __attribute__((swift_name("build()")));

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
@interface CapturmobileKtor_client_coreHttpRequestBuilderCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface CapturmobileKtor_httpURLBuilder : CapturmobileBase
- (instancetype)initWithProtocol:(CapturmobileKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<CapturmobileKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobileKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<CapturmobileKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CapturmobileKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property CapturmobileKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface CapturmobileKtor_utilsTypeInfo : CapturmobileBase
- (instancetype)initWithType:(id<CapturmobileKotlinKClass>)type reifiedType:(id<CapturmobileKotlinKType>)reifiedType kotlinType:(id<CapturmobileKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<CapturmobileKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<CapturmobileKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<CapturmobileKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_utilsTypeInfo *)doCopyType:(id<CapturmobileKotlinKClass>)type reifiedType:(id<CapturmobileKotlinKType>)reifiedType kotlinType:(id<CapturmobileKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CapturmobileKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CapturmobileKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<CapturmobileKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface CapturmobileKtor_client_coreHttpClientCallCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CapturmobileKtor_client_coreHttpRequest <CapturmobileKtor_httpHttpMessage, CapturmobileKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<CapturmobileKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CapturmobileKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) CapturmobileKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) CapturmobileKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CapturmobileKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface CapturmobileKtor_httpUrlCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CapturmobileKtor_httpParameters <CapturmobileKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CapturmobileKtor_httpURLProtocol : CapturmobileBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface CapturmobileKtor_httpHttpMethodCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<CapturmobileKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) CapturmobileKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol CapturmobileKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CapturmobileKtor_httpHeaderValueWithParameters : CapturmobileBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CapturmobileKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CapturmobileKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CapturmobileKtor_httpContentType : CapturmobileKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CapturmobileKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CapturmobileKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CapturmobileKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CapturmobileKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CapturmobileKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CapturmobileKotlinx_coroutines_coreChildHandle <CapturmobileKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(CapturmobileKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<CapturmobileKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CapturmobileKotlinx_coroutines_coreChildJob <CapturmobileKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<CapturmobileKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol CapturmobileKotlinSequence
@required
- (id<CapturmobileKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CapturmobileKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<CapturmobileKotlinx_coroutines_coreSelectInstance>)select block:(id<CapturmobileKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface CapturmobileKtor_httpHttpStatusCodeCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) CapturmobileKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<CapturmobileKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface CapturmobileKtor_utilsGMTDateCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CapturmobileKtor_utilsWeekDay : CapturmobileKotlinEnum<CapturmobileKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CapturmobileKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (CapturmobileKotlinArray<CapturmobileKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CapturmobileKtor_utilsMonth : CapturmobileKotlinEnum<CapturmobileKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CapturmobileKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CapturmobileKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CapturmobileKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CapturmobileKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CapturmobileKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CapturmobileKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CapturmobileKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CapturmobileKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CapturmobileKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CapturmobileKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CapturmobileKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CapturmobileKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (CapturmobileKotlinArray<CapturmobileKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface CapturmobileKtor_httpHttpProtocolVersionCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (CapturmobileKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) CapturmobileKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface CapturmobileKtor_ioMemory : CapturmobileBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(CapturmobileKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(CapturmobileKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (CapturmobileKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (CapturmobileKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface CapturmobileKtor_ioBuffer : CapturmobileBase
- (instancetype)initWithMemory:(CapturmobileKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (CapturmobileKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(CapturmobileKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) CapturmobileKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface CapturmobileKtor_ioChunkBuffer : CapturmobileKtor_ioBuffer
- (instancetype)initWithMemory:(CapturmobileKtor_ioMemory *)memory origin:(CapturmobileKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<CapturmobileKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(CapturmobileKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobileKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (CapturmobileKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<CapturmobileKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) CapturmobileKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) CapturmobileKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface CapturmobileKtor_ioInput : CapturmobileBase <CapturmobileKtor_ioCloseable>
- (instancetype)initWithHead:(CapturmobileKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CapturmobileKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
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
- (CapturmobileKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(CapturmobileKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(CapturmobileKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(CapturmobileKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<CapturmobileKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<CapturmobileKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<CapturmobileKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface CapturmobileKtor_ioByteReadPacket : CapturmobileKtor_ioInput
- (instancetype)initWithHead:(CapturmobileKtor_ioChunkBuffer *)head pool:(id<CapturmobileKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(CapturmobileKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CapturmobileKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CapturmobileKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (CapturmobileKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CapturmobileKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(CapturmobileKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol CapturmobileKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (CapturmobileKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol CapturmobileKotlinAppendable
@required
- (id<CapturmobileKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<CapturmobileKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<CapturmobileKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface CapturmobileKtor_httpURLBuilderCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol CapturmobileKtor_httpParametersBuilder <CapturmobileKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol CapturmobileKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<CapturmobileKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<CapturmobileKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface CapturmobileKtor_httpURLProtocolCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) CapturmobileKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) CapturmobileKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) CapturmobileKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) CapturmobileKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) CapturmobileKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, CapturmobileKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CapturmobileKtor_httpHeaderValueParam : CapturmobileBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface CapturmobileKtor_httpHeaderValueWithParametersCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<CapturmobileKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface CapturmobileKtor_httpContentTypeCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CapturmobileKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CapturmobileKotlinx_coroutines_coreParentJob <CapturmobileKotlinx_coroutines_coreJob>
@required
- (CapturmobileKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CapturmobileKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CapturmobileKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CapturmobileKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(CapturmobileKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<CapturmobileKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CapturmobileKotlinSuspendFunction0 <CapturmobileKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface CapturmobileKtor_utilsWeekDayCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CapturmobileKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface CapturmobileKtor_utilsMonthCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (CapturmobileKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CapturmobileKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface CapturmobileKtor_ioMemoryCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface CapturmobileKtor_ioBufferCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol CapturmobileKtor_ioObjectPool <CapturmobileKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface CapturmobileKtor_ioChunkBufferCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<CapturmobileKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<CapturmobileKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface CapturmobileKtor_ioInputCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface CapturmobileKtor_ioByteReadPacketCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CapturmobileKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface CapturmobileKotlinKTypeProjection : CapturmobileBase
- (instancetype)initWithVariance:(CapturmobileKotlinKVariance * _Nullable)variance type:(id<CapturmobileKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CapturmobileKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (CapturmobileKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<CapturmobileKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (CapturmobileKotlinKTypeProjection *)doCopyVariance:(CapturmobileKotlinKVariance * _Nullable)variance type:(id<CapturmobileKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CapturmobileKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) CapturmobileKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface CapturmobileKotlinx_coroutines_coreAtomicDesc : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CapturmobileKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CapturmobileKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property CapturmobileKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface CapturmobileKotlinx_coroutines_coreOpDescriptor : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(CapturmobileKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : CapturmobileKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) CapturmobileKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface CapturmobileKotlinKVariance : CapturmobileKotlinEnum<CapturmobileKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CapturmobileKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) CapturmobileKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) CapturmobileKotlinKVariance *out __attribute__((swift_name("out")));
+ (CapturmobileKotlinArray<CapturmobileKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface CapturmobileKotlinKTypeProjectionCompanion : CapturmobileBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CapturmobileKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CapturmobileKotlinKTypeProjection *)contravariantType:(id<CapturmobileKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CapturmobileKotlinKTypeProjection *)covariantType:(id<CapturmobileKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CapturmobileKotlinKTypeProjection *)invariantType:(id<CapturmobileKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) CapturmobileKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface CapturmobileKotlinx_coroutines_coreAtomicOp<__contravariant T> : CapturmobileKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) CapturmobileKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode : CapturmobileBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(CapturmobileBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CapturmobileBoolean *(^)(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CapturmobileBoolean *(^)(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(CapturmobileBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(CapturmobileBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : CapturmobileKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CapturmobileKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(CapturmobileKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CapturmobileKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CapturmobileKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CapturmobileKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CapturmobileKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
