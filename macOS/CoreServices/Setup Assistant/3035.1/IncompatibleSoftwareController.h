//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MacBuddyViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSString;

@interface IncompatibleSoftwareController : MacBuddyViewController <NSTableViewDataSource, NSTableViewDelegate>
{
}

- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)willBecomeVisible;
- (id)templateView;
- (id)identifier;
- (id)initWithManager:(id)arg1;
- (id)nextViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

