//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTCORPrioritizer.h"
#import "NSSecureCoding.h"

@class GDTCORClock, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GDTCCTPrioritizer : NSObject <NSSecureCoding, GDTCORPrioritizer>
{
    NSObject<OS_dispatch_queue> *_queue;
    GDTCORClock *_CCTTimeOfLastDailyUpload;
    GDTCORClock *_FLLOfLastDailyUpload;
    NSMutableSet *_CCTEvents;
    NSMutableSet *_FLLEvents;
    NSMutableSet *_CSHEvents;
}

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *CSHEvents; // @synthesize CSHEvents=_CSHEvents;
@property(retain, nonatomic) NSMutableSet *FLLEvents; // @synthesize FLLEvents=_FLLEvents;
@property(retain, nonatomic) NSMutableSet *CCTEvents; // @synthesize CCTEvents=_CCTEvents;
@property(retain, nonatomic) GDTCORClock *FLLOfLastDailyUpload; // @synthesize FLLOfLastDailyUpload=_FLLOfLastDailyUpload;
@property(retain, nonatomic) GDTCORClock *CCTTimeOfLastDailyUpload; // @synthesize CCTTimeOfLastDailyUpload=_CCTTimeOfLastDailyUpload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)packageExpired:(id)arg1;
- (void)packageDelivered:(id)arg1 successful:(BOOL)arg2;
- (void)appWillTerminate:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logEventsOkToSendDaily:(id)arg1;
- (id)logEventsOkToSendOnWifi:(id)arg1;
- (id)logEventsOkToSendOnMobileData:(id)arg1;
- (id)eventsForTarget:(long long)arg1 conditions:(long long)arg2;
- (void)saveState;
- (id)uploadPackageWithTarget:(long long)arg1 conditions:(long long)arg2;
- (void)prioritizeEvent:(id)arg1;
- (id)eventsForTarget:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

