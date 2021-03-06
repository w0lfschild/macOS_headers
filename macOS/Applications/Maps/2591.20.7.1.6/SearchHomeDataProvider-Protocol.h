//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SearchHomeDataProvider <NSObject>
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSArray *objects;
- (id)initWithObjects:(NSArray *)arg1 type:(long long)arg2 identifier:(NSString *)arg3 title:(NSString *)arg4;

@optional
@property(nonatomic) BOOL wantsOneColumnLayout;
@property(readonly, nonatomic) NSArray *viewModels;
@property(readonly, nonatomic) NSString *actionTitle;
- (NSArray *)objectsForAnalytics;
@end

