//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCAssetHandle.h>

#import <NewsFeed/TSAssetDataProviderType-Protocol.h>

@class NSData, UIImage;
@protocol TSAssetDataProviderType;

@interface FCAssetHandle (NewsFeed) <TSAssetDataProviderType>
@property(nonatomic, readonly) id <TSAssetDataProviderType> assetDataProvider;
- (void)downloadWithGroup:(id)arg1;
@property(nonatomic, readonly) UIImage *fallbackImage;
@property(nonatomic, readonly) BOOL isRawFileConsumable;
@property(nonatomic, readonly) NSData *data;
@end

