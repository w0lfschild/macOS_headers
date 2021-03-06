//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermMetalCellRenderer.h"

@class NSString, iTermMetalCellRenderer, iTermMetalMixedSizeBufferPool, iTermTextureArray;

@interface iTermMarkRenderer : NSObject <iTermMetalCellRenderer>
{
    iTermMetalCellRenderer *_cellRenderer;
    iTermTextureArray *_marksArrayTexture;
    struct CGSize _markSize;
    iTermMetalMixedSizeBufferPool *_piuPool;
}

- (void).cxx_destruct;
- (id)newImageWithMarkOfColor:(id)arg1 size:(struct CGSize)arg2;
- (void)drawWithFrameData:(id)arg1 transientState:(id)arg2;
- (void)initializeTransientState:(id)arg1;
- (id)createTransientStateForCellConfiguration:(id)arg1 commandBuffer:(id)arg2;
- (int)createTransientStateStat;
@property(readonly, nonatomic) BOOL rendererDisabled;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

