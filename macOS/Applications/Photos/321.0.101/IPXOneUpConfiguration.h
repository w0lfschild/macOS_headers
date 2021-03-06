//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface IPXOneUpConfiguration : NSObject
{
    BOOL _editEnabled;
    BOOL _editLocked;
    BOOL _showInMomentEnabled;
    BOOL _automaticVideoPlaybackEnabled;
    CDUnknownBlockType _saveTrimAsNewVideoHandler;
}

+ (id)defaultEditConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType saveTrimAsNewVideoHandler; // @synthesize saveTrimAsNewVideoHandler=_saveTrimAsNewVideoHandler;
@property(nonatomic) BOOL automaticVideoPlaybackEnabled; // @synthesize automaticVideoPlaybackEnabled=_automaticVideoPlaybackEnabled;
@property(nonatomic) BOOL showInMomentEnabled; // @synthesize showInMomentEnabled=_showInMomentEnabled;
@property(nonatomic) BOOL editLocked; // @synthesize editLocked=_editLocked;
@property(nonatomic) BOOL editEnabled; // @synthesize editEnabled=_editEnabled;

@end

