//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKBorderlessEffectWindow.h>

@class CALayer, NSWindow;

__attribute__((visibility("hidden")))
@interface SHKDimAndShadowWindow : SHKBorderlessEffectWindow
{
    BOOL animatesTransitions;
    CALayer *groupLayer;
    CALayer *dimLayer;
    CALayer *shadowLayer;
    CALayer *shadowCenterKnockoutLayer;
    NSWindow *_remoteWindow;
    NSWindow *_sourceWindow;
}

@property __weak NSWindow *sourceWindow; // @synthesize sourceWindow=_sourceWindow;
@property __weak NSWindow *remoteWindow; // @synthesize remoteWindow=_remoteWindow;
@property BOOL animatesTransitions; // @synthesize animatesTransitions;
- (void).cxx_destruct;
- (void)updateShadowFrame:(struct CGRect)arg1;
- (void)animateLayersToFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2;
- (void)startTransitionOut;
- (void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2 currentMediaTime:(double)arg3;
- (void)continueTransitionInWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2;
- (void)startTransitionInWithDimFrame:(struct CGRect)arg1 serviceScreenFrame:(struct CGRect)arg2 initialLayerTransform:(struct CGAffineTransform)arg3;
- (void)ensureGroupLayerInitialized;
- (id)initWithFrame:(struct CGRect)arg1 noSourceWindow:(BOOL)arg2;

@end

