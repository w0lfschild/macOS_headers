//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (RBSErrors)
+ (id)rbs_errorClientNotEntitled:(id)arg1 permanent:(BOOL)arg2;
- (BOOL)rbs_isPermanentFailure;
- (BOOL)rbs_isServiceDenied;
@end

