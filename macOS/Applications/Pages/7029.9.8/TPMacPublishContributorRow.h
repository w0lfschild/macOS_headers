//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSControl, TPMacPublishLabel, TPMacPublishPopupButton, TPPublishContributor;
@protocol TPMacPublishBookInfoRowDelegate;

@interface TPMacPublishContributorRow : NSStackView
{
    id <TPMacPublishBookInfoRowDelegate> _bookInfoRowDelegate;
    NSStackView *_controlsStackView;
    NSControl *_addRemoveButton;
    TPMacPublishPopupButton *_rolePopupButton;
    TPMacPublishPopupButton *_primaryPopupButton;
    TPMacPublishLabel *_contributorNameField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TPMacPublishLabel *contributorNameField; // @synthesize contributorNameField=_contributorNameField;
@property(readonly, nonatomic) TPMacPublishPopupButton *primaryPopupButton; // @synthesize primaryPopupButton=_primaryPopupButton;
@property(readonly, nonatomic) TPMacPublishPopupButton *rolePopupButton; // @synthesize rolePopupButton=_rolePopupButton;
@property(readonly, nonatomic) NSControl *addRemoveButton; // @synthesize addRemoveButton=_addRemoveButton;
- (void)hidePrimaryPopup:(BOOL)arg1;
@property(readonly, nonatomic) TPPublishContributor *contributorInfo;
- (id)initWithInfo:(id)arg1 rowIndex:(unsigned long long)arg2 bookInfoRowDelegate:(id)arg3;

@end

