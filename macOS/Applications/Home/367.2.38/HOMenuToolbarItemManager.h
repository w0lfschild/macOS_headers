//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStaticItemProvider, HOMainTabItemProvider, HUAddTriggerItem, NSArray;
@protocol HOMenuToolbarItemManagerDelegate;

@interface HOMenuToolbarItemManager : HFItemManager
{
    unsigned long long _mode;
    HUAddTriggerItem *_addTriggerItem;
    HFStaticItem *_addSceneItem;
    HFStaticItem *_addRoomItem;
    HOMainTabItemProvider *_tabItemProvider;
    id <HOMenuToolbarItemManagerDelegate> _menuToolbarDelegate;
    NSArray *_addSectionItems;
    HFStaticItem *_homeItem;
    HFStaticItem *_roomsItem;
    HFStaticItem *_automationItem;
    NSArray *_viewSectionItems;
    HFStaticItem *_editRoomItem;
    HFStaticItem *_editHomeItem;
    HFStaticItem *_navigationItem;
    NSArray *_navigationSectionItems;
    HFStaticItemProvider *_staticItemProvider;
}

@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) NSArray *navigationSectionItems; // @synthesize navigationSectionItems=_navigationSectionItems;
@property(retain, nonatomic) HFStaticItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(retain, nonatomic) HFStaticItem *editHomeItem; // @synthesize editHomeItem=_editHomeItem;
@property(retain, nonatomic) HFStaticItem *editRoomItem; // @synthesize editRoomItem=_editRoomItem;
@property(retain, nonatomic) NSArray *viewSectionItems; // @synthesize viewSectionItems=_viewSectionItems;
@property(retain, nonatomic) HFStaticItem *automationItem; // @synthesize automationItem=_automationItem;
@property(retain, nonatomic) HFStaticItem *roomsItem; // @synthesize roomsItem=_roomsItem;
@property(retain, nonatomic) HFStaticItem *homeItem; // @synthesize homeItem=_homeItem;
@property(retain, nonatomic) NSArray *addSectionItems; // @synthesize addSectionItems=_addSectionItems;
@property(readonly, nonatomic) __weak id <HOMenuToolbarItemManagerDelegate> menuToolbarDelegate; // @synthesize menuToolbarDelegate=_menuToolbarDelegate;
@property(retain, nonatomic) HOMainTabItemProvider *tabItemProvider; // @synthesize tabItemProvider=_tabItemProvider;
@property(retain, nonatomic) HFStaticItem *addRoomItem; // @synthesize addRoomItem=_addRoomItem;
@property(retain, nonatomic) HFStaticItem *addSceneItem; // @synthesize addSceneItem=_addSceneItem;
@property(retain, nonatomic) HUAddTriggerItem *addTriggerItem; // @synthesize addTriggerItem=_addTriggerItem;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (BOOL)_shouldDisableNavigation;
- (BOOL)_itemIsVisible:(id)arg1;
- (id)_constructDefaultNavigationItem;
@property(readonly, nonatomic) BOOL hasVisibleNavigationItems;
@property(readonly, nonatomic) BOOL hasVisibleEditHomeItem;
@property(readonly, nonatomic) BOOL hasVisibleEditRoomItem;
@property(readonly, nonatomic) BOOL hasVisibleAddSceneItem;
@property(readonly, nonatomic) BOOL hasVisibleAddTriggerItem;
@property(readonly, nonatomic) BOOL hasVisibleAutomationItem;
@property(readonly, nonatomic) BOOL hasVisibleRoomItem;
@property(readonly, nonatomic) BOOL hasVisibleHomeItem;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2;

@end

