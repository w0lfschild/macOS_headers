//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITStyle : NSObject
{
}

+ (id)getMappedStyleId:(id)arg1 theme:(id)arg2;
+ (id)paragraphStyleFor:(id)arg1 documentState:(id)arg2;
+ (id)nilCharacterStyle:(id)arg1;
+ (id)characterStyleFor:(id)arg1 documentState:(id)arg2;
+ (id)map:(id)arg1 mapParagraphProperties:(BOOL)arg2 documentState:(id)arg3;
+ (BOOL)hasTocStyleName:(id)arg1;
+ (id)tocPrefixes;
+ (id)mapTocParagraphStyleFrom:(id)arg1 documentState:(id)arg2;
+ (id)mapParagraphStyleFrom:(id)arg1 documentState:(id)arg2;
+ (id)mapCharacterStyleFrom:(id)arg1 documentState:(id)arg2;
+ (void)recursivelyMapCharacterPropertiesFrom:(id)arg1 to:(id)arg2 documentState:(id)arg3;

@end

