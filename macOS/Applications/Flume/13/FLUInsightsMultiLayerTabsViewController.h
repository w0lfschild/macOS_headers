//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUMediaViewController.h"

@class FLUHoverButton, FLUView, NSArray, NSDictionary;

@interface FLUInsightsMultiLayerTabsViewController : FLUMediaViewController
{
    CDUnknownBlockType _saveBlock;
    FLUView *_tabsContainerView;
    FLUHoverButton *_applyButton;
    NSArray *_tabs;
    NSDictionary *_selectionDict;
    unsigned long long _selectedTypeIndex;
}

@property(nonatomic) unsigned long long selectedTypeIndex; // @synthesize selectedTypeIndex=_selectedTypeIndex;
@property(retain, nonatomic) NSDictionary *selectionDict; // @synthesize selectionDict=_selectionDict;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) __weak FLUHoverButton *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) __weak FLUView *tabsContainerView; // @synthesize tabsContainerView=_tabsContainerView;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
- (void).cxx_destruct;
- (void)refreshView;
- (void)reloadForm;
- (void)didSelectFromTypeButton:(id)arg1;
- (void)didPressApplyButton:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)updateFrames;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)setupAccessibility;
- (void)localizeUserInterface;
- (id)init;
- (id)initWithTabs:(id)arg1 selection:(id)arg2;

@end

