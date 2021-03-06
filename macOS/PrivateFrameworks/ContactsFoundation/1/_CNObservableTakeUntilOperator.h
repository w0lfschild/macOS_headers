//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import "_CNObservableTakeUntilInputObserverDelegate.h"
#import "_CNObservableTakeUntilSignalObserverDelegate.h"

@class NSString;

@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate>
{
    BOOL _active;
    CNObservable *_input;
    CNObservable *_signal;
    id <CNCancelable> _inputToken;
    id <CNCancelable> _signalToken;
}

@property(retain) id <CNCancelable> signalToken; // @synthesize signalToken=_signalToken;
@property(retain) id <CNCancelable> inputToken; // @synthesize inputToken=_inputToken;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly) CNObservable *signal; // @synthesize signal=_signal;
@property(readonly) CNObservable *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (void)signalDidGenerateEventWithObserver:(id)arg1;
- (BOOL)shouldMirrorEvent:(id)arg1;
- (void)cancel;
- (id)subscribe:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithInput:(id)arg1 signal:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

