//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CSKDBItem : NSObject
{
    NSURL *_dbURL;
    long long _urgency;
    long long _purgePriority;
    NSString *_path;
}

+ (id)allItems;
@property(retain) NSString *path; // @synthesize path=_path;
@property long long purgePriority; // @synthesize purgePriority=_purgePriority;
@property long long urgency; // @synthesize urgency=_urgency;
@property(retain) NSURL *dbURL; // @synthesize dbURL=_dbURL;
- (void).cxx_destruct;
- (id)lastUserAccessDate;
- (id)initWithURL:(id)arg1;

@end

