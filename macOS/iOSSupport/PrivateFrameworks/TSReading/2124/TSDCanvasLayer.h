//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

#import <TSReading/TSKKeyboardObserver-Protocol.h>

@class NSString, TSDCanvasView, TSDInteractiveCanvasController;

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer <TSKKeyboardObserver>
{
    TSDInteractiveCanvasController *mController;
    struct CGSize mUnscaledSize;
    struct UIEdgeInsets mContentInset;
    double mViewScale;
    unsigned long long mViewScaleAnimationCount;
    unsigned long long mLayoutDisabledDepth;
    BOOL mAllowsPinchZoom;
    double mMinimumPinchViewScale;
    double mMaximumPinchViewScale;
    BOOL mShowsScaleFeedback;
    BOOL mIsInfinite;
    BOOL mHorizontallyCenteredInScrollView;
    BOOL mVerticallyCenteredInScrollView;
    BOOL mAvoidKeyboardWhenVerticallyCenteredInScrollView;
    BOOL _torndown;
    BOOL _createdByPresentationLayer;
}

@property(nonatomic) BOOL createdByPresentationLayer; // @synthesize createdByPresentationLayer=_createdByPresentationLayer;
@property(nonatomic) BOOL torndown; // @synthesize torndown=_torndown;
@property(nonatomic) BOOL avoidKeyboardWhenVerticallyCenteredInScrollView; // @synthesize avoidKeyboardWhenVerticallyCenteredInScrollView=mAvoidKeyboardWhenVerticallyCenteredInScrollView;
@property(nonatomic) BOOL verticallyCenteredInScrollView; // @synthesize verticallyCenteredInScrollView=mVerticallyCenteredInScrollView;
@property(nonatomic) BOOL horizontallyCenteredInScrollView; // @synthesize horizontallyCenteredInScrollView=mHorizontallyCenteredInScrollView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
@property(nonatomic, getter=isInfinite) BOOL infinite; // @synthesize infinite=mIsInfinite;
@property(nonatomic) BOOL showsScaleFeedback; // @synthesize showsScaleFeedback=mShowsScaleFeedback;
@property(nonatomic) BOOL allowsPinchZoom; // @synthesize allowsPinchZoom=mAllowsPinchZoom;
@property(nonatomic) double maximumPinchViewScale; // @synthesize maximumPinchViewScale=mMaximumPinchViewScale;
@property(nonatomic) double minimumPinchViewScale; // @synthesize minimumPinchViewScale=mMinimumPinchViewScale;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)_adjustContentInsetsForKeyboard;
- (void)p_fixFrameAndScrollView;
- (void)adjustContentInsets;
- (struct CGRect)p_fixedBoundsForScrollViewSize:(struct CGSize)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)p_setEnclosingScrollViewZoomParameters;
- (void)p_setViewScale:(double)arg1 preservingScrollOffset:(BOOL)arg2;
- (void)p_setViewScale:(double)arg1;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (struct CGPoint)p_contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (struct CGPoint)contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint unscaledContentCenter;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)popLayoutDisabled;
- (void)pushLayoutDisabled;
@property(readonly, nonatomic, getter=isLayoutDisabled) BOOL disableLayout;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
- (struct CGRect)p_boundsRect;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)layoutSublayers;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsLayout;
- (void)fixFrameAndScrollView;
@property(nonatomic) BOOL centeredInScrollView; // @dynamic centeredInScrollView;
- (void)setUnscaledSizeOnLayer:(struct CGSize)arg1;
- (void)teardownWithoutClearingLayerDelegates;
- (void)teardown;
- (void)dealloc;
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;
- (id)presentationLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)p_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

