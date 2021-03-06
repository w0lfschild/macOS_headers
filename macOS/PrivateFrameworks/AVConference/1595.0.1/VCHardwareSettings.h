//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCHardwareSettings : NSObject
{
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
}

+ (long long)deviceClass;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1;
- (BOOL)storeHardwareSettingsForAllOperatingModes;
- (unsigned int)tilesPerVideoFrame:(int)arg1;
- (BOOL)isHEVCDecodeSupported:(int)arg1;
- (BOOL)isHEVCEncodeSupported:(int)arg1;
@property(readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property(readonly, nonatomic) BOOL supportHEVC;
- (id)featureListStringForHEVC:(int)arg1;
- (id)featureListStringForH264:(int)arg1;
- (void)dealloc;
- (id)init;

@end

