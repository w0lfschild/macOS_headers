//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPMuninContext-Protocol.h"

@class GEOPDMuninViewState, GEOPDPhotoPosition, GEOTileCoordinate, NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface RAPMuninContextImpl : NSObject <RAPMuninContext>
{
    BOOL _muninLabelsEnabled;
    unsigned int _muninMetadataTileBuildId;
    unsigned long long _muninImageDataId;
    NSData *_muninSnapshotImageData;
    NSArray *_reportedMuninImageResources;
    GEOPDPhotoPosition *_reportedMuninPhotoPosition;
    NSArray *_reportedMuninRoadLabels;
    GEOTileCoordinate *_reportedMuninTileCoordinate;
    GEOPDMuninViewState *_reportedMuninViewState;
    NSArray *_reportedVisibleMUIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *reportedVisibleMUIDs; // @synthesize reportedVisibleMUIDs=_reportedVisibleMUIDs;
@property(readonly, nonatomic) GEOPDMuninViewState *reportedMuninViewState; // @synthesize reportedMuninViewState=_reportedMuninViewState;
@property(readonly, nonatomic) GEOTileCoordinate *reportedMuninTileCoordinate; // @synthesize reportedMuninTileCoordinate=_reportedMuninTileCoordinate;
@property(readonly, nonatomic) NSArray *reportedMuninRoadLabels; // @synthesize reportedMuninRoadLabels=_reportedMuninRoadLabels;
@property(readonly, nonatomic) GEOPDPhotoPosition *reportedMuninPhotoPosition; // @synthesize reportedMuninPhotoPosition=_reportedMuninPhotoPosition;
@property(readonly, nonatomic) NSArray *reportedMuninImageResources; // @synthesize reportedMuninImageResources=_reportedMuninImageResources;
@property(readonly, nonatomic) NSData *muninSnapshotImageData; // @synthesize muninSnapshotImageData=_muninSnapshotImageData;
@property(nonatomic) unsigned int muninMetadataTileBuildId; // @synthesize muninMetadataTileBuildId=_muninMetadataTileBuildId;
@property(readonly, nonatomic) BOOL muninLabelsEnabled; // @synthesize muninLabelsEnabled=_muninLabelsEnabled;
@property(nonatomic) unsigned long long muninImageDataId; // @synthesize muninImageDataId=_muninImageDataId;
- (id)initWithMuninView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

