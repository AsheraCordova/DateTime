//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-ios-widgets\IOSDateTimePlugin\src\main\java\com\ashera\datetime\TimePickerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_TimePickerImpl")
#ifdef RESTRICT_TimePickerImpl
#define INCLUDE_ALL_TimePickerImpl 0
#else
#define INCLUDE_ALL_TimePickerImpl 1
#endif
#undef RESTRICT_TimePickerImpl

#if !defined (ASTimePickerImpl_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl))
#define ASTimePickerImpl_

#define RESTRICT_BaseHasWidgets 1
#define INCLUDE_ASBaseHasWidgets 1
#include "BaseHasWidgets.h"

#define RESTRICT_FormElement 1
#define INCLUDE_ASFormElement 1
#include "FormElement.h"

@class ASTimePickerImpl_TimePickerBean;
@class ASTimePickerImpl_TimePickerCommandBuilder;
@class ASTimePickerImpl_TimePickerCommandParamsBuilder;
@class ASTimePickerImpl_TimePickerParamsBean;
@class ASWidgetAttribute;
@class IOSClass;
@protocol ASIFragment;
@protocol ASILifeCycleDecorator;
@protocol ASIWidget;
@protocol JavaUtilMap;

@interface ASTimePickerImpl : ASBaseHasWidgets < ASFormElement >
@property id uiView;
@property id datepicker;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)localname;

- (instancetype)initWithNSString:(NSString *)groupName
                    withNSString:(NSString *)localname;

- (void)addWithASIWidget:(id<ASIWidget>)w
                 withInt:(jint)index;

- (id)asNativeWidget;

- (id)asWidget;

- (jboolean)checkIosVersionWithNSString:(NSString *)v;

- (void)createWithASIFragment:(id<ASIFragment>)fragment
              withJavaUtilMap:(id<JavaUtilMap>)params;

- (void)focus;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
              withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (ASTimePickerImpl_TimePickerBean *)getBean;

- (ASTimePickerImpl_TimePickerCommandBuilder *)getBuilder;

- (id)getChildAttributeWithASIWidget:(id<ASIWidget>)w
               withASWidgetAttribute:(ASWidgetAttribute *)key;

- (ASTimePickerImpl_TimePickerParamsBean *)getParamsBean;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)getParamsBuilder;

- (id)getPluginWithNSString:(NSString *)plugin;

- (NSString *)getTextEntered;

- (IOSClass *)getViewClass;

- (void)initTimePicker OBJC_METHOD_FAMILY_NONE;

- (void)invalidate;

- (jboolean)isViewVisible;

- (void)loadAttributesWithNSString:(NSString *)localName;

- (void)nativeCreateView;

- (id<ASIWidget>)newInstance OBJC_METHOD_FAMILY_NONE;

- (jboolean)removeWithInt:(jint)index;

- (jboolean)removeWithASIWidget:(id<ASIWidget>)w;

- (void)requestLayout;

- (void)resetError;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue
                withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (void)setChildAttributeWithASIWidget:(id<ASIWidget>)w
                 withASWidgetAttribute:(ASWidgetAttribute *)key
                          withNSString:(NSString *)strValue
                                withId:(id)objValue;

- (void)setIdWithNSString:(NSString *)id_;

- (void)setVisibleWithBoolean:(jboolean)b;

- (void)showErrorWithNSString:(NSString *)message;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl)

inline NSString *ASTimePickerImpl_get_LOCAL_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASTimePickerImpl_LOCAL_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASTimePickerImpl, LOCAL_NAME, NSString *)

inline NSString *ASTimePickerImpl_get_GROUP_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASTimePickerImpl_GROUP_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASTimePickerImpl, GROUP_NAME, NSString *)

FOUNDATION_EXPORT void ASTimePickerImpl_init(ASTimePickerImpl *self);

FOUNDATION_EXPORT ASTimePickerImpl *new_ASTimePickerImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl *create_ASTimePickerImpl_init(void);

FOUNDATION_EXPORT void ASTimePickerImpl_initWithNSString_(ASTimePickerImpl *self, NSString *localname);

FOUNDATION_EXPORT ASTimePickerImpl *new_ASTimePickerImpl_initWithNSString_(NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl *create_ASTimePickerImpl_initWithNSString_(NSString *localname);

FOUNDATION_EXPORT void ASTimePickerImpl_initWithNSString_withNSString_(ASTimePickerImpl *self, NSString *groupName, NSString *localname);

FOUNDATION_EXPORT ASTimePickerImpl *new_ASTimePickerImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl *create_ASTimePickerImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl)

@compatibility_alias ComAsheraDatetimeTimePickerImpl ASTimePickerImpl;

#endif

#if !defined (ASTimePickerImpl_TimePickerExt_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl_TimePickerExt))
#define ASTimePickerImpl_TimePickerExt_

#define RESTRICT_TimePicker 1
#define INCLUDE_ASTimePicker 1
#include "TimePicker.h"

#define RESTRICT_ILifeCycleDecorator 1
#define INCLUDE_ASILifeCycleDecorator 1
#include "ILifeCycleDecorator.h"

#define RESTRICT_IMaxDimension 1
#define INCLUDE_ASIMaxDimension 1
#include "IMaxDimension.h"

@class ADRect;
@class ADView;
@class ASTimePickerImpl;
@class ASWidgetAttribute;
@class IOSIntArray;
@class IOSObjectArray;
@protocol ASIWidget;
@protocol JavaUtilList;

@interface ASTimePickerImpl_TimePickerExt : ASTimePicker < ASILifeCycleDecorator, ASIMaxDimension >

#pragma mark Public

- (instancetype)initWithASTimePickerImpl:(ASTimePickerImpl *)outer$;

- (void)drawableStateChanged;

- (void)endViewTransitionWithADView:(ADView *)view;

- (void)executeWithNSString:(NSString *)method
          withNSObjectArray:(IOSObjectArray *)canvas;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute;

- (void)getLocationOnScreenWithIntArray:(IOSIntArray *)appScreenLocation;

- (jint)getMaxHeight;

- (jint)getMaxWidth;

- (id<JavaUtilList>)getMethods;

- (id<ASIWidget>)getWidget;

- (void)getWindowVisibleDisplayFrameWithADRect:(ADRect *)displayFrame;

- (ADView *)inflateViewWithNSString:(NSString *)layout;

- (void)initialized OBJC_METHOD_FAMILY_NONE;

- (id<ASILifeCycleDecorator>)newInstanceWithASIWidget:(id<ASIWidget>)widget OBJC_METHOD_FAMILY_NONE;

- (void)offsetLeftAndRightWithInt:(jint)offset;

- (void)offsetTopAndBottomWithInt:(jint)offset;

- (void)onMeasureWithInt:(jint)widthMeasureSpec
                 withInt:(jint)heightMeasureSpec;

- (void)remeasure;

- (void)removeFromParent;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue;

- (void)setMaxHeightWithInt:(jint)height;

- (void)setMaxWidthWithInt:(jint)width;

- (void)setMyAttributeWithNSString:(NSString *)name
                            withId:(id)value;

- (void)setState0WithId:(id)value;

- (void)setState1WithId:(id)value;

- (void)setState2WithId:(id)value;

- (void)setState3WithId:(id)value;

- (void)setState4WithId:(id)value;

- (void)setVisibilityWithInt:(jint)visibility;

- (void)state0;

- (void)state1;

- (void)state2;

- (void)state3;

- (void)state4;

- (void)stateNo;

- (void)stateYes;

- (void)updateMeasuredDimensionWithInt:(jint)width
                               withInt:(jint)height;

#pragma mark Protected

- (void)onLayoutWithBoolean:(jboolean)changed
                    withInt:(jint)l
                    withInt:(jint)t
                    withInt:(jint)r
                    withInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl_TimePickerExt)

FOUNDATION_EXPORT void ASTimePickerImpl_TimePickerExt_initWithASTimePickerImpl_(ASTimePickerImpl_TimePickerExt *self, ASTimePickerImpl *outer$);

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerExt *new_ASTimePickerImpl_TimePickerExt_initWithASTimePickerImpl_(ASTimePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerExt *create_ASTimePickerImpl_TimePickerExt_initWithASTimePickerImpl_(ASTimePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl_TimePickerExt)

#endif

#if !defined (ASTimePickerImpl_TimePickerCommandBuilder_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl_TimePickerCommandBuilder))
#define ASTimePickerImpl_TimePickerCommandBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandBuilder 1
#include "ViewGroupImpl.h"

@class ASTimePickerImpl;

@interface ASTimePickerImpl_TimePickerCommandBuilder : ASViewGroupImpl_ViewGroupCommandBuilder

#pragma mark Public

- (instancetype)initWithASTimePickerImpl:(ASTimePickerImpl *)outer$;

- (ASTimePickerImpl_TimePickerCommandBuilder *)addAllModelWithId:(id)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)addModelByIndexWithId:(id)arg0
                                                              withId:(id)arg1;

- (ASTimePickerImpl_TimePickerCommandBuilder *)addModelWithId:(id)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)animatorXmlWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)endAnimator;

- (ASTimePickerImpl_TimePickerCommandBuilder *)executeWithBoolean:(jboolean)setter;

- (id)getHint;

- (id)getText;

- (ASTimePickerImpl_TimePickerCommandBuilder *)invalidate;

- (ASTimePickerImpl_TimePickerCommandBuilder *)notifyDataSetChangedWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)refreshUiFromModelWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)removeModelAtIndexWithInt:(jint)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)removeModelByIdWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)requestLayout;

- (ASTimePickerImpl_TimePickerCommandBuilder *)reset;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setAddStatesFromChildrenWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setAlphaWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setAsDragSourceWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setAttributeUnderTestWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setBackgroundRepeatWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setBackgroundTintModeWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setBackgroundTintWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setBackgroundWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setChildXmlWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setClickableWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setClipChildrenWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setClipToPaddingWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setContentDescriptionWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setCustomErrorMessageKeysWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setCustomErrorMessageValuesWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setDuplicateParentStateWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setElevationWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setEnabledWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setErrorStyleWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setFocusableWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setForegroundGravityWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setForegroundRepeatWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setForegroundTintModeWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setForegroundTintWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setForegroundWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setHintWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setHintTextFormatWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIdWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setInvalidateOnFrameChangeWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAccessibilityHintWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAccessibilityIgnoresInvertColorsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAccessibilityLabelWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAccessibilityTraitsWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAccessibilityValueWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAlphaWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosAutoresizesSubviewsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosBackgroundColorWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosClearsContextBeforeDrawingWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosClipsToBoundsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosContentScaleFactorWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosInsetsLayoutMarginsFromSafeAreaWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsAccessibilityElementWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsExclusiveTouchWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsHiddenWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsMultipleTouchEnabledWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsOpaqueWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosIsUserInteractionEnabledWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLargeContentImageWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLargeContentTitleWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLayerBorderColorWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLayerBorderWidthWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLayerCornerRadiusWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosLayerMasksToBoundsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosPreservesSuperviewLayoutMarginsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosRestorationIdentifierWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosScalesLargeContentImageWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosShowsLargeContentViewerWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosTagWithInt:(jint)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosTintColorWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setIosTranslatesAutoresizingMaskIntoConstraintsWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setKeepScreenOnWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setLayoutDirectionWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setLayoutModeWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setListitemWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setLongClickableWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setMaxHeightWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setMaxWidthWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setMinHeightWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setMinWidthWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelDescPathWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelForWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelIdPathWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelParamWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelPojoToUiParamsWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelPojoToUiWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelSyncEventsWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelUiToPojoEventIdsWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setModelUiToPojoWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnafterTextChangeWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnAnimationCancelWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnAnimationEndWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnAnimationRepeatWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnAnimationStartWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnbeforeTextChangeWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnChildViewAddedWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnChildViewRemovedWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnClickWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnDragWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnKeyWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnLongClickWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnSwipedWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnTextChangeWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOnTouchWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setOutsideTouchableWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingBottomWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingEndWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingHorizontalWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingLeftWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingRightWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingStartWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingTopWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingVerticalWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setPaddingWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setRotationWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setRotationXWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setRotationYWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setScaleXWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setScaleYWithFloat:(jfloat)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setSelectedWithBoolean:(jboolean)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setStyleWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTextWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTextAlignmentWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTextDirectionWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTimeFormatWithNSString:(NSString *)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTransformPivotXWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTransformPivotYWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTranslationXWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTranslationYWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setTranslationZWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_maxlengthWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_maxWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_minlengthWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_minWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_patternWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_requiredWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setV_typeWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setValidationErrorDisplayTypeWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setValidationWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setVisibilityWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)setZIndexWithInt:(jint)arg0;

- (ASTimePickerImpl_TimePickerCommandBuilder *)showClearButtonWithBoolean:(jboolean)value;

- (ASTimePickerImpl_TimePickerCommandBuilder *)startAnimator;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetAddStatesFromChildren;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetAlpha;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetBackground;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetBackgroundTint;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetBackgroundTintMode;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetClickable;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetClipChildren;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetClipToPadding;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetContentDescription;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetDuplicateParentState;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetEnabled;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetFocusable;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetForeground;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetForegroundGravity;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetForegroundTint;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetForegroundTintMode;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetHint;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetId;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAccessibilityHint;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAccessibilityIgnoresInvertColors;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAccessibilityLabel;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAccessibilityTraits;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAccessibilityValue;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAlpha;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosAutoresizesSubviews;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosBackgroundColor;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosClearsContextBeforeDrawing;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosClipsToBounds;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosContentScaleFactor;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosInsetsLayoutMarginsFromSafeArea;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsAccessibilityElement;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsExclusiveTouch;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsFocused;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsHidden;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsMultipleTouchEnabled;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsOpaque;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosIsUserInteractionEnabled;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosLargeContentImage;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosLargeContentTitle;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosPreservesSuperviewLayoutMargins;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosRestorationIdentifier;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosScalesLargeContentImage;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosShowsLargeContentViewer;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosTag;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosTintColor;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetIosTranslatesAutoresizingMaskIntoConstraints;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetKeepScreenOn;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetLayoutDirection;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetLayoutMode;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetLongClickable;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetMaxHeight;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetMaxWidth;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetMinHeight;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetMinWidth;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelDescPath;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelIdPath;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelParam;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelPojoToUi;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelSyncEvents;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetModelUiToPojo;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingBottom;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingEnd;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingLeft;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingRight;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingStart;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetPaddingTop;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetRotation;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetRotationX;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetRotationY;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetScaleX;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetScaleY;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetSelected;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetText;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTextAlignment;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTextDirection;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTransformPivotX;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTransformPivotY;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTranslationX;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTranslationY;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetTranslationZ;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetValidateForm;

- (ASTimePickerImpl_TimePickerCommandBuilder *)tryGetVisibility;

- (ASTimePickerImpl_TimePickerCommandBuilder *)updateModelDataWithNSString:(NSString *)arg0
                                                                    withId:(id)arg1;

- (ASTimePickerImpl_TimePickerCommandBuilder *)validateFormWithNSString:(NSString *)arg0;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl_TimePickerCommandBuilder)

FOUNDATION_EXPORT void ASTimePickerImpl_TimePickerCommandBuilder_initWithASTimePickerImpl_(ASTimePickerImpl_TimePickerCommandBuilder *self, ASTimePickerImpl *outer$);

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerCommandBuilder *new_ASTimePickerImpl_TimePickerCommandBuilder_initWithASTimePickerImpl_(ASTimePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerCommandBuilder *create_ASTimePickerImpl_TimePickerCommandBuilder_initWithASTimePickerImpl_(ASTimePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl_TimePickerCommandBuilder)

#endif

#if !defined (ASTimePickerImpl_TimePickerBean_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl_TimePickerBean))
#define ASTimePickerImpl_TimePickerBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupBean 1
#include "ViewGroupImpl.h"

@class ASTimePickerImpl;
@protocol ASIWidget;

@interface ASTimePickerImpl_TimePickerBean : ASViewGroupImpl_ViewGroupBean

#pragma mark Public

- (instancetype)initWithASTimePickerImpl:(ASTimePickerImpl *)outer$;

- (id)getHint;

- (id)getText;

- (void)setHintWithNSString:(NSString *)value;

- (void)setHintTextFormatWithNSString:(NSString *)value;

- (void)setOnafterTextChangeWithNSString:(NSString *)value;

- (void)setOnbeforeTextChangeWithNSString:(NSString *)value;

- (void)setOnTextChangeWithNSString:(NSString *)value;

- (void)setTextWithNSString:(NSString *)value;

- (void)setTimeFormatWithNSString:(NSString *)value;

- (void)showClearButtonWithBoolean:(jboolean)value;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithASIWidget:(id<ASIWidget>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl_TimePickerBean)

FOUNDATION_EXPORT void ASTimePickerImpl_TimePickerBean_initWithASTimePickerImpl_(ASTimePickerImpl_TimePickerBean *self, ASTimePickerImpl *outer$);

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerBean *new_ASTimePickerImpl_TimePickerBean_initWithASTimePickerImpl_(ASTimePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerBean *create_ASTimePickerImpl_TimePickerBean_initWithASTimePickerImpl_(ASTimePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl_TimePickerBean)

#endif

#if !defined (ASTimePickerImpl_TimePickerParamsBean_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl_TimePickerParamsBean))
#define ASTimePickerImpl_TimePickerParamsBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupParamsBean 1
#include "ViewGroupImpl.h"

@class ASTimePickerImpl;

@interface ASTimePickerImpl_TimePickerParamsBean : ASViewGroupImpl_ViewGroupParamsBean

#pragma mark Public

- (instancetype)initWithASTimePickerImpl:(ASTimePickerImpl *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl_TimePickerParamsBean)

FOUNDATION_EXPORT void ASTimePickerImpl_TimePickerParamsBean_initWithASTimePickerImpl_(ASTimePickerImpl_TimePickerParamsBean *self, ASTimePickerImpl *outer$);

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerParamsBean *new_ASTimePickerImpl_TimePickerParamsBean_initWithASTimePickerImpl_(ASTimePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerParamsBean *create_ASTimePickerImpl_TimePickerParamsBean_initWithASTimePickerImpl_(ASTimePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl_TimePickerParamsBean)

#endif

#if !defined (ASTimePickerImpl_TimePickerCommandParamsBuilder_) && (INCLUDE_ALL_TimePickerImpl || defined(INCLUDE_ASTimePickerImpl_TimePickerCommandParamsBuilder))
#define ASTimePickerImpl_TimePickerCommandParamsBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandParamsBuilder 1
#include "ViewGroupImpl.h"

@class ASTimePickerImpl;

@interface ASTimePickerImpl_TimePickerCommandParamsBuilder : ASViewGroupImpl_ViewGroupCommandParamsBuilder

#pragma mark Public

- (instancetype)initWithASTimePickerImpl:(ASTimePickerImpl *)outer$;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)reset;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginBottomWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginEndWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginHorizontalWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginLeftWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginRightWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginStartWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginTopWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginVerticalWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)setLayoutMarginWithNSString:(NSString *)arg0;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginBottom;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginEnd;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginLeft;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginRight;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginStart;

- (ASTimePickerImpl_TimePickerCommandParamsBuilder *)tryGetLayoutMarginTop;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASTimePickerImpl_TimePickerCommandParamsBuilder)

FOUNDATION_EXPORT void ASTimePickerImpl_TimePickerCommandParamsBuilder_initWithASTimePickerImpl_(ASTimePickerImpl_TimePickerCommandParamsBuilder *self, ASTimePickerImpl *outer$);

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerCommandParamsBuilder *new_ASTimePickerImpl_TimePickerCommandParamsBuilder_initWithASTimePickerImpl_(ASTimePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASTimePickerImpl_TimePickerCommandParamsBuilder *create_ASTimePickerImpl_TimePickerCommandParamsBuilder_initWithASTimePickerImpl_(ASTimePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASTimePickerImpl_TimePickerCommandParamsBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_TimePickerImpl")
