//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSXPCListenerEndpoint, PBItemCollection;

@protocol _DUIServerSessionSource
- (oneway void)cancelDrag;
- (oneway void)addItemCollection:(PBItemCollection *)arg1 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg2;
- (oneway void)dragDidExitSourceApp;
- (oneway void)dirtySourceItems:(NSArray *)arg1;
- (oneway void)takeOutsideAppSourceOperationMask:(unsigned long long)arg1 prefersFullSizePreview:(BOOL)arg2;
@end

