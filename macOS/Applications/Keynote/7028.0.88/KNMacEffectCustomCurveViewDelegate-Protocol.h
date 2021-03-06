//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNMacEffectCustomCurveHandle, KNMacEffectCustomCurveView, NSString, TSUBezierPath;

@protocol KNMacEffectCustomCurveViewDelegate <NSObject>
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 pathChangedToPath:(TSUBezierPath *)arg2;

@optional
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 handleVisibilityDidChangeToVisible:(BOOL)arg2;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 didSelectSavedThemeCurveWithName:(NSString *)arg2;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 didDeleteThemeCurveWithName:(NSString *)arg2;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 didSaveThemeCurve:(TSUBezierPath *)arg2 name:(NSString *)arg3;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 handle:(KNMacEffectCustomCurveHandle *)arg2 isDragging:(BOOL)arg3;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 handle:(KNMacEffectCustomCurveHandle *)arg2 didScaleToScale:(long long)arg3 atPoint:(struct CGPoint)arg4;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 handleDeselected:(KNMacEffectCustomCurveHandle *)arg2;
- (void)curveEditor:(KNMacEffectCustomCurveView *)arg1 handleSelectedOrUpdated:(KNMacEffectCustomCurveHandle *)arg2 atUnitPoint:(struct CGPoint)arg3;
@end

