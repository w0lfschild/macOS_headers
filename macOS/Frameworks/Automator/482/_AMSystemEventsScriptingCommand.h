//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

#import <Automator/_AMSystemEventsGenericMethods-Protocol.h>

@class NSString, _AMSystemEventsScriptingParameter, _AMSystemEventsScriptingResultObject;

@interface _AMSystemEventsScriptingCommand : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly, copy) NSString *suiteName;
@property(readonly, copy) _AMSystemEventsScriptingResultObject *scriptingResult;
@property(readonly) BOOL hidden;
@property(readonly, copy) _AMSystemEventsScriptingParameter *directParameter;
@property(readonly, copy) NSString *objectDescription;
- (id)id;
@property(readonly, copy) NSString *name;
- (id)scriptingParameters;

@end

