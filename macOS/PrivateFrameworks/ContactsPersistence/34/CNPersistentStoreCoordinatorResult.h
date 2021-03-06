//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorResult : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    BOOL _pristineDatabase;
    BOOL _didMigrate;
}

+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;
+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly) BOOL didMigrate; // @synthesize didMigrate=_didMigrate;
@property(readonly, getter=isPristineDatabase) BOOL pristineDatabase; // @synthesize pristineDatabase=_pristineDatabase;
@property(readonly) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)initWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;

@end

