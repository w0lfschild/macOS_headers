//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECLocalMessageActionBuilder.h"

@class NSArray, NSURL;

@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>
@property(retain, nonatomic) NSArray *itemsToDelete;
@property(retain, nonatomic) NSArray *itemsToCopy;
@property(retain, nonatomic) NSArray *itemsToDownload;
@property(retain, nonatomic) NSURL *destinationMailboxURL;
@property(retain, nonatomic) NSURL *sourceMailboxURL;
@property(nonatomic) long long transferType;
@end

