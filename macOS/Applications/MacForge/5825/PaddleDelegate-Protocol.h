//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, PADAlert, PADDisplayConfiguration, PADProduct;

@protocol PaddleDelegate <NSObject>

@optional
- (NSString *)customStoragePath;
- (BOOL)canAutoActivate:(PADProduct *)arg1;
- (NSString *)appGroupForSharedLicense;
- (void)paddleDidError:(NSError *)arg1;
- (BOOL)willShowPaddleAlert:(PADAlert *)arg1;
- (void)didDismissPaddleUIType:(long long)arg1 triggeredUIType:(long long)arg2 product:(PADProduct *)arg3;
- (PADDisplayConfiguration *)willShowPaddleUIType:(long long)arg1 product:(PADProduct *)arg2;
@end

