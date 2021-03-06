//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import "NSSecureCoding.h"

@class NSString;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    NSString *_fileProviderIdentifier;
    NSString *_itemIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
+ (id)knownFileProviderIdentifiersSoFar;
- (void).cxx_destruct;
@property(readonly, copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2;

@end

