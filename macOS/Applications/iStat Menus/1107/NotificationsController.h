//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SectionController.h"

#import "NotificationRowDelegate.h"

@class BJAButton, NSMutableArray, NSScrollView, NSString, NSView;

@interface NotificationsController : SectionController <NotificationRowDelegate>
{
    BOOL _loadedExisting;
    NSScrollView *_scrollView;
    NSView *_notificationsView;
    NSMutableArray *_notificationItems;
    BJAButton *_addButton;
}

@property(retain, nonatomic) BJAButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSMutableArray *notificationItems; // @synthesize notificationItems=_notificationItems;
@property(retain, nonatomic) NSView *notificationsView; // @synthesize notificationsView=_notificationsView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL loadedExisting; // @synthesize loadedExisting=_loadedExisting;
- (void).cxx_destruct;
- (void)removeNotification:(id)arg1;
- (void)addNotification;
- (void)layoutRows;
- (void)save;
- (void)notificationChanged:(id)arg1;
- (void)prepareToShow;
- (void)collectorChildrenChanged:(id)arg1;
- (void)toggle;
- (void)checkState;
- (void)setState:(BOOL)arg1;
- (void)importedPreferences;
- (void)statusItemChange;
- (void)setup;
- (void)setupIcon;
- (void)didClose;
- (id)sectionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

