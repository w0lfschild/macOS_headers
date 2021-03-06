//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface DBTEAMGroupMembersRemoveError : NSObject <DBSerializable, NSCopying>
{
    NSArray *_membersNotInTeam;
    NSArray *_usersNotFound;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToGroupMembersRemoveError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isUsersNotFound;
- (BOOL)isMembersNotInTeam;
- (BOOL)isGroupNotInTeam;
- (BOOL)isMemberNotInGroup;
- (BOOL)isSystemManagedGroupDisallowed;
- (BOOL)isOther;
- (BOOL)isGroupNotFound;
@property(readonly, nonatomic) NSArray *usersNotFound; // @synthesize usersNotFound=_usersNotFound;
@property(readonly, nonatomic) NSArray *membersNotInTeam; // @synthesize membersNotInTeam=_membersNotInTeam;
- (id)initWithUsersNotFound:(id)arg1;
- (id)initWithMembersNotInTeam:(id)arg1;
- (id)initWithGroupNotInTeam;
- (id)initWithMemberNotInGroup;
- (id)initWithSystemManagedGroupDisallowed;
- (id)initWithOther;
- (id)initWithGroupNotFound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

