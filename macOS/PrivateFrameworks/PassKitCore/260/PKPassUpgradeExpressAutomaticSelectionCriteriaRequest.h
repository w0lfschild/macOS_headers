//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassUpgradeRequest.h>

@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest
{
    NSArray *_technologyTypes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *technologyTypes; // @synthesize technologyTypes=_technologyTypes;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

