//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OADEffect.h"

@class OADFill;

@interface OADFillOverlayEffect : OADEffect
{
    int mBlendMode;
    OADFill *mFill;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

