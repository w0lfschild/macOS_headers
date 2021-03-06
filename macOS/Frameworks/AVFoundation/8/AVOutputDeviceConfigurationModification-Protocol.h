//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputDeviceAuthorizedPeer, NSString;

@protocol AVOutputDeviceConfigurationModification <NSObject>
- (void)removePeerWithIDFromHomeGroup:(NSString *)arg1;
- (void)addPeerToHomeGroup:(AVOutputDeviceAuthorizedPeer *)arg1;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1;
- (void)setDevicePassword:(NSString *)arg1;
- (void)setDeviceName:(NSString *)arg1;
@end

