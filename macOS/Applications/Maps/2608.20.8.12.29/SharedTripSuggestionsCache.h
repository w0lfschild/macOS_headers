//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSDate, NSDictionary, _PSMapsPredictionContext, _PSMapsSuggester;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SharedTripSuggestionsCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSArray *_suggestions;
    NSArray *_suggestedContacts;
    NSDictionary *_recipientsByHandle;
    NSDate *_lastFreshRequestDate;
    BOOL _requestInProgress;
    NSObject<OS_dispatch_queue> *_requestQueue;
    _PSMapsSuggester *_suggester;
    _PSMapsPredictionContext *_predictionContext;
    GEOObserverHashTable *_observers;
    NSArray *_suggestedRecipients;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;
- (void)_provideAbandonmentFeedback;
- (void)provideAbandonmentFeedback;
- (void)_provideFeedbackForContact:(id)arg1;
- (void)provideFeedbackForContact:(id)arg1;
- (void)_refreshFreshSuggestions;
- (void)requestFreshSuggestions;
@property(readonly, nonatomic) BOOL isRefreshing;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSDictionary *recipientsByHandle;
@property(readonly, nonatomic) NSArray *suggestedContacts;
- (id)suggestions;
- (void)_prepareForSuggestionsIfNeeded;
- (id)init;

@end

