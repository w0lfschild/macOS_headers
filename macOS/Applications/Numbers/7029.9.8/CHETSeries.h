//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHETSeries : NSObject
{
}

+ (_Bool)isSeriesFromSpecificAxis:(id)arg1 isForPrimary:(_Bool)arg2 state:(id)arg3;
+ (_Bool)isSeriesDataHiddenForSeriesIndex:(unsigned long long)arg1 state:(id)arg2;
+ (unsigned long long)seriesCountFromSeriesData:(id)arg1;
+ (id)chdSeriesFor:(id)arg1 state:(id)arg2;
+ (id)mapFrom:(id)arg1 state:(id)arg2;
+ (int)edTrendLineTypeFrom:(long long)arg1;
+ (int)edErrorBarValueTypeFrom:(long long)arg1;
+ (int)edErrorBarTypeFrom:(long long)arg1;
+ (void)mapChartSeriesTrendline:(id)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (void)mapChartSeriesErrorBars:(id)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (void)validateSeriesDataLabelPosition:(id)arg1 forSeriesType:(id)arg2;
+ (void)mapChartSeriesStyle:(id)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (Class)chetSeriesClass:(id)arg1;

@end

