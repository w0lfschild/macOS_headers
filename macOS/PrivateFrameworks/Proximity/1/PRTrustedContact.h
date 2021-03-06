//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData;

@interface PRTrustedContact : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_contactKey;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSData *contactKey; // @synthesize contactKey=_contactKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactKey:(id)arg1;
- (id)init;

@end

