//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKRecordObject.h"

@class NSArray, NSString;

@interface PKAccountPhysicalCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    unsigned long long _reason;
    NSArray *_updatedPhysicalCards;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *updatedPhysicalCards; // @synthesize updatedPhysicalCards=_updatedPhysicalCards;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

