//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HULocationDevice, HULocationDeviceManager, NSSet;

@protocol HULocationDeviceManagerObserver <NSObject>

@optional
- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateAvailableLocationDevices:(NSSet *)arg2;
- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateActiveLocationDevice:(HULocationDevice *)arg2;
@end

