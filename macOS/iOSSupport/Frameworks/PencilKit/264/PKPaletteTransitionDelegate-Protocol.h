//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKPaletteTransition;

@protocol PKPaletteTransitionDelegate <NSObject>
- (void)transitionExpandedToCollapsedRatioDidChange:(PKPaletteTransition *)arg1;
- (void)transitionPointingDirectionDidChange:(PKPaletteTransition *)arg1;
- (void)transitionIntermediateVisualStateDidChange:(PKPaletteTransition *)arg1;
@end

