//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDefaultsInterfaceStyleObserver : NSObject
{
    NSString *_notificationName;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)_didChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)observeUserDefaults:(id)arg1 key:(id)arg2;
- (id)initWithNotificationName:(id)arg1 darwinNotification:(const char *)arg2;

@end

