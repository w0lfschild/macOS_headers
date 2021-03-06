//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "MKMultiLineLabelContainer-Protocol.h"

@class NSImageView, NSString, NSTextField, NSView, NVPrintMapView;

__attribute__((visibility("hidden")))
@interface NVPrintCellView : NSTableCellView <MKMultiLineLabelContainer>
{
    NVPrintMapView *_snapshotView;
    NSImageView *_distanceImageView;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSView *_bottomLineView;
    NSView *_topColorLineView;
}

@property(nonatomic) __weak NSView *topColorLineView; // @synthesize topColorLineView=_topColorLineView;
@property(nonatomic) __weak NSView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSImageView *distanceImageView; // @synthesize distanceImageView=_distanceImageView;
@property(nonatomic) __weak NVPrintMapView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;
- (id)multilineTextFieldsWithinContainer;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

