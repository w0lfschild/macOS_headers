//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMAppTouchBarController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class ICMImageGalleryWindowController, NSArray, NSButton, NSCustomTouchBarItem, NSGroupTouchBarItem, NSPopoverTouchBarItem, NSString, NSTouchBar;

@interface ICMImageGalleryTouchBarController : ICMAppTouchBarController <NSTouchBarDelegate>
{
    BOOL _shouldRotateLeft;
    ICMImageGalleryWindowController *_windowController;
    NSTouchBar *_internalTouchBar;
    NSGroupTouchBarItem *_groupBarItem;
    NSCustomTouchBarItem *_rotateBarItem;
    NSCustomTouchBarItem *_cropBarItem;
    NSPopoverTouchBarItem *_filterBarItem;
    NSButton *_rotateButton;
    NSButton *_cropButton;
    NSArray *_filterButtons;
}

@property(retain, nonatomic) NSArray *filterButtons; // @synthesize filterButtons=_filterButtons;
@property(retain, nonatomic) NSButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) NSButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) NSPopoverTouchBarItem *filterBarItem; // @synthesize filterBarItem=_filterBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *cropBarItem; // @synthesize cropBarItem=_cropBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *rotateBarItem; // @synthesize rotateBarItem=_rotateBarItem;
@property(retain, nonatomic) NSGroupTouchBarItem *groupBarItem; // @synthesize groupBarItem=_groupBarItem;
@property(retain, nonatomic) NSTouchBar *internalTouchBar; // @synthesize internalTouchBar=_internalTouchBar;
@property(nonatomic) __weak ICMImageGalleryWindowController *windowController; // @synthesize windowController=_windowController;
@property(nonatomic) BOOL shouldRotateLeft; // @synthesize shouldRotateLeft=_shouldRotateLeft;
- (void).cxx_destruct;
- (id)imageForFilterType:(short)arg1;
- (id)identifierForFilterType:(short)arg1;
- (id)filterButtonForType:(short)arg1;
- (void)setSelectedFilterTypes:(id)arg1;
- (void)updateSelectedFilterTypesIfNecessary;
- (void)filterBarButtonPressed:(id)arg1;
- (void)cropButtonPressed:(id)arg1;
- (void)rotateLeftButtonPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithImageGalleryWindowController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

