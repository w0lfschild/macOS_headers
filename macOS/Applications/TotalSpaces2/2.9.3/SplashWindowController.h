//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class KBButton, NSString;

@interface SplashWindowController : NSWindowController <NSWindowDelegate>
{
    KBButton *_closeButton;
}

@property KBButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)windowWillClose:(id)arg1;
- (void)closeButtonAction:(id)arg1;
- (void)setupButton;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

