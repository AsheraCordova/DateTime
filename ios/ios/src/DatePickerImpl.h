//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-ios-widgets\IOSDateTimePlugin\src\main\java\com\ashera\datetime\DatePickerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_DatePickerImpl")
#ifdef RESTRICT_DatePickerImpl
#define INCLUDE_ALL_DatePickerImpl 0
#else
#define INCLUDE_ALL_DatePickerImpl 1
#endif
#undef RESTRICT_DatePickerImpl

#if !defined (ASDatePickerImpl_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl))
#define ASDatePickerImpl_

#define RESTRICT_BaseHasWidgets 1
#define INCLUDE_ASBaseHasWidgets 1
#include "BaseHasWidgets.h"

#define RESTRICT_FormElement 1
#define INCLUDE_ASFormElement 1
#include "FormElement.h"

@class ASDatePickerImpl_DatePickerBean;
@class ASDatePickerImpl_DatePickerCommandBuilder;
@class ASDatePickerImpl_DatePickerCommandParamsBuilder;
@class ASDatePickerImpl_DatePickerParamsBean;
@class ASWidgetAttribute;
@class IOSClass;
@protocol ASIFragment;
@protocol ASILifeCycleDecorator;
@protocol ASIWidget;
@protocol JavaUtilMap;

@interface ASDatePickerImpl : ASBaseHasWidgets < ASFormElement >
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

- (ASDatePickerImpl_DatePickerBean *)getBean;

- (ASDatePickerImpl_DatePickerCommandBuilder *)getBuilder;

- (id)getChildAttributeWithASIWidget:(id<ASIWidget>)w
               withASWidgetAttribute:(ASWidgetAttribute *)key;

- (ASDatePickerImpl_DatePickerParamsBean *)getParamsBean;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)getParamsBuilder;

- (id)getPluginWithNSString:(NSString *)plugin;

- (NSString *)getTextEntered;

- (IOSClass *)getViewClass;

- (void)initDatePicker OBJC_METHOD_FAMILY_NONE;

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

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl)

inline NSString *ASDatePickerImpl_get_LOCAL_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASDatePickerImpl_LOCAL_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASDatePickerImpl, LOCAL_NAME, NSString *)

inline NSString *ASDatePickerImpl_get_GROUP_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASDatePickerImpl_GROUP_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASDatePickerImpl, GROUP_NAME, NSString *)

FOUNDATION_EXPORT void ASDatePickerImpl_init(ASDatePickerImpl *self);

FOUNDATION_EXPORT ASDatePickerImpl *new_ASDatePickerImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl *create_ASDatePickerImpl_init(void);

FOUNDATION_EXPORT void ASDatePickerImpl_initWithNSString_(ASDatePickerImpl *self, NSString *localname);

FOUNDATION_EXPORT ASDatePickerImpl *new_ASDatePickerImpl_initWithNSString_(NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl *create_ASDatePickerImpl_initWithNSString_(NSString *localname);

FOUNDATION_EXPORT void ASDatePickerImpl_initWithNSString_withNSString_(ASDatePickerImpl *self, NSString *groupName, NSString *localname);

FOUNDATION_EXPORT ASDatePickerImpl *new_ASDatePickerImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl *create_ASDatePickerImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl)

@compatibility_alias ComAsheraDatetimeDatePickerImpl ASDatePickerImpl;

#endif

#if !defined (ASDatePickerImpl_DatePickerExt_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl_DatePickerExt))
#define ASDatePickerImpl_DatePickerExt_

#define RESTRICT_DatePicker 1
#define INCLUDE_ASDatePicker 1
#include "DatePicker.h"

#define RESTRICT_ILifeCycleDecorator 1
#define INCLUDE_ASILifeCycleDecorator 1
#include "ILifeCycleDecorator.h"

#define RESTRICT_IMaxDimension 1
#define INCLUDE_ASIMaxDimension 1
#include "IMaxDimension.h"

@class ADRect;
@class ADView;
@class ASDatePickerImpl;
@class ASWidgetAttribute;
@class IOSIntArray;
@class IOSObjectArray;
@protocol ASIWidget;
@protocol JavaUtilList;

@interface ASDatePickerImpl_DatePickerExt : ASDatePicker < ASILifeCycleDecorator, ASIMaxDimension >

#pragma mark Public

- (instancetype)initWithASDatePickerImpl:(ASDatePickerImpl *)outer$;

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

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl_DatePickerExt)

FOUNDATION_EXPORT void ASDatePickerImpl_DatePickerExt_initWithASDatePickerImpl_(ASDatePickerImpl_DatePickerExt *self, ASDatePickerImpl *outer$);

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerExt *new_ASDatePickerImpl_DatePickerExt_initWithASDatePickerImpl_(ASDatePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerExt *create_ASDatePickerImpl_DatePickerExt_initWithASDatePickerImpl_(ASDatePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl_DatePickerExt)

#endif

#if !defined (ASDatePickerImpl_DatePickerCommandBuilder_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl_DatePickerCommandBuilder))
#define ASDatePickerImpl_DatePickerCommandBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandBuilder 1
#include "ViewGroupImpl.h"

@class ASDatePickerImpl;

@interface ASDatePickerImpl_DatePickerCommandBuilder : ASViewGroupImpl_ViewGroupCommandBuilder

#pragma mark Public

- (instancetype)initWithASDatePickerImpl:(ASDatePickerImpl *)outer$;

- (ASDatePickerImpl_DatePickerCommandBuilder *)addAllModelWithId:(id)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)addModelByIndexWithId:(id)arg0
                                                              withId:(id)arg1;

- (ASDatePickerImpl_DatePickerCommandBuilder *)addModelWithId:(id)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)animatorXmlWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)endAnimator;

- (ASDatePickerImpl_DatePickerCommandBuilder *)executeWithBoolean:(jboolean)setter;

- (id)getHint;

- (id)getText;

- (ASDatePickerImpl_DatePickerCommandBuilder *)invalidate;

- (ASDatePickerImpl_DatePickerCommandBuilder *)notifyDataSetChangedWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)refreshUiFromModelWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)removeModelAtIndexWithInt:(jint)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)removeModelByIdWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)requestLayout;

- (ASDatePickerImpl_DatePickerCommandBuilder *)reset;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAddStatesFromChildrenWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAlphaWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAnimateLayoutChangesWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAnimateParentHierarchyWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAsDragSourceWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setAttributeUnderTestWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setBackgroundRepeatWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setBackgroundTintModeWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setBackgroundTintWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setBackgroundWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setBottomWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setChildXmlWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setClickableWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setClipChildrenWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setClipToPaddingWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setContentDescriptionWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setCustomErrorMessageKeysWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setCustomErrorMessageValuesWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setDateFormatWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setDuplicateParentStateWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setElevationWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setEnabledWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setErrorStyleWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setFocusableWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setForegroundGravityWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setForegroundRepeatWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setForegroundTintModeWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setForegroundTintWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setForegroundWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setHintWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setHintTextFormatWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIdWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setInvalidateOnFrameChangeWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAccessibilityHintWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAccessibilityIgnoresInvertColorsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAccessibilityLabelWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAccessibilityTraitsWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAccessibilityValueWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAlphaWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosAutoresizesSubviewsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosBackgroundColorWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosClearsContextBeforeDrawingWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosClipsToBoundsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosContentScaleFactorWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosInsetsLayoutMarginsFromSafeAreaWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsAccessibilityElementWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsExclusiveTouchWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsHiddenWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsMultipleTouchEnabledWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsOpaqueWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosIsUserInteractionEnabledWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLargeContentImageWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLargeContentTitleWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLayerBorderColorWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLayerBorderWidthWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLayerCornerRadiusWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosLayerMasksToBoundsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosPreservesSuperviewLayoutMarginsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosRestorationIdentifierWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosScalesLargeContentImageWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosShowsLargeContentViewerWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosTagWithInt:(jint)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosTintColorWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setIosTranslatesAutoresizingMaskIntoConstraintsWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setKeepScreenOnWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLayoutDirectionWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLayoutModeWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLayoutTransitionDurationWithInt:(jint)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLayoutTransitionWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLeftWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setListitemWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setLongClickableWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMaxDateTodayWithBoolean:(jboolean)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMaxHeightWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMaxWidthWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMinDateTodayWithBoolean:(jboolean)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMinHeightWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setMinWidthWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelDescPathWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelForWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelIdPathWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelParamWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelPojoToUiParamsWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelPojoToUiWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelSyncEventsWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelUiToPojoEventIdsWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setModelUiToPojoWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnafterTextChangeWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnAnimationCancelWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnAnimationEndWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnAnimationRepeatWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnAnimationStartWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnbeforeTextChangeWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnChildViewAddedWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnChildViewRemovedWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnClickWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnDragWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnKeyWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnLongClickWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnSwipedWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnTextChangeWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOnTouchWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setOutsideTouchableWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingBottomWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingEndWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingHorizontalWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingLeftWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingRightWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingStartWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingTopWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingVerticalWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setPaddingWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setRightWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setRotationWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setRotationXWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setRotationYWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setScaleXWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setScaleYWithFloat:(jfloat)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setSelectedWithBoolean:(jboolean)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setStyleWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTextWithNSString:(NSString *)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTextAlignmentWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTextDirectionWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTopWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTransformPivotXWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTransformPivotYWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTranslationXWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTranslationYWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setTranslationZWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_maxlengthWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_maxWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_minlengthWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_minWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_patternWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_requiredWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setV_typeWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setValidationErrorDisplayTypeWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setValidationWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setVisibilityWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)setZIndexWithInt:(jint)arg0;

- (ASDatePickerImpl_DatePickerCommandBuilder *)showClearButtonWithBoolean:(jboolean)value;

- (ASDatePickerImpl_DatePickerCommandBuilder *)startAnimator;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetAddStatesFromChildren;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetAlpha;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetBackground;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetBackgroundTint;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetBackgroundTintMode;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetBottom;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetClickable;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetClipChildren;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetClipToPadding;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetContentDescription;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetDuplicateParentState;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetEnabled;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetFocusable;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetForeground;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetForegroundGravity;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetForegroundTint;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetForegroundTintMode;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetHint;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetId;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAccessibilityHint;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAccessibilityIgnoresInvertColors;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAccessibilityLabel;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAccessibilityTraits;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAccessibilityValue;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAlpha;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosAutoresizesSubviews;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosBackgroundColor;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosClearsContextBeforeDrawing;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosClipsToBounds;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosContentScaleFactor;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosInsetsLayoutMarginsFromSafeArea;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsAccessibilityElement;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsExclusiveTouch;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsFocused;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsHidden;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsMultipleTouchEnabled;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsOpaque;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosIsUserInteractionEnabled;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosLargeContentImage;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosLargeContentTitle;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosPreservesSuperviewLayoutMargins;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosRestorationIdentifier;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosScalesLargeContentImage;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosShowsLargeContentViewer;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosTag;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosTintColor;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetIosTranslatesAutoresizingMaskIntoConstraints;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetKeepScreenOn;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetLayoutDirection;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetLayoutMode;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetLeft;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetLongClickable;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetMaxHeight;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetMaxWidth;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetMinHeight;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetMinWidth;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelDescPath;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelIdPath;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelParam;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelPojoToUi;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelSyncEvents;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetModelUiToPojo;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingBottom;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingEnd;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingLeft;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingRight;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingStart;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetPaddingTop;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetRight;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetRotation;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetRotationX;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetRotationY;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetScaleX;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetScaleY;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetSelected;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetText;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTextAlignment;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTextDirection;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTop;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTransformPivotX;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTransformPivotY;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTranslationX;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTranslationY;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetTranslationZ;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetValidateForm;

- (ASDatePickerImpl_DatePickerCommandBuilder *)tryGetVisibility;

- (ASDatePickerImpl_DatePickerCommandBuilder *)updateModelDataWithNSString:(NSString *)arg0
                                                                    withId:(id)arg1;

- (ASDatePickerImpl_DatePickerCommandBuilder *)validateFormWithNSString:(NSString *)arg0;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl_DatePickerCommandBuilder)

FOUNDATION_EXPORT void ASDatePickerImpl_DatePickerCommandBuilder_initWithASDatePickerImpl_(ASDatePickerImpl_DatePickerCommandBuilder *self, ASDatePickerImpl *outer$);

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerCommandBuilder *new_ASDatePickerImpl_DatePickerCommandBuilder_initWithASDatePickerImpl_(ASDatePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerCommandBuilder *create_ASDatePickerImpl_DatePickerCommandBuilder_initWithASDatePickerImpl_(ASDatePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl_DatePickerCommandBuilder)

#endif

#if !defined (ASDatePickerImpl_DatePickerBean_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl_DatePickerBean))
#define ASDatePickerImpl_DatePickerBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupBean 1
#include "ViewGroupImpl.h"

@class ASDatePickerImpl;
@protocol ASIWidget;

@interface ASDatePickerImpl_DatePickerBean : ASViewGroupImpl_ViewGroupBean

#pragma mark Public

- (instancetype)initWithASDatePickerImpl:(ASDatePickerImpl *)outer$;

- (id)getHint;

- (id)getText;

- (void)setDateFormatWithNSString:(NSString *)value;

- (void)setHintWithNSString:(NSString *)value;

- (void)setHintTextFormatWithNSString:(NSString *)value;

- (void)setMaxDateTodayWithBoolean:(jboolean)value;

- (void)setMinDateTodayWithBoolean:(jboolean)value;

- (void)setOnafterTextChangeWithNSString:(NSString *)value;

- (void)setOnbeforeTextChangeWithNSString:(NSString *)value;

- (void)setOnTextChangeWithNSString:(NSString *)value;

- (void)setTextWithNSString:(NSString *)value;

- (void)showClearButtonWithBoolean:(jboolean)value;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithASIWidget:(id<ASIWidget>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl_DatePickerBean)

FOUNDATION_EXPORT void ASDatePickerImpl_DatePickerBean_initWithASDatePickerImpl_(ASDatePickerImpl_DatePickerBean *self, ASDatePickerImpl *outer$);

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerBean *new_ASDatePickerImpl_DatePickerBean_initWithASDatePickerImpl_(ASDatePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerBean *create_ASDatePickerImpl_DatePickerBean_initWithASDatePickerImpl_(ASDatePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl_DatePickerBean)

#endif

#if !defined (ASDatePickerImpl_DatePickerParamsBean_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl_DatePickerParamsBean))
#define ASDatePickerImpl_DatePickerParamsBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupParamsBean 1
#include "ViewGroupImpl.h"

@class ASDatePickerImpl;

@interface ASDatePickerImpl_DatePickerParamsBean : ASViewGroupImpl_ViewGroupParamsBean

#pragma mark Public

- (instancetype)initWithASDatePickerImpl:(ASDatePickerImpl *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl_DatePickerParamsBean)

FOUNDATION_EXPORT void ASDatePickerImpl_DatePickerParamsBean_initWithASDatePickerImpl_(ASDatePickerImpl_DatePickerParamsBean *self, ASDatePickerImpl *outer$);

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerParamsBean *new_ASDatePickerImpl_DatePickerParamsBean_initWithASDatePickerImpl_(ASDatePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerParamsBean *create_ASDatePickerImpl_DatePickerParamsBean_initWithASDatePickerImpl_(ASDatePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl_DatePickerParamsBean)

#endif

#if !defined (ASDatePickerImpl_DatePickerCommandParamsBuilder_) && (INCLUDE_ALL_DatePickerImpl || defined(INCLUDE_ASDatePickerImpl_DatePickerCommandParamsBuilder))
#define ASDatePickerImpl_DatePickerCommandParamsBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandParamsBuilder 1
#include "ViewGroupImpl.h"

@class ASDatePickerImpl;

@interface ASDatePickerImpl_DatePickerCommandParamsBuilder : ASViewGroupImpl_ViewGroupCommandParamsBuilder

#pragma mark Public

- (instancetype)initWithASDatePickerImpl:(ASDatePickerImpl *)outer$;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)reset;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginBottomWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginEndWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginHorizontalWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginLeftWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginRightWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginStartWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginTopWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginVerticalWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)setLayoutMarginWithNSString:(NSString *)arg0;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginBottom;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginEnd;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginLeft;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginRight;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginStart;

- (ASDatePickerImpl_DatePickerCommandParamsBuilder *)tryGetLayoutMarginTop;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASDatePickerImpl_DatePickerCommandParamsBuilder)

FOUNDATION_EXPORT void ASDatePickerImpl_DatePickerCommandParamsBuilder_initWithASDatePickerImpl_(ASDatePickerImpl_DatePickerCommandParamsBuilder *self, ASDatePickerImpl *outer$);

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerCommandParamsBuilder *new_ASDatePickerImpl_DatePickerCommandParamsBuilder_initWithASDatePickerImpl_(ASDatePickerImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASDatePickerImpl_DatePickerCommandParamsBuilder *create_ASDatePickerImpl_DatePickerCommandParamsBuilder_initWithASDatePickerImpl_(ASDatePickerImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASDatePickerImpl_DatePickerCommandParamsBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_DatePickerImpl")
