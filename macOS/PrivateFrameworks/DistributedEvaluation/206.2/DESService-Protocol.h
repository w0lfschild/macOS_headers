//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DistributedEvaluation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID, _DKEvent;

@protocol DESService <NSObject>
- (void)setValue:(NSString *)arg1 forInfoKey:(NSString *)arg2 bundleID:(NSString *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (void)postRecipeResultForBundleId:(NSString *)arg1 baseURL:(NSURL *)arg2 result:(NSDictionary *)arg3 recipeUUID:(NSUUID *)arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchTelemetryForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(NSURL *)arg1 localeIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)runLiveEvaluationForBundleId:(NSString *)arg1 baseURL:(NSURL *)arg2 localeIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)runEvaluationForBundleId:(NSString *)arg1 recipePath:(NSString *)arg2 recordUUIDs:(NSArray *)arg3 attachments:(NSArray *)arg4 completion:(void (^)(NSDictionary *, NSData *, NSURL *, NSError *))arg5;
- (void)saveCoreDuetEvent:(_DKEvent *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteSavedRecordForBundleId:(NSString *)arg1 identfier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteAllSavedRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchRecordsForBundleId:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *, NSArray *, NSError *))arg2;
- (void)fetchSavedRecordInfoForRecordType:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)saveRecordForBundleId:(NSString *)arg1 data:(NSData *)arg2 recordInfo:(NSDictionary *)arg3 completion:(void (^)(NSUUID *, NSError *))arg4;
- (void)fetchInstalledBundlesIdsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

