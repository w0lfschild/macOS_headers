//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/SHRecognitionSessionDelegate-Protocol.h>
#import <ActionKit/WFApplicationStateObserver-Protocol.h>

@class AVAudioEngine, NSString;

@interface WFShazamMediaAction : WFAction <SHRecognitionSessionDelegate, WFApplicationStateObserver>
{
    BOOL _waitingForInterruptionEnd;
    AVAudioEngine *_audioEngine;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL waitingForInterruptionEnd; // @synthesize waitingForInterruptionEnd=_waitingForInterruptionEnd;
@property(retain, nonatomic) AVAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;
- (void)session:(id)arg1 didFindMatch:(id)arg2;
- (void)audioInterruption:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)finishRunningWithMatch:(id)arg1 error:(id)arg2;
- (void)startShazamWithRetryCount:(int)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

