//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface IFFailureRequest : NSObject
{
    NSString *elementClassName;
    NSNumber *crashAtProgress;
}

@property(retain) NSNumber *crashAtProgress; // @synthesize crashAtProgress;
@property(retain) NSString *elementClassName; // @synthesize elementClassName;
- (id)description;
- (void)dealloc;
- (id)initWithElementName:(id)arg1 crashAtProgress:(id)arg2;

@end

