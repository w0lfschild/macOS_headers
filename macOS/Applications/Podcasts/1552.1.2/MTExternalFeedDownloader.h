//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTURLSessionManager.h"

@class NSObject, _TtC8Podcasts24FeedManagerConfiguration;
@protocol MTExternalFeedDownloaderDelegate, OS_dispatch_queue;

@interface MTExternalFeedDownloader : MTURLSessionManager
{
    BOOL _sessionTaskStateReloaded;
    id <MTExternalFeedDownloaderDelegate> _delegate;
    _TtC8Podcasts24FeedManagerConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property BOOL sessionTaskStateReloaded; // @synthesize sessionTaskStateReloaded=_sessionTaskStateReloaded;
@property(retain, nonatomic) _TtC8Podcasts24FeedManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <MTExternalFeedDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isFileExpired:(id)arg1 inDirectory:(id)arg2;
- (void)_removeTempFiles;
- (void)_enqueueTempFilesDeletion;
- (BOOL)createPrivateTempDirIfNeeded;
- (id)privatePathForDownload;
- (id)temporaryDirectory;
- (void)restoreBackgroundDownloadTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;
- (void)startDownloadTaskForFeedURL:(id)arg1 userInitiated:(BOOL)arg2 useBackgroundFetch:(BOOL)arg3;
- (void)configureSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

