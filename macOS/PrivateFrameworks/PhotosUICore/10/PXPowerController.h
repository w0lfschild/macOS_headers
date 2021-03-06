//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXPowerController : NSObject
{
    BOOL _hasPowerAssertion;
}

+ (id)sharedController;
@property(readonly, nonatomic) BOOL hasPowerAssertion; // @synthesize hasPowerAssertion=_hasPowerAssertion;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (unsigned int)generateAssertionIdentifier;

@end

