//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNKPFPackageLoadingPerformance, NSError, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@protocol KNKPFPackageLoader <NSObject>
@property(readonly, nonatomic) BOOL supportsDirectURLs;
- (void)cancelAssetLoadingForAssetPath:(NSString *)arg1;
- (void)loadAssetForAssetPath:(NSString *)arg1 priority:(long long)arg2 fallbackTimeoutInterval:(double)arg3 isRetry:(BOOL)arg4 completionHandler:(void (^)(NSError *))arg5;
- (NSURL *)directURLForAssetPath:(NSString *)arg1;
- (NSURL *)URLForAssetPath:(NSString *)arg1;
- (void)close;
- (void)prepareWithQueue:(NSObject<OS_dispatch_queue> *)arg1;

@optional
- (KNKPFPackageLoadingPerformance *)loadingPerformanceForAssetPath:(NSString *)arg1;
- (void)logAssetLoadingRetryForError:(NSError *)arg1 didRetryPreviously:(BOOL)arg2;
- (void)resetAssetLoadingFallbackTimeoutInterval:(double)arg1 forAssetPath:(NSString *)arg2;
- (void)changeAssetLoadingPriority:(long long)arg1 forAssetPath:(NSString *)arg2;
@end

