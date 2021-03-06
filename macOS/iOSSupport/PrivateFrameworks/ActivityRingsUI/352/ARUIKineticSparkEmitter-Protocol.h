//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/NSObject-Protocol.h>

@class ARUIKineticSparkUpdate;

@protocol ARUIKineticSparkEmitter <NSObject>
- (ARUIKineticSparkUpdate *)updateForTime:(float)arg1;
- (ARUIKineticSparkUpdate *)generateSparks;
- (unsigned long long)bufferOffset;
- (void)setBufferOffset:(unsigned long long)arg1;
- (unsigned long long)particleCount;
- (void)setParticleCount:(unsigned long long)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
@end

