//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModuleController.h"

@class NSButton;

@interface PrefsLoopsView : ModuleController
{
    NSButton *lpFilterForMoreRelevantResultsBtn;
    NSButton *lpResetBtn;
    NSButton *lpDisplayOriginalTempoAndKeyBtn;
}

- (void).cxx_destruct;
- (void)change_lpDisplayOriginalTempoAndKey:(id)arg1;
- (void)change_lpReset:(id)arg1;
- (void)change_lpFilterForMoreRelevantResults:(id)arg1;
- (void)updateUI;
- (void)awakeFromNib;
- (void)willDisappear;
- (void)willAppear;
- (void)handleUM_GLOBALPREFS:(id)arg1;

@end

