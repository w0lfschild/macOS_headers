//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Bugsnag : NSObject
{
}

+ (BOOL)bugsnagStarted;
+ (void)clearTabWithName:(id)arg1;
+ (void)addAttribute:(id)arg1 withValue:(id)arg2 toTabWithName:(id)arg3;
+ (void)notify:(id)arg1 withData:(id)arg2 atSeverity:(id)arg3 atDepth:(unsigned long long)arg4;
+ (void)notify:(id)arg1 withData:(id)arg2 atSeverity:(id)arg3;
+ (void)notify:(id)arg1 withData:(id)arg2;
+ (void)notify:(id)arg1;
+ (id)notifier;
+ (id)instance;
+ (id)configuration;
+ (void)startBugsnagWithConfiguration:(id)arg1;
+ (void)startBugsnagWithApiKey:(id)arg1;

@end

