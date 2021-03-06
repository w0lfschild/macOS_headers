//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"

@class CALMainController, EKCalendar, NSArray, NSButton, NSMutableSet, NSString, NSTableColumn, NSTableView;

@interface CalResendInvitationsController : NSWindowController <NSTableViewDataSource>
{
    NSTableView *_invitationTable;
    NSButton *_okButton;
    NSTableColumn *_checkboxColumn;
    NSTableColumn *_emailColumn;
    CALMainController *_mainController;
    NSMutableSet *_indexesOfShareesToReinvite;
    NSArray *_sharees;
    EKCalendar *_calendar;
}

- (void).cxx_destruct;
@property(retain) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSArray *sharees; // @synthesize sharees=_sharees;
@property(retain) NSMutableSet *indexesOfShareesToReinvite; // @synthesize indexesOfShareesToReinvite=_indexesOfShareesToReinvite;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openShareSettings:(id)arg1;
- (void)_sendInvitationsToCheckedUsers;
- (void)sendInvitations:(id)arg1;
- (void)cancel:(id)arg1;
- (void)openInvitationPanelForCalendar:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

