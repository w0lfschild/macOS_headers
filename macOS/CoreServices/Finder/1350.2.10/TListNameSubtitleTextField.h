//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TListTextField.h"

@class NSLayoutConstraint;

@interface TListNameSubtitleTextField : TListTextField
{
    NSLayoutConstraint *_minWidthConstraint;
    _Bool _shouldCalcMinWidthFromStrs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCalcMinWidthFromStrs; // @synthesize shouldCalcMinWidthFromStrs=_shouldCalcMinWidthFromStrs;
- (void)updateMinWidth;
- (void)updateTextColor;
- (void)setStringSet:(const unordered_set_66d0470b *)arg1 extraContentInsets:(const struct NSEdgeInsets *)arg2;
- (void)setFont:(id)arg1;
- (void)initCommon;

@end

