//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class TPPageTemplate;

@interface Pages.TPMacTemplateEditingBarViewController : NSViewController
{
    // Error parsing type: , name: kBarHeight
    // Error parsing type: , name: kButtonTrailingMargin
    // Error parsing type: , name: kButtonTopMargin
    // Error parsing type: , name: kButtonBottomMargin
    // Error parsing type: , name: kButtonMinWidth
    // Error parsing type: , name: kBackgroundColor
    // Error parsing type: , name: documentWindowController
    // Error parsing type: , name: pageTemplate
    // Error parsing type: , name: label
    // Error parsing type: , name: doneButton
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)donePressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) __weak TPPageTemplate *pageTemplate; // @synthesize pageTemplate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentWindowController:(id)arg1 pageTemplate:(id)arg2;

@end

