//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSCompoundAssertionState.h"

@class NSSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState>
{
    BOOL _active;
    NSSet *_context;
}

- (void).cxx_destruct;
- (id)description;
- (void)setContext:(id)arg1;
@property(readonly) NSSet *context;
- (void)setActive:(BOOL)arg1;
@property(readonly, getter=isActive) BOOL active;

@end

