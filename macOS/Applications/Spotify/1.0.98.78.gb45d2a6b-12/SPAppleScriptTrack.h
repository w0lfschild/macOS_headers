//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPAppleScriptItem.h"

@class NSData, NSNumber, NSString;

@interface SPAppleScriptTrack : SPAppleScriptItem
{
    shared_ptr_8b48272b _trackInfo;
    NSData *_coverData;
}

@property(retain) NSData *coverData; // @synthesize coverData=_coverData;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) NSData *cover;
@property(readonly) NSString *coverURL;
@property(readonly) NSString *spotifyURL;
@property(readonly) NSNumber *popularity;
@property(readonly) NSNumber *trackNumber;
@property(readonly) NSNumber *playCount;
@property(readonly) NSNumber *duration;
@property(readonly) NSNumber *discNumber;
- (id)applescriptID;
@property(readonly) NSString *title;
@property(readonly) NSString *albumArtist;
@property(readonly) NSString *album;
@property(readonly) NSString *artist;
- (id)emptyStringOrStringFromString:(basic_string_23d93216)arg1;
- (id)initWithTrackInfo:(shared_ptr_8b48272b)arg1 parent:(id)arg2;

@end

