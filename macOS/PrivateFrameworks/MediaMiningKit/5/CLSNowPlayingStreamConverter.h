//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CLSNowPlayingStreamConverter : NSObject
{
    unsigned long long _options;
}

+ (id)recognizedMusicSources;
+ (unsigned long long)defaultOptions;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (BOOL)_canUseEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)init;

@end

