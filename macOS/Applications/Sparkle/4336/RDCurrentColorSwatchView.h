//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface RDCurrentColorSwatchView : NSView
{
    BOOL _selected;
    NSColor *_color;
    CDUnknownBlockType _swatchSelected;
}

@property(copy, nonatomic) CDUnknownBlockType swatchSelected; // @synthesize swatchSelected=_swatchSelected;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

