//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface PlatSegmentedControlView : NSSegmentedControl
{
    struct weak_ptr<ITNSSegmentedControl> _owner;
}

+ (Class)cellClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSegmentLabels:(id)arg1;
- (void)setSelectedSegment:(long long)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)refreshBezels;
@property(readonly) shared_ptr_d213862f frontingView;
@property(readonly) shared_ptr_18c9bb0b accessibleObject;
@property(nonatomic) shared_ptr_73b3871e owner;

@end

