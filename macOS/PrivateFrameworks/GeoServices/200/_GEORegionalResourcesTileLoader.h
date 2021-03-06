//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEORegionalResourceTileData, GEOResourceLoader, GEOResourceManifestConfiguration;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesTileLoader : NSObject
{
    GEORegionalResourceTileData *_tile;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceLoader *_resourceLoader;
    struct os_unfair_lock_s _lock;
    struct _GEOTileKey _tileKey;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey *)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) struct _GEOTileKey *tileKeyPtr;
- (void)dealloc;
- (id)init;

@end

