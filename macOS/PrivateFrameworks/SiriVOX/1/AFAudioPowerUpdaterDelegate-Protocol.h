//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFAudioPowerUpdater;

@protocol AFAudioPowerUpdaterDelegate <NSObject>
- (void)audioPowerUpdaterDidUpdate:(AFAudioPowerUpdater *)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
@end

