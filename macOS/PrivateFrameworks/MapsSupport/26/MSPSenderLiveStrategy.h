//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderLiveStrategy : MSPSenderStrategy
{
    BOOL _needToSendRoute;
}

- (void)trafficUpdated:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)setState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (BOOL)_needToSendEtaRefreshFor:(id)arg1;

@end

