//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextField;

@interface RDSparkleCrashInfoWindowController : NSWindowController
{
    NSTextField *_nameField;
    NSTextField *_emailField;
    NSTextField *_commentsField;
}

@property(nonatomic) __weak NSTextField *commentsField; // @synthesize commentsField=_commentsField;
@property(nonatomic) __weak NSTextField *emailField; // @synthesize emailField=_emailField;
@property(nonatomic) __weak NSTextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (void)send:(id)arg1;
- (void)doNotSend:(id)arg1;
- (void)windowDidLoad;

@end

