//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ThreadingHandler.h"

@interface ExtractingThreadingHandler : ThreadingHandler
{
}

- (void)unpackItems:(id)arg1 fromArchive:(id)arg2 toURL:(id)arg3;
- (oneway void)displayVerificationReports:(bycopy id)arg1;
- (void)startVerificationWithItems:(id)arg1 verifyPermissions:(BOOL)arg2 verifyChecksum:(BOOL)arg3 authorize:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startInstallationWithItems:(id)arg1 diskURL:(id)arg2 authorize:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startExtractionWithItems:(id)arg1 destinationURL:(id)arg2 iconLocation:(struct CGPoint)arg3 authorize:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startUnpackingItems:(id)arg1 fromArchive:(id)arg2 toURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

