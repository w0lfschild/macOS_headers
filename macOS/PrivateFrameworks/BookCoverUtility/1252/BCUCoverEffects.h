//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject
{
    BCULayerRenderer *_renderer;
    NSArray *_bookFilters;
    NSArray *_seriesFilters;
    NSArray *_templateImageFilters;
}

+ (id)_effectIdentifierForEffectIndex:(unsigned long long)arg1;
+ (id)effectIdentifierForFilterInfo:(id)arg1;
+ (id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2;
- (void).cxx_destruct;
- (id)welcomeScreenBookCoverEffectFilters;
- (id)templateImageFilters;
- (id)seriesCoverEffectFilters;
- (id)bookCoverEffectFilters;
- (id)initWithRenderer:(id)arg1;
- (id)bookCoverEffectFilterForEffectIdentifier:(id)arg1;

@end

