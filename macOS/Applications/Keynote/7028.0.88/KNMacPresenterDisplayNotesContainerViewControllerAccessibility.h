//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__KNMacPresenterDisplayNotesContainerViewControllerAccessibility_super.h"

@class NSButton, TSNSSegmentedControlAccessibility;

@interface KNMacPresenterDisplayNotesContainerViewControllerAccessibility : __KNMacPresenterDisplayNotesContainerViewControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
+ (id)tsaxCastFrom:(id)arg1;
- (void)_tsaxShowEditButtons;
- (void)_tsaxApplyAccessibilityInfo;
@property(readonly, nonatomic) TSNSSegmentedControlAccessibility *_tsaxNotesScaleSegmentedControl;
@property(readonly, nonatomic) NSButton *_tsaxEditButton;
- (void)tsaxLoadAccessibilityInformation;
- (BOOL)isShowingToolbarButtons;
- (void)viewDidLoad;
- (id)tsaxTarget;

@end

