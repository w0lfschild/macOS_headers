//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSActionRecord : NSObject
{
    SEL _action;
    id _target;
    id _sender;
    NSString *_actionTitle;
    long long _tag;
    BOOL _canUseResponderChain;
    BOOL _fromMainMenu;
}

- (void).cxx_destruct;
@property(readonly) BOOL fromMainMenu; // @synthesize fromMainMenu=_fromMainMenu;
@property(readonly) BOOL canUseResponderChain; // @synthesize canUseResponderChain=_canUseResponderChain;
@property(readonly, copy) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly) long long tag; // @synthesize tag=_tag;
@property(readonly) SEL action; // @synthesize action=_action;
- (void)dealloc;
- (id)initWithAction:(SEL)arg1 target:(id)arg2 sender:(id)arg3;

@end

