//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol DIConnectionHelperService
- (void)sendEndpointForUUID:(NSString *)arg1 withReply:(void (^)(NSXPCListenerEndpoint *))arg2;
- (void)receiveEndpoint:(NSXPCListenerEndpoint *)arg1 uuid:(NSString *)arg2 withReply:(void (^)(void))arg3;
@end

