//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITTextFrame : NSObject
{
}

+ (void)resetTextState:(id)arg1;
+ (BOOL)mapParagraphWithFrameState:(id)arg1 textState:(id)arg2;
+ (BOOL)isATextFrameWithParagraph:(id)arg1 state:(id)arg2;
+ (BOOL)isATextFrameWithFrameState:(id)arg1 state:(id)arg2;
+ (BOOL)isContinuationOfPreviousTextFrameWithParagraph:(id)arg1 state:(id)arg2;
+ (BOOL)isContinuationOfPreviousTextFrameWithFrameState:(id)arg1 state:(id)arg2;
+ (struct CGSize)getSizeFromShape:(id)arg1;
+ (struct CGPoint)getPositionFromState:(id)arg1;
+ (BOOL)isFloating:(id)arg1;
+ (BOOL)hasInvisibleBorder:(id)arg1;
+ (id)geometryFromState:(id)arg1;
+ (id)shapeInfoWithContext:(id)arg1 docStylesheet:(id)arg2 state:(id)arg3;

@end

