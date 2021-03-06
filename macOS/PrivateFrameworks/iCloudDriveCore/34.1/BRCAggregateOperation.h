//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCloudDriveCore/_BRCOperation.h>

#import <iCloudDriveCore/BRCOperationSubclass-Protocol.h>
#import <iCloudDriveCore/ICDBRCancellable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCAggregateOperation : _BRCOperation <ICDBRCancellable, BRCOperationSubclass>
{
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
    CDUnknownBlockType _wrapperOperationCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wrapperOperationCompletionHandler; // @synthesize wrapperOperationCompletionHandler=_wrapperOperationCompletionHandler;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithSyncContext:(id)arg1 subOperations:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

