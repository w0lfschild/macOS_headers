//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface EWSSRVRecord : NSObject
{
    NSDictionary *_srvRecord;
}

@property(readonly, copy, nonatomic) NSDictionary *srvRecord; // @synthesize srvRecord=_srvRecord;
- (id)description;
@property(readonly, nonatomic) NSNumber *weight;
@property(readonly, nonatomic) NSNumber *priority;
@property(readonly, nonatomic) NSNumber *port;
@property(readonly, copy, nonatomic) NSString *host;
- (void)dealloc;
- (id)initWithSRVRecord:(id)arg1;
- (id)init;

@end

