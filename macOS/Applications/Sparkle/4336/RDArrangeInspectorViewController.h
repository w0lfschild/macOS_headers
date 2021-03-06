//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDInspectorViewController.h"

#import "RDInspectorProtocol.h"

@class NSButton, NSLayoutConstraint, NSMatrix, NSSegmentedControl, NSSlider, NSStepper, NSString, NSTextField;

@interface RDArrangeInspectorViewController : RDInspectorViewController <RDInspectorProtocol>
{
    NSSegmentedControl *_frontBackSegmentedControl;
    NSSegmentedControl *_forwardBackwardSegmentedControl;
    NSButton *_wideButton;
    NSButton *_lockButton;
    NSButton *_footerButton;
    NSMatrix *_displayTypeMatrix;
    NSButton *_showButton;
    NSButton *_wrapTextOffRadio;
    NSButton *_wrapTextBoxRadio;
    NSButton *_wrapTextBoxUpDown;
    NSButton *_wrapTextTransparencyRadio;
    NSTextField *_wrapTextThresholdTextField;
    NSSlider *_wrapTextThresholdSlider;
    NSStepper *_wrapTextThresholdStepper;
    NSTextField *_wrapTextMarginTextField;
    NSSlider *_wrapTextMarginSlider;
    NSStepper *_wrapTextMarginStepper;
    NSTextField *_xLabel;
    NSTextField *_xTextField;
    NSStepper *_xStepper;
    NSTextField *_yLabel;
    NSTextField *_yTextField;
    NSStepper *_yStepper;
    NSTextField *_widthLabel;
    NSTextField *_widthTextField;
    NSStepper *_widthStepper;
    NSTextField *_heightLabel;
    NSTextField *_heightTextField;
    NSStepper *_heightStepper;
    NSTextField *_rotationLabel;
    NSTextField *_rotationTextField;
    NSSlider *_rotationSlider;
    NSLayoutConstraint *_htmlViewHeightConstraints;
    NSTextField *_htmlIdTextField;
    double _htmlViewHeight;
    struct CGRect _frame;
}

@property(nonatomic) double htmlViewHeight; // @synthesize htmlViewHeight=_htmlViewHeight;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak NSTextField *htmlIdTextField; // @synthesize htmlIdTextField=_htmlIdTextField;
@property(nonatomic) __weak NSLayoutConstraint *htmlViewHeightConstraints; // @synthesize htmlViewHeightConstraints=_htmlViewHeightConstraints;
@property(nonatomic) __weak NSSlider *rotationSlider; // @synthesize rotationSlider=_rotationSlider;
@property(nonatomic) __weak NSTextField *rotationTextField; // @synthesize rotationTextField=_rotationTextField;
@property(nonatomic) __weak NSTextField *rotationLabel; // @synthesize rotationLabel=_rotationLabel;
@property(nonatomic) __weak NSStepper *heightStepper; // @synthesize heightStepper=_heightStepper;
@property(nonatomic) __weak NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(nonatomic) __weak NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(nonatomic) __weak NSStepper *widthStepper; // @synthesize widthStepper=_widthStepper;
@property(nonatomic) __weak NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(nonatomic) __weak NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(nonatomic) __weak NSStepper *yStepper; // @synthesize yStepper=_yStepper;
@property(nonatomic) __weak NSTextField *yTextField; // @synthesize yTextField=_yTextField;
@property(nonatomic) __weak NSTextField *yLabel; // @synthesize yLabel=_yLabel;
@property(nonatomic) __weak NSStepper *xStepper; // @synthesize xStepper=_xStepper;
@property(nonatomic) __weak NSTextField *xTextField; // @synthesize xTextField=_xTextField;
@property(nonatomic) __weak NSTextField *xLabel; // @synthesize xLabel=_xLabel;
@property(nonatomic) __weak NSStepper *wrapTextMarginStepper; // @synthesize wrapTextMarginStepper=_wrapTextMarginStepper;
@property(nonatomic) __weak NSSlider *wrapTextMarginSlider; // @synthesize wrapTextMarginSlider=_wrapTextMarginSlider;
@property(nonatomic) __weak NSTextField *wrapTextMarginTextField; // @synthesize wrapTextMarginTextField=_wrapTextMarginTextField;
@property(nonatomic) __weak NSStepper *wrapTextThresholdStepper; // @synthesize wrapTextThresholdStepper=_wrapTextThresholdStepper;
@property(nonatomic) __weak NSSlider *wrapTextThresholdSlider; // @synthesize wrapTextThresholdSlider=_wrapTextThresholdSlider;
@property(nonatomic) __weak NSTextField *wrapTextThresholdTextField; // @synthesize wrapTextThresholdTextField=_wrapTextThresholdTextField;
@property(nonatomic) __weak NSButton *wrapTextTransparencyRadio; // @synthesize wrapTextTransparencyRadio=_wrapTextTransparencyRadio;
@property(nonatomic) __weak NSButton *wrapTextBoxUpDown; // @synthesize wrapTextBoxUpDown=_wrapTextBoxUpDown;
@property(nonatomic) __weak NSButton *wrapTextBoxRadio; // @synthesize wrapTextBoxRadio=_wrapTextBoxRadio;
@property(nonatomic) __weak NSButton *wrapTextOffRadio; // @synthesize wrapTextOffRadio=_wrapTextOffRadio;
@property(nonatomic) __weak NSButton *showButton; // @synthesize showButton=_showButton;
@property(nonatomic) __weak NSMatrix *displayTypeMatrix; // @synthesize displayTypeMatrix=_displayTypeMatrix;
@property(nonatomic) __weak NSButton *footerButton; // @synthesize footerButton=_footerButton;
@property(nonatomic) __weak NSButton *lockButton; // @synthesize lockButton=_lockButton;
@property(nonatomic) __weak NSButton *wideButton; // @synthesize wideButton=_wideButton;
@property(nonatomic) __weak NSSegmentedControl *forwardBackwardSegmentedControl; // @synthesize forwardBackwardSegmentedControl=_forwardBackwardSegmentedControl;
@property(nonatomic) __weak NSSegmentedControl *frontBackSegmentedControl; // @synthesize frontBackSegmentedControl=_frontBackSegmentedControl;
- (void).cxx_destruct;
- (void)changeHtmlId:(id)arg1;
- (void)changeRotation:(id)arg1;
- (void)changeShowHide:(id)arg1;
- (void)changeLock:(id)arg1;
- (void)changeFooter:(id)arg1;
- (void)changeWide:(id)arg1;
- (void)frontBack:(id)arg1;
- (void)forwardBackward:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1 preserveWidth:(BOOL)arg2;
- (void)changeFrameSteppers:(id)arg1;
- (void)changeFrame:(id)arg1;
- (void)updateDisplayType:(long long)arg1;
- (void)changeDisplayType:(id)arg1;
- (void)changeMargin:(id)arg1;
- (void)changeTransparency:(id)arg1;
- (void)changeWrapMode:(id)arg1;
- (BOOL)wideItem;
- (id)editor;
- (void)rebuildAndRefreshUI;
- (BOOL)updateShowButton:(id)arg1;
- (BOOL)updateLockButton:(id)arg1;
- (BOOL)updateFooterButton:(id)arg1;
- (BOOL)updateWideButton:(id)arg1;
- (void)updateWrapControls:(id)arg1;
- (BOOL)shouldRefreshOnDrag;
- (void)updateArrangeButtonsDelayed;
- (void)updateArrangeButtons;
- (void)refreshUI;
- (void)willBeDismissed;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

