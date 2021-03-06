//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "BFPCompositeViewDelegate.h"
#import "NSTextFieldDelegate.h"
#import "iTermBadgeConfigurationBadgeViewDelegate.h"

@class BFPCompositeView, NSBox, NSDictionary, NSMutableDictionary, NSString, NSTextField, iTermBadgeConfigurationBadgeView;

@interface iTermBadgeConfigurationWindowController : NSWindowController <iTermBadgeConfigurationBadgeViewDelegate, NSTextFieldDelegate, BFPCompositeViewDelegate>
{
    NSMutableDictionary *_profileMutations;
    NSString *_fontName;
    BOOL _ignoreFrameChange;
    BFPCompositeView *_fontPicker;
    BOOL _ok;
    NSDictionary *_profile;
    NSTextField *_maxWidthTextField;
    NSTextField *_maxHeightTextField;
    NSTextField *_rightMarginTextField;
    NSTextField *_topMarginTextField;
    NSBox *_fakeSessionView;
    iTermBadgeConfigurationBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) iTermBadgeConfigurationBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSBox *fakeSessionView; // @synthesize fakeSessionView=_fakeSessionView;
@property(retain, nonatomic) NSTextField *topMarginTextField; // @synthesize topMarginTextField=_topMarginTextField;
@property(retain, nonatomic) NSTextField *rightMarginTextField; // @synthesize rightMarginTextField=_rightMarginTextField;
@property(retain, nonatomic) NSTextField *maxHeightTextField; // @synthesize maxHeightTextField=_maxHeightTextField;
@property(retain, nonatomic) NSTextField *maxWidthTextField; // @synthesize maxWidthTextField=_maxWidthTextField;
@property(readonly, nonatomic) BOOL ok; // @synthesize ok=_ok;
@property(copy, nonatomic) NSDictionary *profile; // @synthesize profile=_profile;
- (void)fontPickerCompositeView:(id)arg1 didSelectFont:(id)arg2;
- (id)badgeViewFont;
- (id)badgeViewProfile;
- (void)badgeViewFrameDidChange:(struct CGRect)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (struct CGSize)badgeContainerSize;
- (void)setBadgeFrameFromTextFields;
@property(readonly, nonatomic) NSDictionary *profileMutations;
- (id)font;
- (void)windowDidLoad;
- (void)updateWindowFrame;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

