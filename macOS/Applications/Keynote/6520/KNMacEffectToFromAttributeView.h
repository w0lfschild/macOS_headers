//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSPopUpButton;

@interface KNMacEffectToFromAttributeView : NSView
{
    BOOL _needsTwoLineLayout;
    NSPopUpButton *_fromPopupButton;
    NSPopUpButton *_toPopupButton;
}

@property(readonly, nonatomic) NSPopUpButton *toPopupButton; // @synthesize toPopupButton=_toPopupButton;
@property(readonly, nonatomic) NSPopUpButton *fromPopupButton; // @synthesize fromPopupButton=_fromPopupButton;
- (void).cxx_destruct;
- (double)tma_inspectorPaneHeight;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_commonInit;

@end

