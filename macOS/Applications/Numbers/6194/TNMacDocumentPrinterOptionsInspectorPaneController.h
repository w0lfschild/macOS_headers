//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/TMAInspectorPaneController.h>

@class NSPopUpButton, NSTextField;

@interface TNMacDocumentPrinterOptionsInspectorPaneController : TMAInspectorPaneController
{
    NSTextField *_printerPageSizeLabel;
    NSPopUpButton *_printerPopup;
    NSPopUpButton *_pageSizePopup;
}

@property(retain, nonatomic) NSPopUpButton *pageSizePopup; // @synthesize pageSizePopup=_pageSizePopup;
@property(retain, nonatomic) NSPopUpButton *printerPopup; // @synthesize printerPopup=_printerPopup;
@property(retain, nonatomic) NSTextField *printerPageSizeLabel; // @synthesize printerPageSizeLabel=_printerPageSizeLabel;
- (void).cxx_destruct;
- (void)p_updateModelFromPopoverSelection;
- (void)paperSizeSelectionChanged:(id)arg1;
- (void)printerSelectionChanged:(id)arg1;
- (id)p_selectedPrinterID;
- (void)p_updatePaperListPopup;
- (void)p_updatePopoverSelectionFromModel;
- (void)p_endObserving;
- (void)p_beginObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)viewDidLoad;
- (id)nibName;

@end

