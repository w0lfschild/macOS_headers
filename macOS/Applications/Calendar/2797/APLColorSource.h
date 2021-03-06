//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface APLColorSource : NSObject
{
    int _colorGenerator;
    NSMutableDictionary *_calendarColors;
}

+ (int)alternateGenerator;
+ (int)defaultGenerator;
+ (id)defaultColorSource;
- (void).cxx_destruct;
- (id)_patternForNumber:(long long)arg1 of:(long long)arg2;
- (id)_randomPatternForNumber:(long long)arg1 of:(long long)arg2;
- (id)_cyclingGrayLevelForNumber:(long long)arg1 of:(long long)arg2;
- (id)_grayLevelForNumber:(long long)arg1 of:(long long)arg2;
- (void)_updateColorModelWithColors:(id)arg1;
- (id)printColorForCalendarColor:(id)arg1 variant:(int)arg2;
- (void)updateColorModelWithCalendars:(id)arg1;
- (void)setColorGenerator:(int)arg1;
- (id)init;

@end

