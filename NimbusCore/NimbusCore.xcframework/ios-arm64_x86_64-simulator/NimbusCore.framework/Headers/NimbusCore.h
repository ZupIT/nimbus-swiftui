#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NimbusCoreCommonDependency, NimbusCoreServerDrivenState, NimbusCoreCommonScope, NimbusCoreServerDrivenConfig, NimbusCoreEventBuilder, NimbusCoreExpressionParser, NimbusCoreNodeBuilder, NimbusCoreUILibraryManager, NimbusCoreUILibrary, NimbusCoreNimbus, NimbusCoreViewRequest, NimbusCoreKotlinThrowable, NimbusCoreKotlinArray<T>, NimbusCoreKotlinError, NimbusCoreKotlinException, NimbusCoreKotlinRuntimeException, NimbusCoreKotlinIllegalStateException, NimbusCoreActionTriggeredEvent, NimbusCoreActionInitializedEvent, NimbusCoreKotlinUnit, NimbusCoreUILibraryManagerCompanion, NimbusCoreNamespaceName, NimbusCoreOperation, NimbusCoreStateReference, NimbusCoreStringTemplate, NimbusCoreTransition, NimbusCoreDPASymbols, NimbusCoreLiteralParser, NimbusCoreLiteral, NimbusCoreFastRegex, NimbusCoreDependencyUpdateManager, NimbusCoreServerDrivenView, NimbusCoreDynamicAction, NimbusCoreDynamicEvent, NimbusCoreMalformedJsonError, NimbusCoreRootNode, NimbusCoreDynamicNode, NimbusCoreNodeContainer, NimbusCorePropertyContainer, NimbusCoreServerDrivenRequest, NimbusCoreServerDrivenResponse, NimbusCoreNetworkError, NimbusCoreKotlinEnumCompanion, NimbusCoreKotlinEnum<E>, NimbusCoreServerDrivenHttpMethod, NimbusCoreKotlinByteArray, NimbusCoreLogLevel, NimbusCoreMatchGroups, NimbusCoreMatchGroupsDestructured, NimbusCoreKotlinNumber, NimbusCoreKotlinx_serialization_jsonJsonElement, NimbusCoreKotlinx_serialization_jsonJsonPrimitive, NimbusCoreKotlinByteIterator, NimbusCoreKotlinx_serialization_jsonJsonElementCompanion, NimbusCoreKotlinx_serialization_jsonJsonPrimitiveCompanion, NimbusCoreKotlinx_serialization_coreSerializersModule, NimbusCoreKotlinx_serialization_coreSerialKind, NimbusCoreKotlinNothing;

@protocol NimbusCoreServerDrivenAction, NimbusCoreServerDrivenEvent, NimbusCoreActionEvent, NimbusCoreScope, NimbusCoreHttpClient, NimbusCoreIdManager, NimbusCoreLogger, NimbusCoreUrlBuilder, NimbusCoreViewClient, NimbusCoreDependent, NimbusCoreDependency, NimbusCoreServerDrivenNavigator, NimbusCoreKotlinKClass, NimbusCoreExpression, NimbusCoreLazilyScoped, NimbusCoreServerDrivenNode, NimbusCoreKotlinComparable, NimbusCoreKotlinMapEntry, NimbusCoreKotlinIterator, NimbusCoreKotlinKDeclarationContainer, NimbusCoreKotlinKAnnotatedElement, NimbusCoreKotlinKClassifier, NimbusCoreKotlinx_serialization_coreKSerializer, NimbusCoreKotlinx_serialization_coreEncoder, NimbusCoreKotlinx_serialization_coreSerialDescriptor, NimbusCoreKotlinx_serialization_coreSerializationStrategy, NimbusCoreKotlinx_serialization_coreDecoder, NimbusCoreKotlinx_serialization_coreDeserializationStrategy, NimbusCoreKotlinx_serialization_coreCompositeEncoder, NimbusCoreKotlinAnnotation, NimbusCoreKotlinx_serialization_coreCompositeDecoder, NimbusCoreKotlinx_serialization_coreSerializersModuleCollector;

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

__attribute__((objc_subclassing_restricted))
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
- (void)setNewValue:(id _Nullable)newValue __attribute__((swift_name("set(newValue:)")));
- (void)setNewValue:(id _Nullable)newValue path:(NSString *)path shouldUpdateDependents:(BOOL)shouldUpdateDependents __attribute__((swift_name("set(newValue:path:shouldUpdateDependents:)")));
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

__attribute__((swift_name("LazilyScoped")))
@protocol NimbusCoreLazilyScoped
@required
- (id _Nullable)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
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

__attribute__((swift_name("Dependent")))
@protocol NimbusCoreDependent
@required
- (void)update __attribute__((swift_name("update()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Operation")))
@interface NimbusCoreOperation : NimbusCoreCommonDependency <NimbusCoreExpression, NimbusCoreDependent, NimbusCoreLazilyScoped>
- (instancetype)initWithHandler:(id _Nullable (^)(NSArray<id> *))handler arguments:(NSArray<id<NimbusCoreExpression>> *)arguments __attribute__((swift_name("init(handler:arguments:)"))) __attribute__((objc_designated_initializer));
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
- (id<NimbusCoreExpression>)parseExpressionCode:(NSString *)code __attribute__((swift_name("parseExpression(code:)")));
- (id<NimbusCoreExpression>)parseStringStringContainingExpression:(NSString *)stringContainingExpression __attribute__((swift_name("parseString(stringContainingExpression:)")));
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
- (id<NimbusCoreExpression>)parseCode:(NSString *)code __attribute__((swift_name("parse(code:)")));
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
- (NimbusCoreStringTemplate *)parseStringContainingExpression:(NSString *)stringContainingExpression __attribute__((swift_name("parse(stringContainingExpression:)")));
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
- (instancetype)initWithProperties:(NSDictionary<NSString *, id> *)properties nimbus:(NimbusCoreNimbus *)nimbus __attribute__((swift_name("init(properties:nimbus:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NimbusCorePropertyContainer *)clone __attribute__((swift_name("clone()")));
- (void)initializeScope:(id<NimbusCoreScope>)scope __attribute__((swift_name("initialize(scope:)")));
- (NSDictionary<NSString *, id> *)read __attribute__((swift_name("read()")));
- (void)update __attribute__((swift_name("update()")));
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
- (instancetype)initWithUrl:(NSString *)url method:(NimbusCoreServerDrivenHttpMethod *)method headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(id _Nullable)body fallback:(NSDictionary<NSString *, id> * _Nullable)fallback __attribute__((swift_name("init(url:method:headers:body:fallback:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreServerDrivenHttpMethod *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, id> * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NimbusCoreViewRequest *)doCopyUrl:(NSString *)url method:(NimbusCoreServerDrivenHttpMethod *)method headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers body:(id _Nullable)body fallback:(NSDictionary<NSString *, id> * _Nullable)fallback __attribute__((swift_name("doCopy(url:method:headers:body:fallback:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable fallback __attribute__((swift_name("fallback")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NimbusCoreServerDrivenHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
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
__attribute__((swift_name("ComponentDeserializer")))
@interface NimbusCoreComponentDeserializer : NimbusCoreBase
- (instancetype)initWithLogger:(id<NimbusCoreLogger>)logger node:(id<NimbusCoreServerDrivenNode>)node __attribute__((swift_name("init(logger:node:)"))) __attribute__((objc_designated_initializer));
- (void)addTypeErrorExpected:(NSString *)expected key:(NSString *)key value:(id _Nullable)value shouldUseValueInsteadOfType:(BOOL)shouldUseValueInsteadOfType __attribute__((swift_name("addTypeError(expected:key:value:shouldUseValueInsteadOfType:)")));
- (void (^)(id _Nullable))asActionKey:(NSString *)key __attribute__((swift_name("asAction(key:)")));
- (void (^ _Nullable)(id _Nullable))asActionOrNullKey:(NSString *)key __attribute__((swift_name("asActionOrNull(key:)")));
- (BOOL)asBooleanKey:(NSString *)key __attribute__((swift_name("asBoolean(key:)")));
- (NimbusCoreBoolean * _Nullable)asBooleanOrNullKey:(NSString *)key __attribute__((swift_name("asBooleanOrNull(key:)")));
- (double)asDoubleKey:(NSString *)key __attribute__((swift_name("asDouble(key:)")));
- (NimbusCoreDouble * _Nullable)asDoubleOrNullKey:(NSString *)key __attribute__((swift_name("asDoubleOrNull(key:)")));
- (NimbusCoreKotlinEnum *)asEnumKey:(NSString *)key enum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnum(key:enum:)")));
- (NimbusCoreKotlinEnum * _Nullable)asEnumOrNullKey:(NSString *)key enum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnumOrNull(key:enum:)")));
- (int32_t)asIntKey:(NSString *)key __attribute__((swift_name("asInt(key:)")));
- (NimbusCoreInt * _Nullable)asIntOrNullKey:(NSString *)key __attribute__((swift_name("asIntOrNull(key:)")));
- (NSArray<id> *)asListKey:(NSString *)key __attribute__((swift_name("asList(key:)")));
- (NSArray<id> * _Nullable)asListOrNullKey:(NSString *)key __attribute__((swift_name("asListOrNull(key:)")));
- (NSDictionary<NSString *, id> *)asMapKey:(NSString *)key __attribute__((swift_name("asMap(key:)")));
- (NSDictionary<NSString *, id> * _Nullable)asMapOrNullKey:(NSString *)key __attribute__((swift_name("asMapOrNull(key:)")));
- (NSString *)asStringKey:(NSString *)key __attribute__((swift_name("asString(key:)")));
- (NSString * _Nullable)asStringOrNullKey:(NSString *)key __attribute__((swift_name("asStringOrNull(key:)")));
- (BOOL)end __attribute__((swift_name("end()")));
- (BOOL)enterKey:(NSString *)key nullable:(BOOL)nullable __attribute__((swift_name("enter(key:nullable:)")));
- (BOOL)leave __attribute__((swift_name("leave()")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) id<NimbusCoreLogger> logger __attribute__((swift_name("logger")));
@property (readonly) id<NimbusCoreServerDrivenNode> node __attribute__((swift_name("node")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapDeserializer")))
@interface NimbusCoreMapDeserializer : NimbusCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addTypeErrorExpected:(NSString *)expected key:(NSString *)key value:(id _Nullable)value shouldUseValueInsteadOfType:(BOOL)shouldUseValueInsteadOfType __attribute__((swift_name("addTypeError(expected:key:value:shouldUseValueInsteadOfType:)")));
- (void (^)(id _Nullable))asActionKey:(NSString *)key __attribute__((swift_name("asAction(key:)")));
- (void (^ _Nullable)(id _Nullable))asActionOrNullKey:(NSString *)key __attribute__((swift_name("asActionOrNull(key:)")));
- (BOOL)asBooleanKey:(NSString *)key __attribute__((swift_name("asBoolean(key:)")));
- (NimbusCoreBoolean * _Nullable)asBooleanOrNullKey:(NSString *)key __attribute__((swift_name("asBooleanOrNull(key:)")));
- (double)asDoubleKey:(NSString *)key __attribute__((swift_name("asDouble(key:)")));
- (NimbusCoreDouble * _Nullable)asDoubleOrNullKey:(NSString *)key __attribute__((swift_name("asDoubleOrNull(key:)")));
- (NimbusCoreKotlinEnum *)asEnumKey:(NSString *)key enum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnum(key:enum:)")));
- (NimbusCoreKotlinEnum * _Nullable)asEnumOrNullKey:(NSString *)key enum:(NimbusCoreKotlinArray<NimbusCoreKotlinEnum *> *)enum_ __attribute__((swift_name("asEnumOrNull(key:enum:)")));
- (int32_t)asIntKey:(NSString *)key __attribute__((swift_name("asInt(key:)")));
- (NimbusCoreInt * _Nullable)asIntOrNullKey:(NSString *)key __attribute__((swift_name("asIntOrNull(key:)")));
- (NSArray<id> *)asListKey:(NSString *)key __attribute__((swift_name("asList(key:)")));
- (NSArray<id> * _Nullable)asListOrNullKey:(NSString *)key __attribute__((swift_name("asListOrNull(key:)")));
- (NSDictionary<NSString *, id> *)asMapKey:(NSString *)key __attribute__((swift_name("asMap(key:)")));
- (NSDictionary<NSString *, id> * _Nullable)asMapOrNullKey:(NSString *)key __attribute__((swift_name("asMapOrNull(key:)")));
- (NSString *)asStringKey:(NSString *)key __attribute__((swift_name("asString(key:)")));
- (NSString * _Nullable)asStringOrNullKey:(NSString *)key __attribute__((swift_name("asStringOrNull(key:)")));
- (NSArray<NSString *> *)end __attribute__((swift_name("end()")));
- (BOOL)enterKey:(NSString *)key nullable:(BOOL)nullable __attribute__((swift_name("enter(key:nullable:)")));
- (BOOL)leave __attribute__((swift_name("leave()")));
- (void)startMap:(NSDictionary<NSString *, id> * _Nullable)map __attribute__((swift_name("start(map:)")));
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
- (int32_t)compareToNumber:(id)number __attribute__((swift_name("compareTo(number:)")));
- (id)divNumber:(id)number __attribute__((swift_name("div(number:)")));
- (void)divAssignNumber:(id)number __attribute__((swift_name("divAssign(number:)")));
- (id)minusNumber:(id)number __attribute__((swift_name("minus(number:)")));
- (void)minusAssignNumber:(id)number __attribute__((swift_name("minusAssign(number:)")));
- (id)plusNumber:(id)number __attribute__((swift_name("plus(number:)")));
- (void)plusAssignNumber:(id)number __attribute__((swift_name("plusAssign(number:)")));
- (id)remNumber:(id)number __attribute__((swift_name("rem(number:)")));
- (void)remAssignNumber:(id)number __attribute__((swift_name("remAssign(number:)")));
- (id)timesNumber:(id)number __attribute__((swift_name("times(number:)")));
- (void)timesAssignNumber:(id)number __attribute__((swift_name("timesAssign(number:)")));
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
__attribute__((swift_name("ScopeKt")))
@interface NimbusCoreScopeKt : NimbusCoreBase
+ (NimbusCoreServerDrivenState * _Nullable)closestState:(id<NimbusCoreScope>)receiver id:(NSString *)id __attribute__((swift_name("closestState(_:id:)")));
+ (NSString *)getPathToScope:(id<NimbusCoreScope>)receiver __attribute__((swift_name("getPathToScope(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUILibraryKt")))
@interface NimbusCoreCoreUILibraryKt : NimbusCoreBase
@property (class, readonly) NimbusCoreUILibrary *coreUILibrary __attribute__((swift_name("coreUILibrary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerDrivenNodeKt")))
@interface NimbusCoreServerDrivenNodeKt : NimbusCoreBase
+ (id<NimbusCoreServerDrivenNode> _Nullable)findNodeById:(id<NimbusCoreServerDrivenNode>)receiver id:(NSString *)id __attribute__((swift_name("findNodeById(_:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientKt")))
@interface NimbusCoreHttpClientKt : NimbusCoreBase
@property (class, readonly) int32_t FIRST_BAD_STATUS __attribute__((swift_name("FIRST_BAD_STATUS")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NimbusCoreKotlinEnumCompanion : NimbusCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NimbusCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
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

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
