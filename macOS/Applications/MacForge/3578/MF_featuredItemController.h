//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MSPlugin, NSButton, NSImageView, NSProgressIndicator, NSTextField, SYFlatButton;

@interface MF_featuredItemController : NSViewController
{
    MSPlugin *plug;
    NSTextField *_bundleName;
    NSTextField *_bundleDesc;
    NSTextField *_bundleDescFull;
    NSImageView *_bundlePreview;
    NSButton *_bundleBanner;
    NSButton *_bundleButton;
    SYFlatButton *_bundleGet;
    NSProgressIndicator *_bundleProgress;
}

- (void).cxx_destruct;
@property(retain) NSProgressIndicator *bundleProgress; // @synthesize bundleProgress=_bundleProgress;
@property(retain) SYFlatButton *bundleGet; // @synthesize bundleGet=_bundleGet;
@property(retain) NSButton *bundleButton; // @synthesize bundleButton=_bundleButton;
@property(retain) NSButton *bundleBanner; // @synthesize bundleBanner=_bundleBanner;
@property(retain) NSImageView *bundlePreview; // @synthesize bundlePreview=_bundlePreview;
@property(retain) NSTextField *bundleDescFull; // @synthesize bundleDescFull=_bundleDescFull;
@property(retain) NSTextField *bundleDesc; // @synthesize bundleDesc=_bundleDesc;
@property(retain) NSTextField *bundleName; // @synthesize bundleName=_bundleName;
- (void)moreInfo:(id)arg1;
- (void)getOrOpen:(id)arg1;
- (void)setupWithPlugin:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

