//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButtonCell.h"

@class PCGradientButtonCell;

__attribute__((visibility("hidden")))
@interface LineEndingsPopupButtonCell : NSPopUpButtonCell
{
    PCGradientButtonCell *titleCell;
}

- (void)setBackgroundStyle:(long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)shortLineEndingDisplayStringForLineEnding:(int)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

