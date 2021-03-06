//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSPopUpButton, NSTextField;

@interface KNMacEffectListAttributeView : NSView
{
    NSArray *_layoutConstraints;
    BOOL _hasGroupedPanesBelow;
    NSTextField *_titleField;
    NSPopUpButton *_popupButton;
    long long _viewLayout;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasGroupedPanesBelow; // @synthesize hasGroupedPanesBelow=_hasGroupedPanesBelow;
@property(nonatomic) long long viewLayout; // @synthesize viewLayout=_viewLayout;
@property(readonly, nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property(readonly, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
- (double)tma_inspectorPaneHeight;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_commonInit;

@end

