//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class IPXMetadataInfoViewController, IPXSelectionContainer, NSArray, NSMutableSet, NSPanel, NSString, NSUndoManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXMetadataInfoPopoverController : NSObject <NSWindowDelegate>
{
    NSMutableSet *_registeredDatabaseUUIDs;
    IPXMetadataInfoViewController *_metadataViewController;
    NSPanel *_popoverWindow;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    int _mode;
    NSArray *_representedVersions;
    NSUndoManager *_undoManager;
    IPXSelectionContainer *_selection;
}

@property(readonly, nonatomic) IPXSelectionContainer *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(readonly, nonatomic) NSArray *representedVersions; // @synthesize representedVersions=_representedVersions;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)isPopoverVisible;
- (void)togglePopover:(id)arg1;
- (void)hidePopover:(id)arg1;
- (void)showPopover:(id)arg1;
- (void)_setWindowTitleForSelection:(id)arg1 versions:(id)arg2;
- (id)_popoverWindow;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)_appSelectionChanged:(id)arg1;
- (void)_handleSelectionChange:(id)arg1;
- (id)_fetchSelection;
- (int)_infoPanelModeForSelection:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

