//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIUserActionUserActivityOpener.h"

@class CNLSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener>
{
    CNLSApplicationWorkspace *_applicationWorkspace;
}

+ (id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNLSApplicationWorkspace *applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

