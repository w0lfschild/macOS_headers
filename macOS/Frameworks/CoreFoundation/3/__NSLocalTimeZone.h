//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone
{
}

+ (BOOL)supportsSecureCoding;
- (id)replacementObjectForPortCoder:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;

@end

