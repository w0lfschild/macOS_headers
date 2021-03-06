//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KHPhotoFaceInfoProtocol-Protocol.h"

@class NSDictionary, NSString, RDDatabase, RDFace;

@interface ChameleonFaceWrapper : NSObject <KHPhotoFaceInfoProtocol>
{
    RDFace *face;
    RDDatabase *database;
}

@property __weak RDDatabase *database; // @synthesize database;
@property(retain) RDFace *face; // @synthesize face;
- (void).cxx_destruct;
- (struct CGRect)autoRotatedUnitCropRect;
- (struct CGRect)pageLayoutBoundingRectForImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2;
@property(readonly) struct CGPoint pageLayoutUnitBottomRight;
@property(readonly) struct CGPoint pageLayoutUnitBottomLeft;
@property(readonly) struct CGPoint pageLayoutUnitTopRight;
@property(readonly) struct CGPoint pageLayoutUnitTopLeft;
@property(readonly) NSDictionary *pageLayoutAttributes;
@property(readonly) NSString *pageLayoutPersonName;
@property(readonly) NSString *pageLayoutPersonID;
- (id)initWithFace:(id)arg1 andDatabase:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

