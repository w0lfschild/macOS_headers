//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface DayViewGroup : NSObject
{
    BOOL _today;
    NSDate *_date;
    NSString *_dateString;
}

- (void).cxx_destruct;
@property BOOL today; // @synthesize today=_today;
@property(readonly) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDate:(id)arg1;

@end

