//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSXPCListenerEndpoint;

@interface DMFRegisterUserAgentRequest : CATTaskRequest
{
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_appleID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

