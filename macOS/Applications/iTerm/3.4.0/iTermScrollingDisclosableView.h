//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermDisclosableView.h"

@interface iTermScrollingDisclosableView : iTermDisclosableView
{
    double _maximumHeight;
}

+ (id)newTextViewWithFrame:(struct CGRect)arg1 scrollview:(out id *)arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGRect)desiredContentFrame;
- (void)callRequestLayout;
- (double)heightWhenOpen;
- (id)initWithFrame:(struct CGRect)arg1 prompt:(id)arg2 message:(id)arg3 maximumHeight:(double)arg4;

@end

