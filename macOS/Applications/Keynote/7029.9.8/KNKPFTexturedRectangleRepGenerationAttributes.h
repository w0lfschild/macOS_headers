//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFReading-Protocol.h"
#import "KNKPFWriting-Protocol.h"

@class KNKPFBezierPath, NSArray, NSDictionary, NSString, TSUColor;

@interface KNKPFTexturedRectangleRepGenerationAttributes : NSObject <KNKPFReading, KNKPFWriting>
{
    BOOL _infoGeometryFlippedHorizontal;
    BOOL _infoGeometryFlippedVertical;
    double _infoGeometryAngle;
    NSString *_infoHeadLineEndIdentifier;
    NSString *_infoTailLineEndIdentifier;
    double _strokeWidth;
    TSUColor *_strokeColor;
    NSString *_strokeName;
    NSArray *_strokePattern;
    double _strokePatternPhase;
    KNKPFBezierPath *_infoShapePath;
    struct CGPoint _infoGeometryPosition;
    struct CGSize _infoGeometrySize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KNKPFBezierPath *infoShapePath; // @synthesize infoShapePath=_infoShapePath;
@property(nonatomic) double strokePatternPhase; // @synthesize strokePatternPhase=_strokePatternPhase;
@property(retain, nonatomic) NSArray *strokePattern; // @synthesize strokePattern=_strokePattern;
@property(copy, nonatomic) NSString *strokeName; // @synthesize strokeName=_strokeName;
@property(retain, nonatomic) TSUColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(copy, nonatomic) NSString *infoTailLineEndIdentifier; // @synthesize infoTailLineEndIdentifier=_infoTailLineEndIdentifier;
@property(copy, nonatomic) NSString *infoHeadLineEndIdentifier; // @synthesize infoHeadLineEndIdentifier=_infoHeadLineEndIdentifier;
@property(nonatomic) double infoGeometryAngle; // @synthesize infoGeometryAngle=_infoGeometryAngle;
@property(nonatomic) BOOL infoGeometryFlippedVertical; // @synthesize infoGeometryFlippedVertical=_infoGeometryFlippedVertical;
@property(nonatomic) BOOL infoGeometryFlippedHorizontal; // @synthesize infoGeometryFlippedHorizontal=_infoGeometryFlippedHorizontal;
@property(nonatomic) struct CGSize infoGeometrySize; // @synthesize infoGeometrySize=_infoGeometrySize;
@property(nonatomic) struct CGPoint infoGeometryPosition; // @synthesize infoGeometryPosition=_infoGeometryPosition;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

