//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXAdjustmentBrickTitledController.h"

#import "ILKBarSliderDelegate-Protocol.h"
#import "IPXSamplerOverlayDelegate-Protocol.h"
#import "NSMenuItemValidation-Protocol.h"
#import "PADescriptionEditReceiver-Protocol.h"

@class ILKBarSlider, IPXSamplerOverlayController, NSButton, NSLayoutConstraint, NSPopUpButton, NSString, PAWhiteBalanceController;

__attribute__((visibility("hidden")))
@interface IPXWhiteBalanceBrickController : IPXAdjustmentBrickTitledController <PADescriptionEditReceiver, IPXSamplerOverlayDelegate, ILKBarSliderDelegate, NSMenuItemValidation>
{
    NSButton *_eyeDropperButton;
    NSPopUpButton *_typePopup;
    PAWhiteBalanceController *_whiteBalanceController;
    int _currentWBType;
    NSLayoutConstraint *_grayConstraint;
    NSLayoutConstraint *_faceConstraint;
    NSLayoutConstraint *_tempTintConstraint;
    NSLayoutConstraint *_warmConstraint;
    ILKBarSlider *_grayWarmthSlider;
    ILKBarSlider *_faceWarmthSlider;
    ILKBarSlider *_tempSlider;
    ILKBarSlider *_tintSlider;
    ILKBarSlider *_warmTempSlider;
    ILKBarSlider *_warmTintSlider;
    IPXSamplerOverlayController *_overlayController;
    NSString *_currentAssetUuid;
    BOOL _currentAssetHasiOSWB;
}

- (void).cxx_destruct;
- (void)overlayShouldDismiss:(id)arg1;
- (id)overlayBeginColorPick:(id)arg1;
- (void)overlay:(id)arg1 pickedColor:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isExpandable;
- (BOOL)hasAuto;
- (id)instructionForWhiteBalanceType:(int)arg1;
- (void)_showOverlay:(BOOL)arg1;
- (void)a_toggleWhiteBalanceEyedropper:(id)arg1;
- (void)reset:(id)arg1;
- (void)a_typeChanged:(id)arg1;
- (void)updateControlsWithOperation:(id)arg1;
- (void)setBrickValue:(id)arg1 forKey:(id)arg2;
- (void)_updateControlsWithOperation:(id)arg1 updateState:(BOOL)arg2;
- (void)_updateWBType:(int)arg1 animate:(BOOL)arg2;
- (void)_updateFinalSlidersVisibilityForWBType:(int)arg1;
- (void)_updateSliderConstraintsForWBType:(int)arg1;
- (void)prepareForReuse;
- (id)sliders;
- (void)loadControlsForOperation:(id)arg1;
- (void)updateWBMenuForCurrentWBType;
- (void)loadView;
- (void)_setUpTintSliderColors:(id)arg1;
- (void)_setUpWarmthSliderColors:(id)arg1;
- (id)_sliderForInputKey:(id)arg1 operation:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 operationUUID:(id)arg2 delegate:(id)arg3;
- (id)_wbController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

