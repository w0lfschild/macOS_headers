//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ChatCollectionViewScrollState, NSIndexSet;

@interface ChatCollectionViewLayoutInvalidationContext : NSObject
{
    BOOL _invalidateSubviewLayout;
    BOOL _invalidateCachedLayout;
    BOOL _updateMessageStates;
    ChatCollectionViewScrollState *_scrollState;
    unsigned long long _scrollingPriority;
    NSIndexSet *_invalidIndexes;
}

@property(nonatomic) BOOL updateMessageStates; // @synthesize updateMessageStates=_updateMessageStates;
@property(nonatomic) BOOL invalidateCachedLayout; // @synthesize invalidateCachedLayout=_invalidateCachedLayout;
@property(nonatomic) BOOL invalidateSubviewLayout; // @synthesize invalidateSubviewLayout=_invalidateSubviewLayout;
@property(copy, nonatomic) NSIndexSet *invalidIndexes; // @synthesize invalidIndexes=_invalidIndexes;
@property(nonatomic) unsigned long long scrollingPriority; // @synthesize scrollingPriority=_scrollingPriority;
@property(retain, nonatomic) ChatCollectionViewScrollState *scrollState; // @synthesize scrollState=_scrollState;
- (void).cxx_destruct;
- (id)description;

@end

