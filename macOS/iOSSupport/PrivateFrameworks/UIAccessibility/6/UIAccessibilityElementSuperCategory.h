//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
{
}

+ (BOOL)_isSerializableAccessibilityElement;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (BOOL)_accessibilitySupportsHandwriting;
- (id)_accessibilityUserTestingVisibleAncestor;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (BOOL)_accessibilitySetNativeFocus;
- (id)_accessibilityAutomaticIdentifier;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (id)description;
- (BOOL)_accessibilityProvidesOwnFrame;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (struct CGRect)accessibilityFrame;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (id)accessibilityPath;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGPoint)accessibilityActivationPoint;
- (float)_accessibilityActivationDelay;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)_accessibilitySetValue:(id)arg1;
- (void)dealloc;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)init;

@end

