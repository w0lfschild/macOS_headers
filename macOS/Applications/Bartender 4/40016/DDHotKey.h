//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDHotKey : NSObject
{
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) CDUnknownBlockType task;
@property(readonly, nonatomic) unsigned long long modifierFlags;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, retain, nonatomic) id object;
@property(readonly, nonatomic) SEL action;
@property(readonly, retain, nonatomic) id target;

@end

