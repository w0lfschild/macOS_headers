//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogEventStoreTimeRef : NSObject
{
    unsigned char _uuid[16];
    unsigned long long _ct;
}

+ (id)timeRef;
@property(readonly, nonatomic) unsigned long long continuousTime; // @synthesize continuousTime=_ct;
@property(readonly, nonatomic) const char *UUID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUUID:(unsigned char [16])arg1 continuous:(unsigned long long)arg2;

@end

