//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICImageAttachmentView.h"

#import "NSAccessibilityGroup-Protocol.h"

@class CALayer, NSImage, NSString;

@interface ICMovieAttachmentView : ICImageAttachmentView <NSAccessibilityGroup>
{
    BOOL _icaxIsShowingPlayer;
    CALayer *playButtonLayer;
    struct NSImage *playButtonImage;
    struct CGRect _playButtonFrame;
}

@property(nonatomic) BOOL icaxIsShowingPlayer; // @synthesize icaxIsShowingPlayer=_icaxIsShowingPlayer;
@property(nonatomic) struct CGRect playButtonFrame; // @synthesize playButtonFrame=_playButtonFrame;
@property(retain, nonatomic) NSImage *playButtonImage; // @synthesize playButtonImage;
@property(retain, nonatomic) CALayer *playButtonLayer; // @synthesize playButtonLayer;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)makePlayerViewFirstResponderIfNecessary;
- (void)didTapAttachment:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)selectAttachmentView:(id)arg1;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (void)willDeleteAttachment;
- (void)updateImageSize;
- (BOOL)supportsFreeTransformGesture;
- (void)sharedInit;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHelp;
- (id)icaxTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

