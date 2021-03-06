//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TMAInspectorPaneController;

@protocol TMAInspectorPaneProvider <NSObject>
- (TMAInspectorPaneController *)inspectorControllerForIdentifier:(NSString *)arg1;
- (NSArray *)paneIdentifiersForEditors:(NSArray *)arg1;

@optional
@property(readonly) BOOL isRestorable;
@property(readonly) NSString *localizedProviderName;
- (BOOL)shouldAddScrollViewForIdentifier:(NSString *)arg1;
- (NSString *)localizedTabNameForIdentifier:(NSString *)arg1 editors:(NSArray *)arg2;
- (NSString *)localizedTabNameForIdentifier:(NSString *)arg1;
- (BOOL)shouldHideTabsForEditors:(NSArray *)arg1;
- (BOOL)shouldCheckTabHistoryForPaneIdentifiers:(NSArray *)arg1 editors:(NSArray *)arg2 editorsDidChange:(BOOL)arg3;
- (NSString *)defaultPaneIdentifierForPaneIdentifiersWithNoHistory:(NSArray *)arg1 editors:(NSArray *)arg2;
- (NSString *)selectedPaneIdentifierForPaneIdentifiers:(NSArray *)arg1 editors:(NSArray *)arg2 previousIdentifier:(NSString *)arg3 editorsDidChange:(BOOL)arg4 newCanvasObjectAdded:(BOOL)arg5;
@end

