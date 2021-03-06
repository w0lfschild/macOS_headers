//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import "NSAccessibilityImage-Protocol.h"

@class IPXPrintContactSheetCaptions, IPXPrintPageView, NSArray, NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface IPXPrintCellView : NSAccessibilityElement <NSAccessibilityImage>
{
    struct CGImage *_renderedPhoto;
    BOOL _isPrintingCell;
    IPXPrintContactSheetCaptions *_captionGenerator;
    struct IPXPrintCaptionSelection _captionSelection;
    NSArray *_captionStrings;
    struct CGLayer *_cellLayer;
    struct CGSize _cellSize;
    struct CGPoint _position;
    double _captionHeight;
    double _resolution;
    NSArray *_scaledStrings;
    NSArray *_stringBounds;
    BOOL _rotated;
    BOOL _fillFrame;
    BOOL _canRotatePhotosForBestFit;
    BOOL _ignoreCaptions;
    IPXPrintPageView *_pageView;
    long long _cellIndex;
    PHAsset *_lastRenderedAsset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property BOOL ignoreCaptions; // @synthesize ignoreCaptions=_ignoreCaptions;
@property(retain) PHAsset *lastRenderedAsset; // @synthesize lastRenderedAsset=_lastRenderedAsset;
@property BOOL canRotatePhotosForBestFit; // @synthesize canRotatePhotosForBestFit=_canRotatePhotosForBestFit;
@property long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain) IPXPrintPageView *pageView; // @synthesize pageView=_pageView;
@property BOOL fillFrame; // @synthesize fillFrame=_fillFrame;
@property BOOL rotated; // @synthesize rotated=_rotated;
@property struct CGPoint position; // @synthesize position=_position;
@property BOOL isPrintingCell; // @synthesize isPrintingCell=_isPrintingCell;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameInParentSpace;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;
- (void)drawIntoContext:(id)arg1;
- (struct CGRect)photoSubrectForCellBounds:(struct CGRect)arg1 photoSize:(struct CGSize)arg2 rotated:(BOOL)arg3 renderSettings:(CDStruct_e8f17287)arg4;
- (void)renderAsset:(id)arg1 forSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3 synchronous:(BOOL)arg4;
- (struct CGSize)renderSizeForCellSize:(struct CGSize)arg1 photoSize:(struct CGSize)arg2 rotated:(char *)arg3 renderSettings:(CDStruct_e8f17287)arg4;
- (void)drawIntoContext:(struct CGContext *)arg1 origin:(struct CGPoint)arg2 redrawCallback:(CDUnknownBlockType)arg3 fastRenderForPrint:(BOOL)arg4 synchronous:(BOOL)arg5;
- (void)updateLayerForContext:(struct CGContext *)arg1 redrawCallback:(CDUnknownBlockType)arg2 synchronous:(BOOL)arg3;
- (void)updateLayerForContext:(struct CGContext *)arg1 redrawCallback:(CDUnknownBlockType)arg2;
- (void)positionChildViews;
- (void)invalidateCaptionStrings;
- (struct CGLayer *)cellLayer;
@property double resolution;
@property struct CGSize size;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

