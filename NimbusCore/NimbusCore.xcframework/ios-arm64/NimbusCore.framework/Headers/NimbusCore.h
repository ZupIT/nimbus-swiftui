#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NimbusCoreCommonDependency, NimbusCoreServerDrivenState, NimbusCoreCommonScope, NimbusCoreServerDrivenConfig, NimbusCoreEventBuilder, NimbusCoreExpressionParser, NimbusCoreNodeBuilder, NimbusCoreUILibraryManager, NimbusCoreUILibrary, NimbusCoreNimbus, NimbusCoreViewRequest, NimbusCoreDependencyUpdateManager, NimbusCoreKotlinThrowable, NimbusCoreKotlinArray<T>, NimbusCoreKotlinError, NimbusCoreOperation, NimbusCoreStateReference, NimbusCoreStringTemplate, NimbusCoreTransition, NimbusCoreDPASymbols, NimbusCoreLiteralParser, NimbusCoreLiteral, NimbusCoreFastRegex, NimbusCoreLogLevel, NimbusCoreKotlinEnumCompanion, NimbusCoreKotlinEnum<E>, NimbusCoreAnyServerDrivenDataCompanion, NimbusCoreAnyServerDrivenData, NimbusCoreDynamicEvent, NimbusCoreActionTriggeredEvent, NimbusCoreActionInitializedEvent, NimbusCoreKotlinUnit, NimbusCoreUILibraryManagerCompanion, NimbusCoreNamespaceName, NimbusCoreKotlinException, NimbusCoreKotlinRuntimeException, NimbusCoreKotlinIllegalArgumentException, NimbusCoreKotlinIllegalStateException, NimbusCoreServerDrivenRequest, NimbusCoreServerDrivenResponse, NimbusCoreRootNode, NimbusCoreNetworkError, NimbusCoreServerDrivenHttpMethod, NimbusCoreKotlinByteArray, NimbusCoreServerDrivenView, NimbusCoreDynamicAction, NimbusCoreMalformedJsonError, NimbusCoreDynamicNode, NimbusCoreNodeContainer, NimbusCorePropertyContainer, NimbusCoreNull, NimbusCoreMatchGroups, NimbusCoreMatchGroupsDestructured, NimbusCoreKotlinNumber, NimbusCoreKotlinx_serialization_jsonJsonElement, NimbusCoreKotlinx_serialization_jsonJsonPrimitive, NimbusCoreKtor_client_coreHttpRequestData, NimbusCoreKtor_client_coreHttpResponseData, NimbusCoreKtor_client_coreHttpClient, NimbusCoreKtor_client_coreHttpClientEngineConfig, NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher, NimbusCoreKotlinByteIterator, NimbusCoreKotlinx_serialization_jsonJsonElementCompanion, NimbusCoreKotlinx_serialization_jsonJsonPrimitiveCompanion, NimbusCoreKtor_httpUrl, NimbusCoreKtor_httpHttpMethod, NimbusCoreKtor_httpOutgoingContent, NimbusCoreKtor_httpHttpStatusCode, NimbusCoreKtor_utilsGMTDate, NimbusCoreKtor_httpHttpProtocolVersion, NimbusCoreKtor_client_coreHttpClientConfig<T>, NimbusCoreKtor_eventsEvents, NimbusCoreKtor_client_coreHttpReceivePipeline, NimbusCoreKtor_client_coreHttpRequestPipeline, NimbusCoreKtor_client_coreHttpResponsePipeline, NimbusCoreKtor_client_coreHttpSendPipeline, NimbusCoreKtor_client_coreProxyConfig, NimbusCoreKotlinAbstractCoroutineContextElement, NimbusCoreKotlinx_coroutines_coreCoroutineDispatcherKey, NimbusCoreKtor_httpUrlCompanion, NimbusCoreKtor_httpURLProtocol, NimbusCoreKtor_httpHttpMethodCompanion, NimbusCoreKtor_utilsAttributeKey<T>, NimbusCoreKtor_httpContentType, NimbusCoreKotlinCancellationException, NimbusCoreKtor_httpHttpStatusCodeCompanion, NimbusCoreKtor_utilsGMTDateCompanion, NimbusCoreKtor_utilsWeekDay, NimbusCoreKtor_utilsMonth, NimbusCoreKtor_httpHttpProtocolVersionCompanion, NimbusCoreKtor_eventsEventDefinition<T>, NimbusCoreKtor_utilsPipelinePhase, NimbusCoreKtor_utilsPipeline<TSubject, TContext>, NimbusCoreKtor_client_coreHttpReceivePipelinePhases, NimbusCoreKtor_client_coreHttpResponse, NimbusCoreKtor_client_coreHttpRequestPipelinePhases, NimbusCoreKtor_client_coreHttpRequestBuilder, NimbusCoreKtor_client_coreHttpResponsePipelinePhases, NimbusCoreKtor_client_coreHttpResponseContainer, NimbusCoreKtor_client_coreHttpClientCall, NimbusCoreKtor_client_coreHttpSendPipelinePhases, NimbusCoreKotlinAbstractCoroutineContextKey<B, E>, NimbusCoreKtor_httpURLProtocolCompanion, NimbusCoreKtor_httpHeaderValueParam, NimbusCoreKtor_httpHeaderValueWithParametersCompanion, NimbusCoreKtor_httpHeaderValueWithParameters, NimbusCoreKtor_httpContentTypeCompanion, NimbusCoreKtor_utilsWeekDayCompanion, NimbusCoreKtor_utilsMonthCompanion, NimbusCoreKtor_httpHeadersBuilder, NimbusCoreKtor_client_coreHttpRequestBuilderCompanion, NimbusCoreKtor_httpURLBuilder, NimbusCoreKtor_utilsTypeInfo, NimbusCoreKtor_client_coreHttpClientCallCompanion, NimbusCoreKotlinx_serialization_coreSerializersModule, NimbusCoreKotlinx_serialization_coreSerialKind, NimbusCoreKotlinNothing, NimbusCoreKotlinx_coroutines_coreAtomicDesc, NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, NimbusCoreKtor_ioMemory, NimbusCoreKtor_ioChunkBuffer, NimbusCoreKtor_ioBuffer, NimbusCoreKtor_ioByteReadPacket, NimbusCoreKtor_utilsStringValuesBuilderImpl, NimbusCoreKtor_httpURLBuilderCompanion, NimbusCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, NimbusCoreKotlinx_coroutines_coreOpDescriptor, NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode, NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, NimbusCoreKtor_ioMemoryCompanion, NimbusCoreKtor_ioBufferCompanion, NimbusCoreKtor_ioChunkBufferCompanion, NimbusCoreKtor_ioInputCompanion, NimbusCoreKtor_ioInput, NimbusCoreKtor_ioByteReadPacketCompanion, NimbusCoreKotlinKTypeProjection, NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, NimbusCoreKotlinKVariance, NimbusCoreKotlinKTypeProjectionCompanion;

@protocol NimbusCoreServerDrivenAction, NimbusCoreServerDrivenEvent, NimbusCoreActionEvent, NimbusCoreScope, NimbusCoreHttpClient, NimbusCoreIdManager, NimbusCoreLogger, NimbusCoreUrlBuilder, NimbusCoreViewClient, NimbusCoreDependent, NimbusCoreDependency, NimbusCoreServerDrivenNavigator, NimbusCoreExpression, NimbusCoreLazilyScoped, NimbusCoreKotlinComparable, NimbusCoreKtor_client_coreHttpClientEngine, NimbusCoreServerDrivenNode, NimbusCoreKotlinKClass, NimbusCoreKotlinMapEntry, NimbusCoreKotlinIterator, NimbusCoreKtor_client_coreHttpClientEngineCapability, NimbusCoreKotlinCoroutineContext, NimbusCoreKotlinx_coroutines_coreCoroutineScope, NimbusCoreKtor_ioCloseable, NimbusCoreKotlinKDeclarationContainer, NimbusCoreKotlinKAnnotatedElement, NimbusCoreKotlinKClassifier, NimbusCoreKtor_httpHeaders, NimbusCoreKotlinx_coroutines_coreJob, NimbusCoreKtor_utilsAttributes, NimbusCoreKotlinCoroutineContextKey, NimbusCoreKotlinCoroutineContextElement, NimbusCoreKotlinContinuation, NimbusCoreKotlinContinuationInterceptor, NimbusCoreKotlinx_coroutines_coreRunnable, NimbusCoreKotlinx_serialization_coreKSerializer, NimbusCoreKtor_httpParameters, NimbusCoreKtor_utilsStringValues, NimbusCoreKotlinx_coroutines_coreChildHandle, NimbusCoreKotlinx_coroutines_coreChildJob, NimbusCoreKotlinx_coroutines_coreDisposableHandle, NimbusCoreKotlinSequence, NimbusCoreKotlinx_coroutines_coreSelectClause0, NimbusCoreKtor_client_coreHttpClientPlugin, NimbusCoreKotlinSuspendFunction2, NimbusCoreKotlinx_serialization_coreEncoder, NimbusCoreKotlinx_serialization_coreSerialDescriptor, NimbusCoreKotlinx_serialization_coreSerializationStrategy, NimbusCoreKotlinx_serialization_coreDecoder, NimbusCoreKotlinx_serialization_coreDeserializationStrategy, NimbusCoreKotlinx_coroutines_coreParentJob, NimbusCoreKotlinx_coroutines_coreSelectInstance, NimbusCoreKotlinSuspendFunction0, NimbusCoreKotlinFunction, NimbusCoreKtor_httpHttpMessage, NimbusCoreKtor_ioByteReadChannel, NimbusCoreKtor_httpHttpMessageBuilder, NimbusCoreKtor_client_coreHttpRequest, NimbusCoreKotlinx_serialization_coreCompositeEncoder, NimbusCoreKotlinAnnotation, NimbusCoreKotlinx_serialization_coreCompositeDecoder, NimbusCoreKtor_ioReadSession, NimbusCoreKotlinSuspendFunction1, NimbusCoreKotlinAppendable, NimbusCoreKtor_utilsStringValuesBuilder, NimbusCoreKtor_httpParametersBuilder, NimbusCoreKotlinKType, NimbusCoreKotlinx_serialization_coreSerializersModuleCollector, NimbusCoreKtor_ioObjectPool;

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
@interface NimbusCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface NimbusCoreBase (NimbusCoreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface NimbusCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface NimbusCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorNimbusCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface NimbusCoreNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface NimbusCoreByte : NimbusCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface NimbusCoreUByte : NimbusCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface NimbusCoreShort : NimbusCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface NimbusCoreUShort : NimbusCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface NimbusCoreInt : NimbusCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface NimbusCoreUInt : NimbusCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface NimbusCoreLong : NimbusCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface NimbusCoreULong : NimbusCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface NimbusCoreFloat : NimbusCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface NimbusCoreDouble : NimbusCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface NimbusCoreBoolean : NimbusCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("ActionEvent")))
@protocol NimbusCoreActionEvent
@required
@property (readonly) id<NimbusCoreServerDrivenAction> action __attribute__((swift_name("action")));
@property (readonly) id<NimbusCoreServerDrivenEvent> scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionInitializedEvent")))
@interface NimbusCoreActionInitializedEvent : NimbusCoreBase <NimbusCoreActionEvent>
- (instancetype)initWithAction:(id<NimbusCoreServerDrivenAction>)action scope:(id<NimbusCoreServerDrivenEvent>)scope __attribute__((swift_name("init(action:scope:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NimbusCoreServerDrivenAction> action __attribute__((swift_name("action")));
@property (readonly) id<NimbusCoreServerDrivenEvent> scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionTriggeredEvent")))
@interface NimbusCoreActionTriggeredEvent : NimbusCoreBase <NimbusCoreActionEvent>
- (instancetype)initWithAction:(id<NimbusCoreServerDrivenAction>)action scope:(id<NimbusCoreServerDrivenEvent>)scope dependencies:(NimbusCoreMutableSet<NimbusCoreCommonDependency *> *)dependencies __attribute__((swift_name("init(action:scope:dependencies:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NimbusCoreServerDrivenAction> action __attribute__((swift_name("action")));
@property (readonly) NimbusCoreMutableSet<NimbusCoreCommonDependency *> *dependencies __attribute__((swift_name("dependencies")));
@property (readonly) id<NimbusCoreServerDrivenEvent> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Scope")))
@protocol NimbusCoreScope
@required
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)unsetKey:(NSString *)key __attribute__((swift_name("unset(key:)")));
@property id<NimbusCoreScope> _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) NSArray<NimbusCoreServerDrivenState *> * _Nullable states __attribute__((swift_name("states")));
@end;

__attribute__((swift_name("CommonScope")))
@interface NimbusCoreCommonScope : NimbusCoreBase <NimbusCoreScope>
- (instancetype)initWithStates:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states parent:(id<NimbusCoreScope> _Nullable)parent __attribute__((swift_name("init(states:parent:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)unsetKey:(NSString *)key __attribute__((swift_name("unset(key:)")));
@property id<NimbusCoreScope> _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) NSArray<NimbusCoreServerDrivenState *> * _Nullable states __attribute__((swift_name("states")));
@end;

__attribute__((swift_name("Nimbus")))
@interface NimbusCoreNimbus : NimbusCoreCommonScope
- (instancetype)initWithConfig:(NimbusCoreServerDrivenConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStates:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states parent:(id<NimbusCoreScope> _Nullable)parent __attribute__((swift_name("init(states:parent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NimbusCoreEventBuilder *eventBuilder __attribute__((swift_name("eventBuilder")));
@property (readonly) NimbusCoreExpressionParser *expressionParser __attribute__((swift_name("expressionParser")));
@property (readonly) id<NimbusCoreHttpClient> httpClient __attribute__((swift_name("httpClient")));
@property (readonly) id<NimbusCoreIdManager> idManager __attribute__((swift_name("idManager")));
@property (readonly) id<NimbusCoreLogger> logger __attribute__((swift_name("logger")));
@property (readonly) NimbusCoreNodeBuilder *nodeBuilder __attribute__((swift_name("nodeBuilder")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NimbusCoreUILibraryManager *uiLibraryManager __attribute__((swift_name("uiLibraryManager")));
@property (readonly) id<NimbusCoreUrlBuilder> urlBuilder __attribute__((swift_name("urlBuilder")));
@property (readonly) id<NimbusCoreViewClient> viewClient __attribute__((swift_name("viewClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenConfig")))
@interface NimbusCoreServerDrivenConfig : NimbusCoreBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl platform:(NSString *)platform ui:(NSArray<NimbusCoreUILibrary *> * _Nullable)ui coreUILibrary:(NimbusCoreUILibrary * _Nullable)coreUILibrary logger:(id<NimbusCoreLogger> _Nullable)logger urlBuilder:(id<NimbusCoreUrlBuilder> (^ _Nullable)(NSString *))urlBuilder httpClient:(id<NimbusCoreHttpClient> _Nullable)httpClient viewClient:(id<NimbusCoreViewClient> (^ _Nullable)(NimbusCoreNimbus *))viewClient idManager:(id<NimbusCoreIdManager> _Nullable)idManager states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states __attribute__((swift_name("init(baseUrl:platform:ui:coreUILibrary:logger:urlBuilder:httpClient:viewClient:idManager:states:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NimbusCoreServerDrivenState *> * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NimbusCoreUILibrary *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreUILibrary * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreLogger> _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreUrlBuilder> (^ _Nullable)(NSString *))component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreHttpClient> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreViewClient> (^ _Nullable)(NimbusCoreNimbus *))component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreIdManager> _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreServerDrivenConfig *)doCopyBaseUrl:(NSString *)baseUrl platform:(NSString *)platform ui:(NSArray<NimbusCoreUILibrary *> * _Nullable)ui coreUILibrary:(NimbusCoreUILibrary * _Nullable)coreUILibrary logger:(id<NimbusCoreLogger> _Nullable)logger urlBuilder:(id<NimbusCoreUrlBuilder> (^ _Nullable)(NSString *))urlBuilder httpClient:(id<NimbusCoreHttpClient> _Nullable)httpClient viewClient:(id<NimbusCoreViewClient> (^ _Nullable)(NimbusCoreNimbus *))viewClient idManager:(id<NimbusCoreIdManager> _Nullable)idManager states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states __attribute__((swift_name("doCopy(baseUrl:platform:ui:coreUILibrary:logger:urlBuilder:httpClient:viewClient:idManager:states:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) NimbusCoreUILibrary * _Nullable coreUILibrary __attribute__((swift_name("coreUILibrary")));
@property (readonly) id<NimbusCoreHttpClient> _Nullable httpClient __attribute__((swift_name("httpClient")));
@property (readonly) id<NimbusCoreIdManager> _Nullable idManager __attribute__((swift_name("idManager")));
@property (readonly) id<NimbusCoreLogger> _Nullable logger __attribute__((swift_name("logger")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSArray<NimbusCoreServerDrivenState *> * _Nullable states __attribute__((swift_name("states")));
@property (readonly) NSArray<NimbusCoreUILibrary *> * _Nullable ui __attribute__((swift_name("ui")));
@property (readonly) id<NimbusCoreUrlBuilder> (^ _Nullable urlBuilder)(NSString *) __attribute__((swift_name("urlBuilder")));
@property (readonly) id<NimbusCoreViewClient> (^ _Nullable viewClient)(NimbusCoreNimbus *) __attribute__((swift_name("viewClient")));
@end;

__attribute__((swift_name("ServerDrivenNavigator")))
@protocol NimbusCoreServerDrivenNavigator
@required
- (void)dismiss __attribute__((swift_name("dismiss()")));
- (void)pop __attribute__((swift_name("pop()")));
- (void)popToUrl:(NSString *)url __attribute__((swift_name("popTo(url:)")));
- (void)presentRequest:(NimbusCoreViewRequest *)request __attribute__((swift_name("present(request:)")));
- (void)pushRequest:(NimbusCoreViewRequest *)request __attribute__((swift_name("push(request:)")));
@end;

__attribute__((swift_name("Dependency")))
@protocol NimbusCoreDependency
@required
- (void)addDependentDependent:(id<NimbusCoreDependent>)dependent __attribute__((swift_name("addDependent(dependent:)")));
- (void)removeDependentDependent:(id<NimbusCoreDependent>)dependent __attribute__((swift_name("removeDependent(dependent:)")));
@property (readonly) NimbusCoreMutableSet<id<NimbusCoreDependent>> *dependents __attribute__((swift_name("dependents")));
@property BOOL hasChanged __attribute__((swift_name("hasChanged")));
@end;

__attribute__((swift_name("CommonDependency")))
@interface NimbusCoreCommonDependency : NimbusCoreBase <NimbusCoreDependency>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addDependentDependent:(id<NimbusCoreDependent>)dependent __attribute__((swift_name("addDependent(dependent:)")));
- (void)removeDependentDependent:(id<NimbusCoreDependent>)dependent __attribute__((swift_name("removeDependent(dependent:)")));
@property (readonly) NimbusCoreMutableSet<id<NimbusCoreDependent>> *dependents __attribute__((swift_name("dependents")));
@property BOOL hasChanged __attribute__((swift_name("hasChanged")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenState")))
@interface NimbusCoreServerDrivenState : NimbusCoreCommonDependency
- (instancetype)initWithId:(NSString *)id value:(id _Nullable)value __attribute__((swift_name("init(id:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreServerDrivenState *)clone __attribute__((swift_name("clone()")));
- (id _Nullable)get __attribute__((swift_name("get()")));

/**
 @note This method converts instances of UpdateError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)setNewValue:(id _Nullable)newValue error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("set(newValue:)")));

/**
 @note This method converts instances of UpdateError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)setNewValue:(id _Nullable)newValue path:(NSString *)path shouldUpdateDependents:(BOOL)shouldUpdateDependents error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("set(newValue:path:shouldUpdateDependents:)")));
- (void)setSilentlyNewValue:(id _Nullable)newValue __attribute__((swift_name("setSilently(newValue:)")));
- (void)setSilentlyNewValue:(id _Nullable)newValue path:(NSString *)path __attribute__((swift_name("setSilently(newValue:path:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenView")))
@interface NimbusCoreServerDrivenView : NimbusCoreCommonScope
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus getNavigator:(id<NimbusCoreServerDrivenNavigator> (^)(void))getNavigator __attribute__((swift_name("init(nimbus:getNavigator:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states description:(NSString * _Nullable)description getNavigator:(id<NimbusCoreServerDrivenNavigator> (^)(void))getNavigator __attribute__((swift_name("init(nimbus:states:description:getNavigator:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStates:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states parent:(id<NimbusCoreScope> _Nullable)parent __attribute__((swift_name("init(states:parent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) id<NimbusCoreServerDrivenNavigator> navigator __attribute__((swift_name("navigator")));
@property (readonly) NimbusCoreNimbus *nimbus __attribute__((swift_name("nimbus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyUpdateManager")))
@interface NimbusCoreDependencyUpdateManager : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dependencyUpdateManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreDependencyUpdateManager *shared __attribute__((swift_name("shared")));
- (void)updateDependentsOfDependency:(id<NimbusCoreDependency>)dependency __attribute__((swift_name("updateDependentsOf(dependency:)")));
- (void)updateDependentsOfDependencies:(NSSet<id<NimbusCoreDependency>> *)dependencies __attribute__((swift_name("updateDependentsOf(dependencies:)")));
@end;

__attribute__((swift_name("Dependent")))
@protocol NimbusCoreDependent
@required
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface NimbusCoreKotlinThrowable : NimbusCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinError")))
@interface NimbusCoreKotlinError : NimbusCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateError")))
@interface NimbusCoreUpdateError : NimbusCoreKotlinError
- (instancetype)initWithErrors:(NSArray<NimbusCoreKotlinThrowable *> *)errors __attribute__((swift_name("init(errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Expression")))
@protocol NimbusCoreExpression
@required
- (id _Nullable)getValue __attribute__((swift_name("getValue()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Literal")))
@interface NimbusCoreLiteral : NimbusCoreBase <NimbusCoreExpression>
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getValue __attribute__((swift_name("getValue()")));
@end;

__attribute__((swift_name("LazilyScoped")))
@protocol NimbusCoreLazilyScoped
@required
- (id _Nullable)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Operation")))
@interface NimbusCoreOperation : NimbusCoreCommonDependency <NimbusCoreExpression, NimbusCoreDependent, NimbusCoreLazilyScoped>
- (instancetype)initWithHandler:(id _Nullable (^)(NSArray<id> *))handler arguments:(NSArray<id<NimbusCoreExpression>> *)arguments detached:(BOOL)detached __attribute__((swift_name("init(handler:arguments:detached:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreOperation *)clone __attribute__((swift_name("clone()")));
- (id _Nullable)getValue __attribute__((swift_name("getValue()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateReference")))
@interface NimbusCoreStateReference : NimbusCoreCommonDependency <NimbusCoreExpression, NimbusCoreDependent, NimbusCoreLazilyScoped>
- (instancetype)initWithId:(NSString *)id path:(NSString *)path onNotFound:(void (^ _Nullable)(NSString *, id<NimbusCoreScope>))onNotFound __attribute__((swift_name("init(id:path:onNotFound:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreStateReference *)clone __attribute__((swift_name("clone()")));
- (id _Nullable)getValue __attribute__((swift_name("getValue()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTemplate")))
@interface NimbusCoreStringTemplate : NimbusCoreCommonDependency <NimbusCoreExpression, NimbusCoreDependent, NimbusCoreLazilyScoped>
- (instancetype)initWithComposition:(NSArray<id<NimbusCoreExpression>> *)composition __attribute__((swift_name("init(composition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreStringTemplate *)clone __attribute__((swift_name("clone()")));
- (NSString *)getValue __attribute__((swift_name("getValue()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DPA")))
@interface NimbusCoreDPA : NimbusCoreBase
- (instancetype)initWithInitial:(NSString *)initial final:(NSString *)final transitions:(NSDictionary<NSString *, NSArray<NimbusCoreTransition *> *> *)transitions __attribute__((swift_name("init(initial:final:transitions:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)matchInput:(NSString *)input __attribute__((swift_name("match(input:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DPA.Symbols")))
@interface NimbusCoreDPASymbols : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)symbols __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreDPASymbols *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser")))
@interface NimbusCoreExpressionParser : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsExpressionString:(NSString *)string __attribute__((swift_name("containsExpression(string:)")));
- (id<NimbusCoreExpression>)parseExpressionCode:(NSString *)code detached:(BOOL)detached __attribute__((swift_name("parseExpression(code:detached:)")));
- (id<NimbusCoreExpression>)parseStringStringContainingExpression:(NSString *)stringContainingExpression detached:(BOOL)detached __attribute__((swift_name("parseString(stringContainingExpression:detached:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LiteralParser")))
@interface NimbusCoreLiteralParser : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)literalParser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreLiteralParser *shared __attribute__((swift_name("shared")));
- (NimbusCoreLiteral * _Nullable)parseCode:(NSString *)code __attribute__((swift_name("parse(code:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationParser")))
@interface NimbusCoreOperationParser : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (id<NimbusCoreExpression>)parseCode:(NSString *)code detached:(BOOL)detached __attribute__((swift_name("parse(code:detached:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateReferenceParser")))
@interface NimbusCoreStateReferenceParser : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (id<NimbusCoreExpression>)parsePath:(NSString *)path __attribute__((swift_name("parse(path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringTemplateParser")))
@interface NimbusCoreStringTemplateParser : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreStringTemplate *)parseStringContainingExpression:(NSString *)stringContainingExpression detached:(BOOL)detached __attribute__((swift_name("parse(stringContainingExpression:detached:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transition")))
@interface NimbusCoreTransition : NimbusCoreBase
- (instancetype)initWithPush:(NSString * _Nullable)push pop:(NSString * _Nullable)pop next:(NSString *)next __attribute__((swift_name("init(push:pop:next:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRead:(NSString * _Nullable)read isRegex:(BOOL)isRegex push:(NSString * _Nullable)push pop:(NSString * _Nullable)pop next:(NSString *)next __attribute__((swift_name("init(read:isRegex:push:pop:next:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRead:(NSString * _Nullable)read push:(NSString * _Nullable)push pop:(NSString * _Nullable)pop next:(NSString *)next __attribute__((swift_name("init(read:push:pop:next:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *next __attribute__((swift_name("next")));
@property (readonly) NSString * _Nullable pop __attribute__((swift_name("pop")));
@property (readonly) NSString * _Nullable push __attribute__((swift_name("push")));
@property (readonly) NimbusCoreFastRegex * _Nullable readRegex __attribute__((swift_name("readRegex")));
@property (readonly) NSString * _Nullable readString __attribute__((swift_name("readString")));
@end;

__attribute__((swift_name("Logger")))
@protocol NimbusCoreLogger
@required
- (void)disable __attribute__((swift_name("disable()")));
- (void)enable __attribute__((swift_name("enable()")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)logMessage:(NSString *)message level:(NimbusCoreLogLevel *)level __attribute__((swift_name("log(message:level:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogger")))
@interface NimbusCoreDefaultLogger : NimbusCoreBase <NimbusCoreLogger>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)disable __attribute__((swift_name("disable()")));
- (void)enable __attribute__((swift_name("enable()")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)logMessage:(NSString *)message level:(NimbusCoreLogLevel *)level __attribute__((swift_name("log(message:level:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol NimbusCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface NimbusCoreKotlinEnum<E> : NimbusCoreBase <NimbusCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface NimbusCoreLogLevel : NimbusCoreKotlinEnum<NimbusCoreLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NimbusCoreLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) NimbusCoreLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) NimbusCoreLogLevel *error __attribute__((swift_name("error")));
+ (NimbusCoreKotlinArray<NimbusCoreLogLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnyServerDrivenData")))
@interface NimbusCoreAnyServerDrivenData : NimbusCoreBase
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreAnyServerDrivenDataCompanion *companion __attribute__((swift_name("companion")));
- (id)asAny __attribute__((swift_name("asAny()")));
- (id _Nullable)asAnyOrNull __attribute__((swift_name("asAnyOrNull()")));
- (BOOL)asBoolean __attribute__((swift_name("asBoolean()")));
- (NimbusCoreBoolean * _Nullable)asBooleanOrNull __attribute__((swift_name("asBooleanOrNull()")));
- (double)asDouble __attribute__((swift_name("asDouble()")));
- (NimbusCoreDouble * _Nullable)asDoubleOrNull __attribute__((swift_name("asDoubleOrNull()")));
- (NimbusCoreKotlinEnum *)asEnumEnum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnum(enum:)")));
- (NimbusCoreKotlinEnum * _Nullable)asEnumOrNullEnum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnumOrNull(enum:)")));
- (id<NimbusCoreServerDrivenEvent>)asEvent __attribute__((swift_name("asEvent()")));
- (id<NimbusCoreServerDrivenEvent> _Nullable)asEventOrNull __attribute__((swift_name("asEventOrNull()")));
- (float)asFloat __attribute__((swift_name("asFloat()")));
- (NimbusCoreFloat * _Nullable)asFloatOrNull __attribute__((swift_name("asFloatOrNull()")));
- (int32_t)asInt __attribute__((swift_name("asInt()")));
- (NimbusCoreInt * _Nullable)asIntOrNull __attribute__((swift_name("asIntOrNull()")));
- (NSArray<NimbusCoreAnyServerDrivenData *> *)asList __attribute__((swift_name("asList()")));
- (NSArray<NimbusCoreAnyServerDrivenData *> * _Nullable)asListOrNull __attribute__((swift_name("asListOrNull()")));
- (int64_t)asLong __attribute__((swift_name("asLong()")));
- (NimbusCoreLong * _Nullable)asLongOrNull __attribute__((swift_name("asLongOrNull()")));
- (NSDictionary<NSString *, NimbusCoreAnyServerDrivenData *> *)asMap __attribute__((swift_name("asMap()")));
- (NSDictionary<NSString *, NimbusCoreAnyServerDrivenData *> * _Nullable)asMapOrNull __attribute__((swift_name("asMapOrNull()")));
- (NSString *)asString __attribute__((swift_name("asString()")));
- (NSString * _Nullable)asStringOrNull __attribute__((swift_name("asStringOrNull()")));
- (NimbusCoreAnyServerDrivenData *)atIndex:(int32_t)index __attribute__((swift_name("at(index:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)errorsAsStringPrefix:(NSString *)prefix __attribute__((swift_name("errorsAsString(prefix:)")));
- (NimbusCoreAnyServerDrivenData *)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (BOOL)hasAnyOfKeysKeys:(NSArray<NSString *> *)keys __attribute__((swift_name("hasAnyOfKeys(keys:)")));
- (BOOL)hasError __attribute__((swift_name("hasError()")));
- (BOOL)hasValueForIndexIndex:(int32_t)index __attribute__((swift_name("hasValueForIndex(index:)")));
- (BOOL)hasValueForKeyKey:(NSString *)key __attribute__((swift_name("hasValueForKey(key:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isBoolean __attribute__((swift_name("isBoolean()")));
- (BOOL)isDouble __attribute__((swift_name("isDouble()")));
- (BOOL)isEvent __attribute__((swift_name("isEvent()")));
- (BOOL)isFloat __attribute__((swift_name("isFloat()")));
- (BOOL)isInt __attribute__((swift_name("isInt()")));
- (BOOL)isList __attribute__((swift_name("isList()")));
- (BOOL)isLong __attribute__((swift_name("isLong()")));
- (BOOL)isMap __attribute__((swift_name("isMap()")));
- (BOOL)isNull __attribute__((swift_name("isNull()")));
- (BOOL)isString __attribute__((swift_name("isString()")));
- (int32_t)listSize __attribute__((swift_name("listSize()")));
- (int32_t)mapSize __attribute__((swift_name("mapSize()")));

/**
 @note This method converts instances of SerializationError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)toJsonAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnyServerDrivenData.Companion")))
@interface NimbusCoreAnyServerDrivenDataCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreAnyServerDrivenDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id emptyAny __attribute__((swift_name("emptyAny")));
@property (readonly) BOOL emptyBoolean __attribute__((swift_name("emptyBoolean")));
@property (readonly) double emptyDouble __attribute__((swift_name("emptyDouble")));
@property (readonly) NimbusCoreDynamicEvent *emptyEvent __attribute__((swift_name("emptyEvent")));
@property (readonly) float emptyFloat __attribute__((swift_name("emptyFloat")));
@property (readonly) int32_t emptyInt __attribute__((swift_name("emptyInt")));
@property (readonly) NSArray<NimbusCoreAnyServerDrivenData *> *emptyList __attribute__((swift_name("emptyList")));
@property (readonly) int64_t emptyLong __attribute__((swift_name("emptyLong")));
@property (readonly) NSDictionary<NSString *, NimbusCoreAnyServerDrivenData *> *emptyMap __attribute__((swift_name("emptyMap")));
@property (readonly) NSString *emptyString __attribute__((swift_name("emptyString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializationError")))
@interface NimbusCoreSerializationError : NimbusCoreKotlinError
- (instancetype)initWithPropertyName:(NSString *)propertyName value:(id _Nullable)value __attribute__((swift_name("init(propertyName:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NamespaceName")))
@interface NimbusCoreNamespaceName : NimbusCoreBase
- (instancetype)initWithNamespace:(NSString *)namespace_ name:(NSString *)name __attribute__((swift_name("init(namespace:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end;

__attribute__((swift_name("UILibrary")))
@interface NimbusCoreUILibrary : NimbusCoreBase
- (instancetype)initWithNamespace:(NSString *)namespace_ __attribute__((swift_name("init(namespace:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreUILibrary *)addActionName:(NSString *)name handler:(void (^)(NimbusCoreActionTriggeredEvent *))handler __attribute__((swift_name("addAction(name:handler:)")));
- (NimbusCoreUILibrary *)addActionInitializerName:(NSString *)name handler:(void (^)(NimbusCoreActionInitializedEvent *))handler __attribute__((swift_name("addActionInitializer(name:handler:)")));
- (NimbusCoreUILibrary *)addActionObserverObserver:(void (^)(NimbusCoreActionTriggeredEvent *))observer __attribute__((swift_name("addActionObserver(observer:)")));
- (NimbusCoreUILibrary *)addOperationName:(NSString *)name handler:(id _Nullable (^)(NSArray<id> *))handler __attribute__((swift_name("addOperation(name:handler:)")));
- (void (^ _Nullable)(NimbusCoreActionTriggeredEvent *))getActionName:(NSString *)name __attribute__((swift_name("getAction(name:)")));
- (void (^ _Nullable)(NimbusCoreActionInitializedEvent *))getActionInitializerName:(NSString *)name __attribute__((swift_name("getActionInitializer(name:)")));
- (NSArray<NimbusCoreKotlinUnit *(^)(NimbusCoreActionTriggeredEvent *)> *)getActionObservers __attribute__((swift_name("getActionObservers()")));
- (id _Nullable (^ _Nullable)(NSArray<id> *))getOperationName:(NSString *)name __attribute__((swift_name("getOperation(name:)")));
- (NimbusCoreUILibrary *)mergeOther:(NimbusCoreUILibrary *)other __attribute__((swift_name("merge(other:)")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILibraryManager")))
@interface NimbusCoreUILibraryManager : NimbusCoreBase
- (instancetype)initWithCoreLibrary:(NimbusCoreUILibrary *)coreLibrary customLibraries:(NSArray<NimbusCoreUILibrary *> * _Nullable)customLibraries __attribute__((swift_name("init(coreLibrary:customLibraries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreUILibraryManagerCompanion *companion __attribute__((swift_name("companion")));
- (void)addLibraryLib:(NimbusCoreUILibrary *)lib __attribute__((swift_name("addLibrary(lib:)")));
- (void (^ _Nullable)(NimbusCoreActionTriggeredEvent *))getActionIdentifier:(NSString *)identifier __attribute__((swift_name("getAction(identifier:)")));
- (void (^ _Nullable)(NimbusCoreActionInitializedEvent *))getActionInitializerIdentifier:(NSString *)identifier __attribute__((swift_name("getActionInitializer(identifier:)")));
- (NSArray<NimbusCoreKotlinUnit *(^)(NimbusCoreActionTriggeredEvent *)> *)getActionObservers __attribute__((swift_name("getActionObservers()")));
- (NimbusCoreUILibrary * _Nullable)getLibraryNamespace:(NSString *)namespace_ __attribute__((swift_name("getLibrary(namespace:)")));
- (id _Nullable (^ _Nullable)(NSArray<id> *))getOperationName:(NSString *)name __attribute__((swift_name("getOperation(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILibraryManager.Companion")))
@interface NimbusCoreUILibraryManagerCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreUILibraryManagerCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreNamespaceName * _Nullable)splitIdentifierIdentifier:(NSString *)identifier __attribute__((swift_name("splitIdentifier(identifier:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface NimbusCoreKotlinException : NimbusCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface NimbusCoreKotlinRuntimeException : NimbusCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface NimbusCoreKotlinIllegalArgumentException : NimbusCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionDeserializationError")))
@interface NimbusCoreActionDeserializationError : NimbusCoreKotlinIllegalArgumentException
- (instancetype)initWithEvent:(id<NimbusCoreActionEvent>)event properties:(NimbusCoreAnyServerDrivenData *)properties __attribute__((swift_name("init(event:properties:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEvent:(id<NimbusCoreActionEvent>)event message:(NSString *)message __attribute__((swift_name("init(event:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionExecutionError")))
@interface NimbusCoreActionExecutionError : NimbusCoreKotlinError
- (instancetype)initWithEvent:(id<NimbusCoreActionEvent>)event cause:(NimbusCoreKotlinThrowable *)cause __attribute__((swift_name("init(event:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEvent:(id<NimbusCoreActionEvent>)event message:(NSString *)message __attribute__((swift_name("init(event:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NimbusCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface NimbusCoreKotlinIllegalStateException : NimbusCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloneAfterInitializationError")))
@interface NimbusCoreCloneAfterInitializationError : NimbusCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleInitializationError")))
@interface NimbusCoreDoubleInitializationError : NimbusCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateOnlyScope")))
@interface NimbusCoreStateOnlyScope : NimbusCoreBase <NimbusCoreScope>
- (instancetype)initWithParent:(id<NimbusCoreScope> _Nullable)parent states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states __attribute__((swift_name("init(parent:states:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)unsetKey:(NSString *)key __attribute__((swift_name("unset(key:)")));
@property id<NimbusCoreScope> _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) NSArray<NimbusCoreServerDrivenState *> * _Nullable states __attribute__((swift_name("states")));
@end;

__attribute__((swift_name("HttpClient")))
@protocol NimbusCoreHttpClient
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendRequestRequest:(NimbusCoreServerDrivenRequest *)request completionHandler:(void (^)(NimbusCoreServerDrivenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendRequest(request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHttpClient")))
@interface NimbusCoreDefaultHttpClient : NimbusCoreBase <NimbusCoreHttpClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithEngine:(id<NimbusCoreKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendRequestRequest:(NimbusCoreServerDrivenRequest *)request completionHandler:(void (^)(NimbusCoreServerDrivenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendRequest(request:completionHandler:)")));
@end;

__attribute__((swift_name("UrlBuilder")))
@protocol NimbusCoreUrlBuilder
@required
- (NSString *)buildPath:(NSString *)path __attribute__((swift_name("build(path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultUrlBuilder")))
@interface NimbusCoreDefaultUrlBuilder : NimbusCoreBase <NimbusCoreUrlBuilder>
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)buildPath:(NSString *)path __attribute__((swift_name("build(path:)")));
@end;

__attribute__((swift_name("ViewClient")))
@protocol NimbusCoreViewClient
@required

/**
 @note This method converts instances of RequestError, ResponseError, MalformedJsonError, MalformedComponentError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchRequest:(NimbusCoreViewRequest *)request completionHandler:(void (^)(NimbusCoreRootNode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetch(request:completionHandler:)")));
- (void)preFetchRequest:(NimbusCoreViewRequest *)request __attribute__((swift_name("preFetch(request:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultViewClient")))
@interface NimbusCoreDefaultViewClient : NimbusCoreBase <NimbusCoreViewClient>
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of RequestError, ResponseError, MalformedJsonError, MalformedComponentError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchRequest:(NimbusCoreViewRequest *)request completionHandler:(void (^)(NimbusCoreRootNode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetch(request:completionHandler:)")));
- (void)preFetchRequest:(NimbusCoreViewRequest *)request __attribute__((swift_name("preFetch(request:)")));
@property (readonly) NimbusCoreNimbus *nimbus __attribute__((swift_name("nimbus")));
@end;

__attribute__((swift_name("NetworkError")))
@interface NimbusCoreNetworkError : NimbusCoreKotlinError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestError")))
@interface NimbusCoreRequestError : NimbusCoreNetworkError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseError")))
@interface NimbusCoreResponseError : NimbusCoreNetworkError
- (instancetype)initWithStatus:(int32_t)status body:(NSString * _Nullable)body __attribute__((swift_name("init(status:body:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenHttpMethod")))
@interface NimbusCoreServerDrivenHttpMethod : NimbusCoreKotlinEnum<NimbusCoreServerDrivenHttpMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NimbusCoreServerDrivenHttpMethod *post __attribute__((swift_name("post")));
@property (class, readonly) NimbusCoreServerDrivenHttpMethod *get __attribute__((swift_name("get")));
@property (class, readonly) NimbusCoreServerDrivenHttpMethod *put __attribute__((swift_name("put")));
@property (class, readonly) NimbusCoreServerDrivenHttpMethod *patch __attribute__((swift_name("patch")));
@property (class, readonly) NimbusCoreServerDrivenHttpMethod *delete_ __attribute__((swift_name("delete_")));
+ (NimbusCoreKotlinArray<NimbusCoreServerDrivenHttpMethod *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenRequest")))
@interface NimbusCoreServerDrivenRequest : NimbusCoreBase
- (instancetype)initWithUrl:(NSString *)url method:(NimbusCoreServerDrivenHttpMethod * _Nullable)method headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(NSString * _Nullable)body __attribute__((swift_name("init(url:method:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreServerDrivenHttpMethod * _Nullable method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenResponse")))
@interface NimbusCoreServerDrivenResponse : NimbusCoreBase
- (instancetype)initWithStatus:(int32_t)status body:(NSString *)body headers:(NSDictionary<NSString *, NSString *> *)headers bodyBytes:(NimbusCoreKotlinByteArray *)bodyBytes __attribute__((swift_name("init(status:body:headers:bodyBytes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NimbusCoreKotlinByteArray *bodyBytes __attribute__((swift_name("bodyBytes")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewRequest")))
@interface NimbusCoreViewRequest : NimbusCoreBase
- (instancetype)initWithUrl:(NSString *)url method:(NimbusCoreServerDrivenHttpMethod *)method headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(NSString * _Nullable)body fallback:(NSDictionary<NSString *, id> * _Nullable)fallback params:(NSDictionary<NSString *, id> * _Nullable)params __attribute__((swift_name("init(url:method:headers:body:fallback:params:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreServerDrivenHttpMethod *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, id> * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, id> * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreViewRequest *)doCopyUrl:(NSString *)url method:(NimbusCoreServerDrivenHttpMethod *)method headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(NSString * _Nullable)body fallback:(NSDictionary<NSString *, id> * _Nullable)fallback params:(NSDictionary<NSString *, id> * _Nullable)params __attribute__((swift_name("doCopy(url:method:headers:body:fallback:params:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable fallback __attribute__((swift_name("fallback")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreServerDrivenHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("IdManager")))
@protocol NimbusCoreIdManager
@required
- (NSString *)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultIdManager")))
@interface NimbusCoreDefaultIdManager : NimbusCoreBase <NimbusCoreIdManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("ServerDrivenAction")))
@protocol NimbusCoreServerDrivenAction <NimbusCoreDependent>
@required
@property (readonly) void (^handler)(NimbusCoreActionTriggeredEvent *) __attribute__((swift_name("handler")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("ServerDrivenEvent")))
@protocol NimbusCoreServerDrivenEvent <NimbusCoreScope>
@required
- (void)run __attribute__((swift_name("run()")));
- (void)runImplicitStateValue:(id _Nullable)implicitStateValue __attribute__((swift_name("run(implicitStateValue:)")));
@property (readonly) NSArray<id<NimbusCoreServerDrivenAction>> *actions __attribute__((swift_name("actions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NimbusCoreNimbus *nimbus __attribute__((swift_name("nimbus")));
@property (readonly) id<NimbusCoreServerDrivenNode> node __attribute__((swift_name("node")));
@property (readonly) NimbusCoreServerDrivenView *view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("ServerDrivenNode")))
@protocol NimbusCoreServerDrivenNode <NimbusCoreDependency, NimbusCoreDependent, NimbusCoreScope>
@required
@property (readonly) NSArray<id<NimbusCoreServerDrivenNode>> * _Nullable children __attribute__((swift_name("children")));
@property (readonly) NSString *component __attribute__((swift_name("component")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicAction")))
@interface NimbusCoreDynamicAction : NimbusCoreBase <NimbusCoreServerDrivenAction, NimbusCoreLazilyScoped>
- (instancetype)initWithName:(NSString *)name handler:(void (^)(NimbusCoreActionTriggeredEvent *))handler initHandler:(void (^ _Nullable)(NimbusCoreActionInitializedEvent *))initHandler __attribute__((swift_name("init(name:handler:initHandler:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreDynamicAction *)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)update __attribute__((swift_name("update()")));
@property (readonly) void (^handler)(NimbusCoreActionTriggeredEvent *) __attribute__((swift_name("handler")));
@property NSDictionary<NSString *, id> * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property NSDictionary<NSString *, id> * _Nullable properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DynamicEvent")))
@interface NimbusCoreDynamicEvent : NimbusCoreCommonScope <NimbusCoreServerDrivenEvent, NimbusCoreLazilyScoped>
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStates:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states parent:(id<NimbusCoreScope> _Nullable)parent __attribute__((swift_name("init(states:parent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NimbusCoreDynamicEvent *)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)run __attribute__((swift_name("run()")));
- (void)runImplicitStateValue:(id _Nullable)implicitStateValue __attribute__((swift_name("run(implicitStateValue:)")));
@property NSArray<NimbusCoreDynamicAction *> *actions __attribute__((swift_name("actions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NimbusCoreNimbus *nimbus __attribute__((swift_name("nimbus")));
@property (readonly) id<NimbusCoreServerDrivenNode> node __attribute__((swift_name("node")));
@property (readonly) NimbusCoreServerDrivenView *view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionBuilder")))
@interface NimbusCoreActionBuilder : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreDynamicAction *)buildFromJsonMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("buildFromJsonMap(map:)")));
- (BOOL)isJsonActionMaybeAction:(id _Nullable)maybeAction __attribute__((swift_name("isJsonAction(maybeAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventBuilder")))
@interface NimbusCoreEventBuilder : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreDynamicEvent *)buildFromJsonMapName:(NSString *)name jsonEvent:(id _Nullable)jsonEvent __attribute__((swift_name("buildFromJsonMap(name:jsonEvent:)")));
- (BOOL)isJsonEventMaybeEvent:(id _Nullable)maybeEvent __attribute__((swift_name("isJsonEvent(maybeEvent:)")));
@end;

__attribute__((swift_name("MalformedJsonError")))
@interface NimbusCoreMalformedJsonError : NimbusCoreKotlinError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MalformedActionListError")))
@interface NimbusCoreMalformedActionListError : NimbusCoreMalformedJsonError
- (instancetype)initWithCause:(NSString *)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MalformedComponentError")))
@interface NimbusCoreMalformedComponentError : NimbusCoreMalformedJsonError
- (instancetype)initWithId:(NSString * _Nullable)id jsonPath:(NSString *)jsonPath cause:(NSString * _Nullable)cause __attribute__((swift_name("init(id:jsonPath:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeBuilder")))
@interface NimbusCoreNodeBuilder : NimbusCoreBase
- (instancetype)initWithNimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(nimbus:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of MalformedComponentError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NimbusCoreRootNode * _Nullable)buildFromJsonMapJsonMap:(NSDictionary<NSString *, id> *)jsonMap error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("buildFromJsonMap(jsonMap:)")));

/**
 @note This method converts instances of MalformedJsonError, MalformedComponentError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (NimbusCoreRootNode * _Nullable)buildFromJsonStringJson:(NSString *)json error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("buildFromJsonString(json:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeContainer")))
@interface NimbusCoreNodeContainer : NimbusCoreCommonDependency <NimbusCoreDependent, NimbusCoreLazilyScoped>
- (instancetype)initWithNodeList:(NSArray<NimbusCoreDynamicNode *> *)nodeList __attribute__((swift_name("init(nodeList:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreNodeContainer *)clone __attribute__((swift_name("clone()")));
- (NimbusCoreNodeContainer *)cloneIdSuffix:(NSString *)idSuffix __attribute__((swift_name("clone(idSuffix:)")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (NSArray<NimbusCoreDynamicNode *> *)read __attribute__((swift_name("read()")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyContainer")))
@interface NimbusCorePropertyContainer : NimbusCoreCommonDependency <NimbusCoreLazilyScoped, NimbusCoreDependent>
- (instancetype)initWithProperties:(NSDictionary<NSString *, id> *)properties nimbus:(NimbusCoreNimbus *)nimbus detached:(BOOL)detached __attribute__((swift_name("init(properties:nimbus:detached:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCorePropertyContainer *)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (NSDictionary<NSString *, id> *)read __attribute__((swift_name("read()")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((swift_name("DynamicNode")))
@interface NimbusCoreDynamicNode : NimbusCoreCommonDependency <NimbusCoreScope, NimbusCoreLazilyScoped, NimbusCoreServerDrivenNode>
- (instancetype)initWithId:(NSString *)id component:(NSString *)component states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states polymorphic:(BOOL)polymorphic __attribute__((swift_name("init(id:component:states:polymorphic:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCoreDynamicNode *)clone __attribute__((swift_name("clone()")));
- (NimbusCoreDynamicNode *)cloneIdSuffix:(NSString *)idSuffix __attribute__((swift_name("clone(idSuffix:)")));
- (NimbusCoreDynamicNode *)cloneIdSuffix:(NSString *)idSuffix builder:(NimbusCoreDynamicNode *(^)(NSString *, NSArray<NimbusCoreServerDrivenState *> * _Nullable))builder __attribute__((swift_name("clone(idSuffix:builder:)")));
- (id _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)unsetKey:(NSString *)key __attribute__((swift_name("unset(key:)")));
- (void)update __attribute__((swift_name("update()")));
@property NSArray<NimbusCoreDynamicNode *> * _Nullable children __attribute__((swift_name("children")));
@property (readonly) NSString *component __attribute__((swift_name("component")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property id<NimbusCoreScope> _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) BOOL polymorphic __attribute__((swift_name("polymorphic")));
@property NSDictionary<NSString *, id> * _Nullable properties __attribute__((swift_name("properties")));
@property (readonly) NSArray<NimbusCoreServerDrivenState *> * _Nullable states __attribute__((swift_name("states")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForEachNode")))
@interface NimbusCoreForEachNode : NimbusCoreDynamicNode
- (instancetype)initWithId:(NSString *)id states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states __attribute__((swift_name("init(id:states:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id component:(NSString *)component states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states polymorphic:(BOOL)polymorphic __attribute__((swift_name("init(id:component:states:polymorphic:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NimbusCoreDynamicNode *)cloneIdSuffix:(NSString *)idSuffix __attribute__((swift_name("clone(idSuffix:)")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IfNode")))
@interface NimbusCoreIfNode : NimbusCoreDynamicNode
- (instancetype)initWithId:(NSString *)id states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states __attribute__((swift_name("init(id:states:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id component:(NSString *)component states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states polymorphic:(BOOL)polymorphic __attribute__((swift_name("init(id:component:states:polymorphic:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NimbusCoreDynamicNode *)cloneIdSuffix:(NSString *)idSuffix __attribute__((swift_name("clone(idSuffix:)")));
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNode")))
@interface NimbusCoreRootNode : NimbusCoreDynamicNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id component:(NSString *)component states:(NSArray<NimbusCoreServerDrivenState *> * _Nullable)states polymorphic:(BOOL)polymorphic __attribute__((swift_name("init(id:component:states:polymorphic:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)replaceContentNewContent:(NimbusCoreRootNode *)newContent view:(NimbusCoreServerDrivenView *)view __attribute__((swift_name("replaceContent(newContent:view:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidDataPathError")))
@interface NimbusCoreInvalidDataPathError : NimbusCoreKotlinError
- (instancetype)initWithPath:(NSString *)path cause:(NSString *)cause __attribute__((swift_name("init(path:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Null")))
@interface NimbusCoreNull : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)null __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreNull *shared __attribute__((swift_name("shared")));
- (BOOL)isNullValue:(id _Nullable)value __attribute__((swift_name("isNull(value:)")));
- (id _Nullable)sanitizeValue:(id _Nullable)value __attribute__((swift_name("sanitize(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnexpectedDataTypeError")))
@interface NimbusCoreUnexpectedDataTypeError : NimbusCoreKotlinError
- (instancetype)initWithPath:(NSString *)path expectedType:(id<NimbusCoreKotlinKClass>)expectedType valueFound:(id _Nullable)valueFound message:(NSString * _Nullable)message __attribute__((swift_name("init(path:expectedType:valueFound:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<NimbusCoreKotlinKClass> expectedType __attribute__((swift_name("expectedType")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) id _Nullable valueFound __attribute__((swift_name("valueFound")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FastRegex")))
@interface NimbusCoreFastRegex : NimbusCoreBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsMatchInInput:(NSString *)input __attribute__((swift_name("containsMatchIn(input:)")));
- (NSString * _Nullable)findInput:(NSString *)input __attribute__((swift_name("find(input:)")));
- (NSArray<NSString *> *)findAllInput:(NSString *)input __attribute__((swift_name("findAll(input:)")));
- (NSArray<NimbusCoreMatchGroups *> *)findAllWithGroupsInput:(NSString *)input __attribute__((swift_name("findAllWithGroups(input:)")));
- (NimbusCoreMatchGroups * _Nullable)findWithGroupsInput:(NSString *)input __attribute__((swift_name("findWithGroups(input:)")));
- (BOOL)matchesInput:(NSString *)input __attribute__((swift_name("matches(input:)")));
- (NSString *)replaceInput:(NSString *)input transform:(NSString *(^)(NimbusCoreMatchGroups *))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(NSString *)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSArray<id> *)transformInput:(NSString *)input transformUnmatching:(id _Nullable (^)(NSString *))transformUnmatching transformMatching:(id _Nullable (^)(NimbusCoreMatchGroups *))transformMatching __attribute__((swift_name("transform(input:transformUnmatching:transformMatching:)")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchGroups")))
@interface NimbusCoreMatchGroups : NimbusCoreBase
- (instancetype)initWithValues:(NSArray<NSString *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NimbusCoreMatchGroupsDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchGroups.Destructured")))
@interface NimbusCoreMatchGroupsDestructured : NimbusCoreBase
- (instancetype)initWith:(NimbusCoreMatchGroups *)receiver group:(NimbusCoreMatchGroups *)group __attribute__((swift_name("init(_:group:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
@property (readonly) NimbusCoreMatchGroups *group __attribute__((swift_name("group")));
@end;

__attribute__((swift_name("KotlinNumber")))
@interface NimbusCoreKotlinNumber : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int8_t)toByte __attribute__((swift_name("toByte()")));
- (unichar)toChar __attribute__((swift_name("toChar()")));
- (double)toDouble __attribute__((swift_name("toDouble()")));
- (float)toFloat __attribute__((swift_name("toFloat()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
- (int16_t)toShort __attribute__((swift_name("toShort()")));
@end;

@interface NimbusCoreKotlinNumber (Extensions)
- (int32_t)compareToOther_:(id)other __attribute__((swift_name("compareTo(other_:)")));
- (id)divOther:(id)other __attribute__((swift_name("div(other:)")));
- (void)divAssignNumber:(id)number __attribute__((swift_name("divAssign(number:)")));
- (BOOL)isDividableOther:(id)other __attribute__((swift_name("isDividable(other:)")));
- (id)minusOther:(id)other __attribute__((swift_name("minus(other:)")));
- (void)minusAssignNumber:(id)number __attribute__((swift_name("minusAssign(number:)")));
- (id)plusOther:(id)other __attribute__((swift_name("plus(other:)")));
- (void)plusAssignNumber:(id)number __attribute__((swift_name("plusAssign(number:)")));
- (id)remOther:(id)other __attribute__((swift_name("rem(other:)")));
- (void)remAssignNumber:(id)number __attribute__((swift_name("remAssign(number:)")));
- (id)timesOther:(id)other __attribute__((swift_name("times(other:)")));
- (void)timesAssignNumber:(id)number __attribute__((swift_name("timesAssign(number:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUILibraryKt")))
@interface NimbusCoreCoreUILibraryKt : NimbusCoreBase
@property (class, readonly) NimbusCoreUILibrary *coreUILibrary __attribute__((swift_name("coreUILibrary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeKt")))
@interface NimbusCoreScopeKt : NimbusCoreBase
+ (id<NimbusCoreScope> _Nullable)closestScopeWithType:(id<NimbusCoreScope>)receiver __attribute__((swift_name("closestScopeWithType(_:)")));
+ (NimbusCoreServerDrivenState * _Nullable)closestState:(id<NimbusCoreScope>)receiver id:(NSString *)id __attribute__((swift_name("closestState(_:id:)")));
+ (NSString *)getPathToScope:(id<NimbusCoreScope>)receiver __attribute__((swift_name("getPathToScope(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientKt")))
@interface NimbusCoreHttpClientKt : NimbusCoreBase
@property (class, readonly) int32_t FIRST_BAD_STATUS __attribute__((swift_name("FIRST_BAD_STATUS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenNodeKt")))
@interface NimbusCoreServerDrivenNodeKt : NimbusCoreBase
+ (id<NimbusCoreServerDrivenNode> _Nullable)findNodeById:(id<NimbusCoreServerDrivenNode>)receiver id:(NSString *)id __attribute__((swift_name("findNodeById(_:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringKt")))
@interface NimbusCoreStringKt : NimbusCoreBase
+ (NSString *)addPrefixStr:(NSString *)str prefix:(NSString *)prefix __attribute__((swift_name("addPrefix(str:prefix:)")));
+ (NSString *)removePrefixStr:(NSString *)str prefix:(NSString *)prefix __attribute__((swift_name("removePrefix(str:prefix:)")));
+ (NSString *)removeSuffixStr:(NSString *)str suffix:(NSString *)suffix __attribute__((swift_name("removeSuffix(str:suffix:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnyKt")))
@interface NimbusCoreAnyKt : NimbusCoreBase
+ (id _Nullable)deepCopyValue:(id _Nullable)value __attribute__((swift_name("deepCopy(value:)")));
+ (id _Nullable)deepCopyMutableValue:(id _Nullable)value __attribute__((swift_name("deepCopyMutable(value:)")));
+ (id _Nullable)extractValueOfArrayData:(id)data accessor:(NSString *)accessor path:(NSString *)path __attribute__((swift_name("extractValueOfArray(data:accessor:path:)")));
+ (id _Nullable)extractValueOfMapData:(id)data accessor:(NSString *)accessor __attribute__((swift_name("extractValueOfMap(data:accessor:)")));
+ (id _Nullable)untypedValueOfPathData:(id _Nullable)data path:(NSString *)path __attribute__((swift_name("untypedValueOfPath(data:path:)")));

/**
 @note This method converts instances of InvalidDataPathError, UnexpectedDataTypeError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (NimbusCoreKotlinEnum * _Nullable)valueOfEnumData:(id _Nullable)data key:(NSString *)key defaultValue:(NimbusCoreKotlinEnum * _Nullable)defaultValue error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("valueOfEnum(data:key:defaultValue:)")));

/**
 @note This method converts instances of UnexpectedDataTypeError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (id _Nullable)valueOfKeyData:(id _Nullable)data key:(NSString *)key error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("valueOfKey(data:key:)"))) __attribute__((swift_error(nonnull_error)));

/**
 @note This method converts instances of InvalidDataPathError, UnexpectedDataTypeError to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (id _Nullable)valueOfPathData:(id _Nullable)data path:(NSString *)path error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("valueOfPath(data:path:)"))) __attribute__((swift_error(nonnull_error)));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListKt")))
@interface NimbusCoreListKt : NimbusCoreBase
+ (NSMutableArray<id> *)mapValuesToMutableListList:(NSArray<id> *)list iteratee:(id _Nullable (^)(id _Nullable))iteratee __attribute__((swift_name("mapValuesToMutableList(list:iteratee:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapKt")))
@interface NimbusCoreMapKt : NimbusCoreBase
+ (NimbusCoreMutableDictionary<id, id> *)mapValuesToMutableMapMap:(NSDictionary<id, id> *)map iteratee:(id _Nullable (^)(id<NimbusCoreKotlinMapEntry>))iteratee __attribute__((swift_name("mapValuesToMutableMap(map:iteratee:)")));
+ (void)setMapValueMap:(NimbusCoreMutableDictionary<NSString *, id> *)map path:(NSString *)path newValue:(id _Nullable)newValue __attribute__((swift_name("setMapValue(map:path:newValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberKt")))
@interface NimbusCoreNumberKt : NimbusCoreBase
+ (id _Nullable)toNumberOrNullValue:(id _Nullable)value __attribute__((swift_name("toNumberOrNull(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface NimbusCoreJsonKt : NimbusCoreBase
+ (NSArray<id> *)transformJsonArrayToListJson:(NSArray<NimbusCoreKotlinx_serialization_jsonJsonElement *> *)json __attribute__((swift_name("transformJsonArrayToList(json:)")));
+ (id _Nullable)transformJsonElementToKotlinTypeJson:(NimbusCoreKotlinx_serialization_jsonJsonElement *)json __attribute__((swift_name("transformJsonElementToKotlinType(json:)")));
+ (NimbusCoreMutableDictionary<NSString *, id> *)transformJsonObjectToMapJson:(NSDictionary<NSString *, NimbusCoreKotlinx_serialization_jsonJsonElement *> *)json __attribute__((swift_name("transformJsonObjectToMap(json:)")));
+ (id _Nullable)transformJsonPrimitiveToPrimitiveJson:(NimbusCoreKotlinx_serialization_jsonJsonPrimitive *)json __attribute__((swift_name("transformJsonPrimitiveToPrimitive(json:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanKt")))
@interface NimbusCoreBooleanKt : NimbusCoreBase
+ (id _Nullable)then:(BOOL)receiver param:(id _Nullable)param __attribute__((swift_name("then(_:param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface NimbusCoreExtensionsKt : NimbusCoreBase
+ (BOOL)matches:(NSString *)receiver regex:(NimbusCoreFastRegex *)regex __attribute__((swift_name("matches(_:regex:)")));
+ (NSString *)replace:(NSString *)receiver regex:(NimbusCoreFastRegex *)regex transform:(NSString *(^)(NimbusCoreMatchGroups *))transform __attribute__((swift_name("replace(_:regex:transform:)")));
+ (NSString *)replace:(NSString *)receiver regex:(NimbusCoreFastRegex *)regex replacement:(NSString *)replacement __attribute__((swift_name("replace(_:regex:replacement:)")));
+ (NimbusCoreFastRegex *)toFastRegex:(NSString *)receiver __attribute__((swift_name("toFastRegex(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NimbusCoreKotlinArray<T> : NimbusCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(NimbusCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NimbusCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NimbusCoreKotlinEnumCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface NimbusCoreKotlinUnit : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface NimbusCoreKotlinCancellationException : NimbusCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol NimbusCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<NimbusCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol NimbusCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol NimbusCoreKtor_client_coreHttpClientEngine <NimbusCoreKotlinx_coroutines_coreCoroutineScope, NimbusCoreKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(NimbusCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(NimbusCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(NimbusCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) NimbusCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<NimbusCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface NimbusCoreKotlinByteArray : NimbusCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NimbusCoreByte *(^)(NimbusCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NimbusCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol NimbusCoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol NimbusCoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol NimbusCoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol NimbusCoreKotlinKClass <NimbusCoreKotlinKDeclarationContainer, NimbusCoreKotlinKAnnotatedElement, NimbusCoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol NimbusCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface NimbusCoreKotlinx_serialization_jsonJsonElement : NimbusCoreBase
@property (class, readonly, getter=companion) NimbusCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface NimbusCoreKotlinx_serialization_jsonJsonPrimitive : NimbusCoreKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) NimbusCoreKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol NimbusCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface NimbusCoreKtor_client_coreHttpRequestData : NimbusCoreBase
- (instancetype)initWithUrl:(NimbusCoreKtor_httpUrl *)url method:(NimbusCoreKtor_httpHttpMethod *)method headers:(id<NimbusCoreKtor_httpHeaders>)headers body:(NimbusCoreKtor_httpOutgoingContent *)body executionContext:(id<NimbusCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<NimbusCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<NimbusCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NimbusCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<NimbusCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<NimbusCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NimbusCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface NimbusCoreKtor_client_coreHttpResponseData : NimbusCoreBase
- (instancetype)initWithStatusCode:(NimbusCoreKtor_httpHttpStatusCode *)statusCode requestTime:(NimbusCoreKtor_utilsGMTDate *)requestTime headers:(id<NimbusCoreKtor_httpHeaders>)headers version:(NimbusCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<NimbusCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<NimbusCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<NimbusCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NimbusCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface NimbusCoreKtor_client_coreHttpClient : NimbusCoreBase <NimbusCoreKotlinx_coroutines_coreCoroutineScope, NimbusCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<NimbusCoreKtor_client_coreHttpClientEngine>)engine userConfig:(NimbusCoreKtor_client_coreHttpClientConfig<NimbusCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (NimbusCoreKtor_client_coreHttpClient *)configBlock:(void (^)(NimbusCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<NimbusCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<NimbusCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<NimbusCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) NimbusCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) NimbusCoreKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) NimbusCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) NimbusCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) NimbusCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) NimbusCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface NimbusCoreKtor_client_coreHttpClientEngineConfig : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property NimbusCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol NimbusCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<NimbusCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<NimbusCoreKotlinCoroutineContextElement> _Nullable)getKey_:(id<NimbusCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<NimbusCoreKotlinCoroutineContext>)minusKeyKey:(id<NimbusCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<NimbusCoreKotlinCoroutineContext>)plusContext:(id<NimbusCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol NimbusCoreKotlinCoroutineContextElement <NimbusCoreKotlinCoroutineContext>
@required
@property (readonly) id<NimbusCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface NimbusCoreKotlinAbstractCoroutineContextElement : NimbusCoreBase <NimbusCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<NimbusCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NimbusCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol NimbusCoreKotlinContinuationInterceptor <NimbusCoreKotlinCoroutineContextElement>
@required
- (id<NimbusCoreKotlinContinuation>)interceptContinuationContinuation:(id<NimbusCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<NimbusCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher : NimbusCoreKotlinAbstractCoroutineContextElement <NimbusCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<NimbusCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<NimbusCoreKotlinCoroutineContext>)context block:(id<NimbusCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<NimbusCoreKotlinCoroutineContext>)context block:(id<NimbusCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<NimbusCoreKotlinContinuation>)interceptContinuationContinuation:(id<NimbusCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<NimbusCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<NimbusCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol NimbusCoreKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface NimbusCoreKotlinByteIterator : NimbusCoreBase <NimbusCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NimbusCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface NimbusCoreKotlinx_serialization_jsonJsonElementCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<NimbusCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface NimbusCoreKotlinx_serialization_jsonJsonPrimitiveCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<NimbusCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface NimbusCoreKtor_httpUrl : NimbusCoreBase
@property (class, readonly, getter=companion) NimbusCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) id<NimbusCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface NimbusCoreKtor_httpHttpMethod : NimbusCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol NimbusCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NimbusCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol NimbusCoreKtor_httpHeaders <NimbusCoreKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface NimbusCoreKtor_httpOutgoingContent : NimbusCoreBase
- (id _Nullable)getPropertyKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<NimbusCoreKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) NimbusCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NimbusCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<NimbusCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol NimbusCoreKotlinx_coroutines_coreJob <NimbusCoreKotlinCoroutineContextElement>
@required
- (id<NimbusCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<NimbusCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(NimbusCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (NimbusCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<NimbusCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(NimbusCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<NimbusCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(NimbusCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<NimbusCoreKotlinx_coroutines_coreJob>)plusOther_:(id<NimbusCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<NimbusCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<NimbusCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol NimbusCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey__:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key__:)")));
- (id _Nullable)getOrNullKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(NimbusCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<NimbusCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface NimbusCoreKtor_httpHttpStatusCode : NimbusCoreBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (NimbusCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface NimbusCoreKtor_utilsGMTDate : NimbusCoreBase <NimbusCoreKotlinComparable>
@property (class, readonly, getter=companion) NimbusCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(NimbusCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(NimbusCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(NimbusCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) NimbusCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) NimbusCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface NimbusCoreKtor_httpHttpProtocolVersion : NimbusCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface NimbusCoreKtor_client_coreHttpClientConfig<T> : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NimbusCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(NimbusCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<NimbusCoreKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(NimbusCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(NimbusCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface NimbusCoreKtor_eventsEvents : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(NimbusCoreKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<NimbusCoreKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(NimbusCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(NimbusCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface NimbusCoreKtor_utilsPipeline<TSubject, TContext> : NimbusCoreBase
- (instancetype)initWithPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(NimbusCoreKotlinArray<NimbusCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(NimbusCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(NimbusCoreKtor_utilsPipelinePhase *)reference phase:(NimbusCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(NimbusCoreKtor_utilsPipelinePhase *)reference phase:(NimbusCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase block:(id<NimbusCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(NimbusCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(NimbusCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(NimbusCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(NimbusCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<NimbusCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface NimbusCoreKtor_client_coreHttpReceivePipeline : NimbusCoreKtor_utilsPipeline<NimbusCoreKtor_client_coreHttpResponse *, NimbusCoreKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NimbusCoreKotlinArray<NimbusCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface NimbusCoreKtor_client_coreHttpRequestPipeline : NimbusCoreKtor_utilsPipeline<id, NimbusCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NimbusCoreKotlinArray<NimbusCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface NimbusCoreKtor_client_coreHttpResponsePipeline : NimbusCoreKtor_utilsPipeline<NimbusCoreKtor_client_coreHttpResponseContainer *, NimbusCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NimbusCoreKotlinArray<NimbusCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface NimbusCoreKtor_client_coreHttpSendPipeline : NimbusCoreKtor_utilsPipeline<id, NimbusCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NimbusCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NimbusCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NimbusCoreKotlinArray<NimbusCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface NimbusCoreKtor_client_coreProxyConfig : NimbusCoreBase
- (instancetype)initWithUrl:(NimbusCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol NimbusCoreKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol NimbusCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<NimbusCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface NimbusCoreKotlinAbstractCoroutineContextKey<B, E> : NimbusCoreBase <NimbusCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<NimbusCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<NimbusCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface NimbusCoreKotlinx_coroutines_coreCoroutineDispatcherKey : NimbusCoreKotlinAbstractCoroutineContextKey<id<NimbusCoreKotlinContinuationInterceptor>, NimbusCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<NimbusCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<NimbusCoreKotlinCoroutineContextElement> _Nullable (^)(id<NimbusCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol NimbusCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol NimbusCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<NimbusCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NimbusCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol NimbusCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<NimbusCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<NimbusCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol NimbusCoreKotlinx_serialization_coreKSerializer <NimbusCoreKotlinx_serialization_coreSerializationStrategy, NimbusCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface NimbusCoreKtor_httpUrlCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol NimbusCoreKtor_httpParameters <NimbusCoreKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface NimbusCoreKtor_httpURLProtocol : NimbusCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface NimbusCoreKtor_httpHttpMethodCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<NimbusCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface NimbusCoreKtor_utilsAttributeKey<T> : NimbusCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface NimbusCoreKtor_httpHeaderValueWithParameters : NimbusCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NimbusCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<NimbusCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface NimbusCoreKtor_httpContentType : NimbusCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<NimbusCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NimbusCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(NimbusCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (NimbusCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (NimbusCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol NimbusCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol NimbusCoreKotlinx_coroutines_coreChildHandle <NimbusCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(NimbusCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<NimbusCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol NimbusCoreKotlinx_coroutines_coreChildJob <NimbusCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<NimbusCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol NimbusCoreKotlinSequence
@required
- (id<NimbusCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol NimbusCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<NimbusCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<NimbusCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface NimbusCoreKtor_httpHttpStatusCodeCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<NimbusCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface NimbusCoreKtor_utilsGMTDateCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface NimbusCoreKtor_utilsWeekDay : NimbusCoreKotlinEnum<NimbusCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) NimbusCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (NimbusCoreKotlinArray<NimbusCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface NimbusCoreKtor_utilsMonth : NimbusCoreKotlinEnum<NimbusCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) NimbusCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (NimbusCoreKotlinArray<NimbusCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface NimbusCoreKtor_httpHttpProtocolVersionCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (NimbusCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol NimbusCoreKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(NimbusCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) NimbusCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface NimbusCoreKtor_eventsEventDefinition<T> : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface NimbusCoreKtor_utilsPipelinePhase : NimbusCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol NimbusCoreKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol NimbusCoreKotlinSuspendFunction2 <NimbusCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface NimbusCoreKtor_client_coreHttpReceivePipelinePhases : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol NimbusCoreKtor_httpHttpMessage
@required
@property (readonly) id<NimbusCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface NimbusCoreKtor_client_coreHttpResponse : NimbusCoreBase <NimbusCoreKtor_httpHttpMessage, NimbusCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<NimbusCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) NimbusCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NimbusCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NimbusCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) NimbusCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface NimbusCoreKtor_client_coreHttpRequestPipelinePhases : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol NimbusCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) NimbusCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface NimbusCoreKtor_client_coreHttpRequestBuilder : NimbusCoreBase <NimbusCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NimbusCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<NimbusCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<NimbusCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<NimbusCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (NimbusCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(NimbusCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (NimbusCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(NimbusCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(NimbusCoreKtor_httpURLBuilder *, NimbusCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property NimbusCoreKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<NimbusCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NimbusCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property NimbusCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NimbusCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface NimbusCoreKtor_client_coreHttpResponsePipelinePhases : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface NimbusCoreKtor_client_coreHttpResponseContainer : NimbusCoreBase
- (instancetype)initWithExpectedType:(NimbusCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (NimbusCoreKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(NimbusCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface NimbusCoreKtor_client_coreHttpClientCall : NimbusCoreBase <NimbusCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(NimbusCoreKtor_client_coreHttpClient *)client requestData:(NimbusCoreKtor_client_coreHttpRequestData *)requestData responseData:(NimbusCoreKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(NimbusCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(NimbusCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(NimbusCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<NimbusCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NimbusCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<NimbusCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<NimbusCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property NimbusCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface NimbusCoreKtor_client_coreHttpSendPipelinePhases : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NimbusCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol NimbusCoreKotlinx_serialization_coreEncoder
@required
- (id<NimbusCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<NimbusCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<NimbusCoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<NimbusCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<NimbusCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) NimbusCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol NimbusCoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<NimbusCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<NimbusCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NimbusCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol NimbusCoreKotlinx_serialization_coreDecoder
@required
- (id<NimbusCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<NimbusCoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (NimbusCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) NimbusCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface NimbusCoreKtor_httpURLProtocolCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) NimbusCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, NimbusCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface NimbusCoreKtor_httpHeaderValueParam : NimbusCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface NimbusCoreKtor_httpHeaderValueWithParametersCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<NimbusCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface NimbusCoreKtor_httpContentTypeCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NimbusCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol NimbusCoreKotlinx_coroutines_coreParentJob <NimbusCoreKotlinx_coroutines_coreJob>
@required
- (NimbusCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol NimbusCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<NimbusCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(NimbusCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(NimbusCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<NimbusCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol NimbusCoreKotlinSuspendFunction0 <NimbusCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface NimbusCoreKtor_utilsWeekDayCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NimbusCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface NimbusCoreKtor_utilsMonthCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NimbusCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol NimbusCoreKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(NimbusCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(NimbusCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(NimbusCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(NimbusCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NimbusCoreKtor_ioChunkBuffer *)dst completionHandler:(void (^)(NimbusCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NimbusCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NimbusCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(NimbusCoreKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NimbusCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NimbusCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(NimbusCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(NimbusCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(NimbusCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(NimbusCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NimbusCoreKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NimbusCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(NimbusCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(NimbusCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(NimbusCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(NimbusCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<NimbusCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(NimbusCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<NimbusCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<NimbusCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(NimbusCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) NimbusCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol NimbusCoreKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<NimbusCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<NimbusCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<NimbusCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NimbusCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface NimbusCoreKtor_utilsStringValuesBuilderImpl : NimbusCoreBase <NimbusCoreKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<NimbusCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<NimbusCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<NimbusCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NimbusCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) NimbusCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface NimbusCoreKtor_httpHeadersBuilder : NimbusCoreKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NimbusCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface NimbusCoreKtor_client_coreHttpRequestBuilderCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface NimbusCoreKtor_httpURLBuilder : NimbusCoreBase
- (instancetype)initWithProtocol:(NimbusCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<NimbusCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NimbusCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<NimbusCoreKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<NimbusCoreKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property NimbusCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface NimbusCoreKtor_utilsTypeInfo : NimbusCoreBase
- (instancetype)initWithType:(id<NimbusCoreKotlinKClass>)type reifiedType:(id<NimbusCoreKotlinKType>)reifiedType kotlinType:(id<NimbusCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<NimbusCoreKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKtor_utilsTypeInfo *)doCopyType:(id<NimbusCoreKotlinKClass>)type reifiedType:(id<NimbusCoreKotlinKType>)reifiedType kotlinType:(id<NimbusCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NimbusCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<NimbusCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<NimbusCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface NimbusCoreKtor_client_coreHttpClientCallCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol NimbusCoreKtor_client_coreHttpRequest <NimbusCoreKtor_httpHttpMessage, NimbusCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<NimbusCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NimbusCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) NimbusCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) NimbusCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NimbusCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol NimbusCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<NimbusCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NimbusCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NimbusCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) NimbusCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface NimbusCoreKotlinx_serialization_coreSerializersModule : NimbusCoreBase
- (void)dumpToCollector:(id<NimbusCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<NimbusCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<NimbusCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<NimbusCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<NimbusCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NimbusCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NimbusCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol NimbusCoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface NimbusCoreKotlinx_serialization_coreSerialKind : NimbusCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol NimbusCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<NimbusCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<NimbusCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) NimbusCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface NimbusCoreKotlinNothing : NimbusCoreBase
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface NimbusCoreKotlinx_coroutines_coreAtomicDesc : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface NimbusCoreKotlinx_coroutines_coreOpDescriptor : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(NimbusCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : NimbusCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface NimbusCoreKtor_ioMemory : NimbusCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(NimbusCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(NimbusCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (NimbusCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (NimbusCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface NimbusCoreKtor_ioBuffer : NimbusCoreBase
- (instancetype)initWithMemory:(NimbusCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (NimbusCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(NimbusCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) NimbusCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface NimbusCoreKtor_ioChunkBuffer : NimbusCoreKtor_ioBuffer
- (instancetype)initWithMemory:(NimbusCoreKtor_ioMemory *)memory origin:(NimbusCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<NimbusCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(NimbusCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (NimbusCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (NimbusCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<NimbusCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) NimbusCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NimbusCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface NimbusCoreKtor_ioInput : NimbusCoreBase <NimbusCoreKtor_ioCloseable>
- (instancetype)initWithHead:(NimbusCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NimbusCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (NimbusCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NimbusCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(NimbusCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(NimbusCoreKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<NimbusCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<NimbusCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<NimbusCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface NimbusCoreKtor_ioByteReadPacket : NimbusCoreKtor_ioInput
- (instancetype)initWithHead:(NimbusCoreKtor_ioChunkBuffer *)head pool:(id<NimbusCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(NimbusCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NimbusCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NimbusCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (NimbusCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (NimbusCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NimbusCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol NimbusCoreKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (NimbusCoreKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol NimbusCoreKotlinSuspendFunction1 <NimbusCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol NimbusCoreKotlinAppendable
@required
- (id<NimbusCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<NimbusCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<NimbusCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface NimbusCoreKtor_httpURLBuilderCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol NimbusCoreKtor_httpParametersBuilder <NimbusCoreKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol NimbusCoreKotlinKType
@required
@property (readonly) NSArray<NimbusCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<NimbusCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol NimbusCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<NimbusCoreKotlinKClass>)kClass provider:(id<NimbusCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<NimbusCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<NimbusCoreKotlinKClass>)kClass serializer:(id<NimbusCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<NimbusCoreKotlinKClass>)baseClass actualClass:(id<NimbusCoreKotlinKClass>)actualClass actualSerializer:(id<NimbusCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<NimbusCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<NimbusCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<NimbusCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<NimbusCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<NimbusCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface NimbusCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : NimbusCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(NimbusCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NimbusCoreBoolean *(^)(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NimbusCoreBoolean *(^)(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(NimbusCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(NimbusCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : NimbusCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(NimbusCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NimbusCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface NimbusCoreKtor_ioMemoryCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface NimbusCoreKtor_ioBufferCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol NimbusCoreKtor_ioObjectPool <NimbusCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface NimbusCoreKtor_ioChunkBufferCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<NimbusCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<NimbusCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface NimbusCoreKtor_ioInputCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface NimbusCoreKtor_ioByteReadPacketCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NimbusCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface NimbusCoreKotlinKTypeProjection : NimbusCoreBase
- (instancetype)initWithVariance:(NimbusCoreKotlinKVariance * _Nullable)variance type:(id<NimbusCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NimbusCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (NimbusCoreKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NimbusCoreKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreKotlinKTypeProjection *)doCopyVariance:(NimbusCoreKotlinKVariance * _Nullable)variance type:(id<NimbusCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NimbusCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) NimbusCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NimbusCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NimbusCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NimbusCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface NimbusCoreKotlinKVariance : NimbusCoreKotlinEnum<NimbusCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NimbusCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) NimbusCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) NimbusCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (NimbusCoreKotlinArray<NimbusCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface NimbusCoreKotlinKTypeProjectionCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (NimbusCoreKotlinKTypeProjection *)contravariantType:(id<NimbusCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (NimbusCoreKotlinKTypeProjection *)covariantType:(id<NimbusCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (NimbusCoreKotlinKTypeProjection *)invariantType:(id<NimbusCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) NimbusCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
