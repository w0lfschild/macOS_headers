//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSViewAnimator.h>

@class NSScrubberDocumentView;

__attribute__((visibility("hidden")))
@interface _NSViewAnimator_NSScrubberDocumentView : _NSViewAnimator
{
}

- (void)updateForTrackingPoint:(struct CGPoint)arg1 isTrackingSelection:(BOOL)arg2;
- (void)scrollItemAtIndex:(long long)arg1 toAlignment:(long long)arg2;
- (void)setHighlightedIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1;
@property(readonly) NSScrubberDocumentView *targetView;

@end

