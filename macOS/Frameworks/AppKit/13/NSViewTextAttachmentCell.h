//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@interface NSViewTextAttachmentCell : NSTextAttachmentCell
{
}

- (oneway void)releaseView:(id)arg1;
- (void)removeView:(id)arg1 fromView:(id)arg2 layoutManager:(id)arg3;
- (void)_helperDeallocatedForView:(id)arg1 layoutManager:(id)arg2;
- (void)adjustView:(id)arg1 frame:(struct CGRect)arg2 forView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)addView:(id)arg1 frame:(struct CGRect)arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (BOOL)wantsToTrackMouse;
- (id)viewForCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)_textAttachmentCellBaseDrawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)helperForView:(id)arg1 layoutManager:(id)arg2 characterIndex:(unsigned long long)arg3;

@end

