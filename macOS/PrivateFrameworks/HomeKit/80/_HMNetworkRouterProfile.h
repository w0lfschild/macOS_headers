//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _HMNetworkRouterProfile : _HMAccessoryProfile
{
    BOOL _satellite;
    unsigned long long _networkStatus;
    NSSet *_identifiersForSatelliteProfiles;
    id <_HMNetworkRouterProfileDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_HMNetworkRouterProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)_handleNetworkStatusUpdated:(id)arg1;
- (void)__handleNetworkStatusUpdated:(id)arg1;
- (void)_handleSatelliteProfilesUpdated:(id)arg1;
- (BOOL)checkForUpdatedNetworkStatus:(unsigned long long)arg1;
- (BOOL)checkForUpdatedIdentifiersForSatellites:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageDestination;
- (id)messageTargetUUID;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;
@property(readonly) NSSet *identifiersForSatelliteProfiles; // @synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles;
- (void)setSatellite:(BOOL)arg1;
@property(readonly, getter=isSatellite) BOOL satellite; // @synthesize satellite=_satellite;
- (void)setNetworkStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)_registerNotificationHandlers;

@end

