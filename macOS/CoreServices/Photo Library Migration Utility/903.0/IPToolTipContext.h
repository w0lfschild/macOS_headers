//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface IPToolTipContext : NSObject
{
    long long _tag;
    struct CGPoint _point;
}

+ (id)contextWithTag:(long long)arg1 point:(struct CGPoint)arg2;
- (id).cxx_construct;
- (void)setPoint:(struct CGPoint)arg1;
- (struct CGPoint)point;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end

