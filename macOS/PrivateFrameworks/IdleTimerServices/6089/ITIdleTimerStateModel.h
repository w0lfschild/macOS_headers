//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITIdleTimerStateRequestDelegate.h"

@class NSMutableDictionary, NSString;

@interface ITIdleTimerStateModel : NSObject <ITIdleTimerStateRequestDelegate>
{
    struct os_unfair_lock_s _accessLock;
    NSMutableDictionary *_access_idleTimerAssertionsByConfigIdentifier;
    id <ITIdleTimerStateRequestHandling> _requestHandler;
    id <BSInvalidatable> _stateCaptureAssertion;
}

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_access_newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2;
- (BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2;
- (void)resendIdleTimerAssertions;
- (id)newIdleTimerAssertionWithConfiguration:(id)arg1 forReason:(id)arg2;
@property(readonly, getter=isIdleTimerServiceAvailable) BOOL idleTimerServiceAvailable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

