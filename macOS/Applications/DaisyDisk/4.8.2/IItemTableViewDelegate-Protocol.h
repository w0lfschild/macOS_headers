//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class Item, ItemTableView, NSEvent;

@protocol IItemTableViewDelegate
- (void)itemTableViewDidScoll:(ItemTableView *)arg1;
- (void)itemTableViewDidChangeScollbarVisibility:(ItemTableView *)arg1;
- (void)itemTableViewWantsRefresh:(ItemTableView *)arg1;
- (void)itemTableViewDidDisposeAllItems:(ItemTableView *)arg1;
- (void)itemTableView:(ItemTableView *)arg1 didDisposeItem:(Item *)arg2;
- (void)itemTableViewInsertAnimationDidFadeIn:(ItemTableView *)arg1;
- (void)itemTableViewInsertAnimationDidUnheal:(ItemTableView *)arg1;
- (void)itemTableViewRemoveAnimationDidHeal:(ItemTableView *)arg1;
- (void)itemTableViewRemoveAnimationDidFadeOut:(ItemTableView *)arg1;
- (void)itemTableViewMouseDidFirstMove:(ItemTableView *)arg1;
- (void)itemTableView:(ItemTableView *)arg1 userDidStartDraggingItem:(Item *)arg2 initialLocation:(struct CGPoint)arg3 event:(NSEvent *)arg4;
- (void)itemTableViewUserDidClickSelectionButton:(ItemTableView *)arg1;
- (void)itemTableView:(ItemTableView *)arg1 userDidCommandClickItem:(Item *)arg2;
- (void)itemTableView:(ItemTableView *)arg1 userDidClickItem:(Item *)arg2;
- (void)itemTableView:(ItemTableView *)arg1 userDidUncheckItem:(Item *)arg2;
- (void)itemTableView:(ItemTableView *)arg1 userDidCheckItem:(Item *)arg2;
- (void)itemTableView:(ItemTableView *)arg1 userDidSelectItem:(Item *)arg2;
@end

