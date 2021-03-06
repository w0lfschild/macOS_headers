//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSWPStorage;
@protocol TSWPLayoutTarget;

@protocol TSWPFootnoteHeightMeasurer <NSObject>
- (void)setFootnoteSpacing:(long long)arg1;
- (void)setContainerLineWidth:(double)arg1;
- (BOOL)canHaveFootnotesFromPreviousTarget:(id <TSWPLayoutTarget>)arg1;
- (BOOL)footnoteContainerIsOnSamePageAsTarget:(id <TSWPLayoutTarget>)arg1;
- (BOOL)footnoteContainerFitsForTarget:(id <TSWPLayoutTarget>)arg1;
- (double)footnoteBlockHeightForTarget:(id <TSWPLayoutTarget>)arg1;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(TSWPStorage *)arg1;
- (void)addFootnoteReferenceStorage:(TSWPStorage *)arg1;
@end

