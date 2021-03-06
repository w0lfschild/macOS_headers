//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class BSAppDelegate, BSBar, BSBars, BSPrefs, NSTrackingArea;

@interface BSBarView : NSView
{
    BSAppDelegate *appDelegate;
    BSPrefs *prefs;
    BSBars *bars;
    BSBar *bar;
    NSTrackingArea *trackingArea;
    BOOL resizingBar;
    struct CGRect menuIconRectToRestore;
}

@property struct CGRect menuIconRectToRestore; // @synthesize menuIconRectToRestore;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (int)desiredLinesForHeight:(int)arg1;
- (void)middleMouseDownExecute:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseExecute:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExecute:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)turnOffResizing;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (id)getBarRectPathIsOutline:(BOOL)arg1;
- (id)getBarRectPath;
- (void)setupForBar:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

