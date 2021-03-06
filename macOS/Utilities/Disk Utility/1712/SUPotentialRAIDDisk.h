//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StorageKit/SKBindableDisk.h>

@class NSMutableArray, NSString;

@interface SUPotentialRAIDDisk : SKBindableDisk
{
    NSMutableArray *_children;
    BOOL _isContainer;
    BOOL _isSystemContainer;
    BOOL _isRAIDMemberContainer;
    long long _futureRoleIndex;
    long long _sortPriority;
    NSString *_title;
    SUPotentialRAIDDisk *_parent;
}

- (void).cxx_destruct;
@property(readonly) __weak SUPotentialRAIDDisk *parent; // @synthesize parent=_parent;
@property(retain) NSString *title; // @synthesize title=_title;
@property long long sortPriority; // @synthesize sortPriority=_sortPriority;
@property long long futureRoleIndex; // @synthesize futureRoleIndex=_futureRoleIndex;
@property(readonly) BOOL isRAIDMemberContainer; // @synthesize isRAIDMemberContainer=_isRAIDMemberContainer;
@property(readonly) BOOL isSystemContainer; // @synthesize isSystemContainer=_isSystemContainer;
@property(readonly) BOOL isContainer; // @synthesize isContainer=_isContainer;
- (void)setParent:(id)arg1;
- (void)determineSortPriority;
- (long long)compare:(id)arg1;
- (void)addChild:(id)arg1;
- (BOOL)hasParent;
- (void)findChildrenInArray:(id)arg1;
- (id)description;
- (id)initWithRepresentedDisk:(id)arg1 forRole:(unsigned long long)arg2;
- (id)initWithRepresentedDisk:(id)arg1;

@end

