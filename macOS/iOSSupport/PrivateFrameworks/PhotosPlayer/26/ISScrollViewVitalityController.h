//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISVisibilityOffsetHelper, NSDate, NSHashTable, UIScrollView;

@interface ISScrollViewVitalityController : NSObject
{
    BOOL _enabled;
    BOOL __isPerformingChanges;
    BOOL _scrolling;
    BOOL _decelerating;
    BOOL _hasTargetContentOffset;
    UIScrollView *__scrollView;
    NSHashTable *__playerViews;
    NSDate *_estimatedScrollEndDate;
    ISVisibilityOffsetHelper *_visibilityOffsetHelper;
    struct CGPoint _targetContentOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ISVisibilityOffsetHelper *visibilityOffsetHelper; // @synthesize visibilityOffsetHelper=_visibilityOffsetHelper;
@property(retain, nonatomic) NSDate *estimatedScrollEndDate; // @synthesize estimatedScrollEndDate=_estimatedScrollEndDate;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) BOOL hasTargetContentOffset; // @synthesize hasTargetContentOffset=_hasTargetContentOffset;
@property(nonatomic, getter=isDecelerating) BOOL decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(readonly, nonatomic) NSHashTable *_playerViews; // @synthesize _playerViews=__playerViews;
@property(nonatomic, setter=_setScrollView:) __weak UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)_updateVitalityFilters;
- (id)_newVitalityFilter;
- (void)canPerformVitalityDidChange;
@property(readonly, nonatomic) BOOL canPerformVitality;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)didLayoutPlayerViews;
- (void)removePlayerView:(id)arg1;
- (void)addPlayerView:(id)arg1;
- (id)init;

@end

