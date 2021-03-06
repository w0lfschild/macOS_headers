//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXGTextureManagerPreheatingStrategy : NSObject
{
    long long _previousRegime;
    double _stoppedOffset;
    double _slowOffset;
    double _mediumOffset;
    double _fastOffset;
}

+ (id)noPreheatingStrategy;
+ (id)defaultPreheatingStrategy;
@property(nonatomic) double fastOffset; // @synthesize fastOffset=_fastOffset;
@property(nonatomic) double mediumOffset; // @synthesize mediumOffset=_mediumOffset;
@property(nonatomic) double slowOffset; // @synthesize slowOffset=_slowOffset;
@property(nonatomic) double stoppedOffset; // @synthesize stoppedOffset=_stoppedOffset;
- (struct CGRect)preheatingRectForLayout:(id)arg1 interactionState:(CDStruct_73ead4b7)arg2;
@property(readonly, nonatomic) double maxPreheatingDistance;

@end

