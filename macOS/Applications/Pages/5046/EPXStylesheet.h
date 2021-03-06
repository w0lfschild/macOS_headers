//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXStyleGroup, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface EPXStylesheet : NSObject
{
    EPXStyleGroup *mGenericStyleGroup;
    EPXStyleGroup *mTableCellStyleGroup;
    EPXStyleGroup *mParagraphStyleGroup;
    EPXStyleGroup *mCharacterStyleGroup;
    EPXStyleGroup *mListStyleGroup;
    EPXStyleGroup *mBulletStyleGroup;
    EPXStyleGroup *mPositionStyleGroup;
    NSDictionary *mDefaultStyleProperties;
    NSMutableDictionary *mHtmlElementStyleCache;
    NSMutableSet *embeddedFontCache;
}

+ (BOOL)serializeStyles:(id)arg1 writer:(id)arg2 stylesheet:(id)arg3;
+ (BOOL)serializeStyle:(id)arg1 writer:(id)arg2 stylesheet:(id)arg3;
@property(retain, nonatomic) NSMutableSet *embeddedFontCache; // @synthesize embeddedFontCache;
- (BOOL)writeToStream:(id)arg1 state:(id)arg2;
- (id)positionStyleWithOriginalIdentifier:(id)arg1 properties:(id)arg2;
- (id)bulletStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)listStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)characterStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)paragraphStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)tableCellStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)genericStyleWithOriginalIdentifier:(id)arg1 parentStyle:(id)arg2 properties:(id)arg3;
- (id)styleForHtmlElement:(id)arg1;
- (void)addStyleForHtmlElement:(id)arg1 withProperties:(id)arg2;
- (void)setDefaultStyle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

