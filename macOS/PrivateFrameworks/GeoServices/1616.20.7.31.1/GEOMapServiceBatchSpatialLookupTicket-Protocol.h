//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOSpatialLookupParameters, NSArray, NSObject<OS_dispatch_queue>;

@protocol GEOMapServiceBatchSpatialLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (NSArray *)mapItemsForParameters:(GEOSpatialLookupParameters *)arg1;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)submitWithHandler:(void (^)(NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

