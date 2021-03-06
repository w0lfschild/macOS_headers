//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class KNElementListFilterController, KNMacElementListFilterEditorTableView, NSButton, NSString, NSView;

@interface KNMacElementListFilterEditorViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _ignoreSelectionChanges;
    KNElementListFilterController *_filterController;
    NSView *_titleContainerView;
    NSView *_buttonContainerView;
    NSButton *_clearAllButton;
    KNMacElementListFilterEditorTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KNMacElementListFilterEditorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL ignoreSelectionChanges; // @synthesize ignoreSelectionChanges=_ignoreSelectionChanges;
@property(retain, nonatomic) NSButton *clearAllButton; // @synthesize clearAllButton=_clearAllButton;
@property(retain, nonatomic) NSView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) NSView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) KNElementListFilterController *filterController; // @synthesize filterController=_filterController;
- (void)p_enableClearAllButtonIfNeeded;
- (void)p_setFilterSelection;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)clearAllButtonPressed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFilterController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

