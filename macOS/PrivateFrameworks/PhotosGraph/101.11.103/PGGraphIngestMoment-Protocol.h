//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PGGraphIngestMoment <NSObject>
@property(readonly, nonatomic) double behavioralScore;
@property(readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property(readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property(readonly, nonatomic) BOOL containsNonJunkAssets;
@property(readonly, nonatomic) BOOL containsBetterScoringAsset;
@property(readonly, nonatomic) BOOL hasAssetsWithInterestingScenes;
@property(readonly, nonatomic) BOOL hasHigherThanImprovedAssets;
@property(readonly, nonatomic) double inhabitationScore;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property(readonly, nonatomic) unsigned long long numberOfItemsWithPersons;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) double contentScore;
@property(readonly, nonatomic) BOOL isInteresting;
@property(readonly, nonatomic) BOOL isSmartInteresting;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@end

