//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSDocumentConflictPanelController, NSTextField;

__attribute__((visibility("hidden")))
@interface _NSDocumentConflictTableCellView : NSTableCellView
{
    NSDocumentConflictPanelController *_controller;
    NSTextField *firstLine;
    NSTextField *secondLine;
}

@property NSDocumentConflictPanelController *controller; // @synthesize controller=_controller;
- (double)additionalWidthRequired;
- (void)showPreview:(id)arg1;

@end

