//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface XCTSerializedTransportWrapper2 : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_serializedTransport;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSObject<OS_xpc_object> *serializedTransport; // @synthesize serializedTransport=_serializedTransport;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedTransport:(id)arg1;

@end

