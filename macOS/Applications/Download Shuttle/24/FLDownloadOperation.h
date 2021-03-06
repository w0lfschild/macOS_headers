//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "FLHTTPChunkDownloadRequestDelegate.h"
#import "FLHTTPHeadRequestDelegate.h"

@class DMDownloadOperationTask, FLDownloadWrapper, FLHTTPHeadRequest, FLTimer, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSString, NSURL;

@interface FLDownloadOperation : NSOperation <FLHTTPHeadRequestDelegate, FLHTTPChunkDownloadRequestDelegate>
{
    BOOL _isPaused;
    BOOL _isFinalizing;
    BOOL _isStarting;
    BOOL _isResumable;
    BOOL _needsCredentials;
    BOOL _hasError;
    BOOL _isCompleted;
    BOOL _didStart;
    BOOL _flExecuting;
    BOOL _completed;
    id <FLDownloadOperationDelegate> _delegate;
    unsigned long long _numberOfConnections;
    NSDate *_scheduledDate;
    DMDownloadOperationTask *_scheduledDownloadTask;
    NSString *_username;
    NSString *_password;
    NSError *_error;
    NSURL *_url;
    NSString *_destinationPath;
    unsigned long long _contentLength;
    double _remainingTime;
    double _avgSpeed;
    double _totalSpeed;
    unsigned long long _totalDownloaded;
    NSDate *_startDate;
    NSDate *_endDate;
    double _elapsedTimeOffset;
    FLHTTPHeadRequest *_headRequest;
    NSMutableArray *_downloadRequests;
    long long _totalFinished;
    FLDownloadWrapper *_downloadWrapper;
    NSString *_temporaryFileContainerPath;
    FLTimer *_calculationTimer;
    NSMutableArray *_avgSpeedArray;
    NSURL *_destinationURL;
}

+ (id)operationWithJSONRepresentation:(id)arg1;
+ (id)operationWithURL:(id)arg1 destinationPath:(id)arg2 numberOfConnections:(unsigned long long)arg3;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain) NSMutableArray *avgSpeedArray; // @synthesize avgSpeedArray=_avgSpeedArray;
@property(retain, nonatomic) FLTimer *calculationTimer; // @synthesize calculationTimer=_calculationTimer;
@property(copy, nonatomic) NSString *temporaryFileContainerPath; // @synthesize temporaryFileContainerPath=_temporaryFileContainerPath;
@property(retain, nonatomic) FLDownloadWrapper *downloadWrapper; // @synthesize downloadWrapper=_downloadWrapper;
@property(nonatomic) long long totalFinished; // @synthesize totalFinished=_totalFinished;
@property(retain, nonatomic) NSMutableArray *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(retain, nonatomic) FLHTTPHeadRequest *headRequest; // @synthesize headRequest=_headRequest;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) BOOL flExecuting; // @synthesize flExecuting=_flExecuting;
@property(nonatomic) double elapsedTimeOffset; // @synthesize elapsedTimeOffset=_elapsedTimeOffset;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long totalDownloaded; // @synthesize totalDownloaded=_totalDownloaded;
@property(nonatomic) BOOL didStart; // @synthesize didStart=_didStart;
@property(nonatomic) double totalSpeed; // @synthesize totalSpeed=_totalSpeed;
@property(nonatomic) double avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(nonatomic) BOOL isCompleted; // @synthesize isCompleted=_isCompleted;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
@property(nonatomic) BOOL needsCredentials; // @synthesize needsCredentials=_needsCredentials;
@property(nonatomic) BOOL isResumable; // @synthesize isResumable=_isResumable;
@property(nonatomic) BOOL isStarting; // @synthesize isStarting=_isStarting;
@property(nonatomic) BOOL isFinalizing; // @synthesize isFinalizing=_isFinalizing;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) DMDownloadOperationTask *scheduledDownloadTask; // @synthesize scheduledDownloadTask=_scheduledDownloadTask;
@property(copy, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) unsigned long long numberOfConnections; // @synthesize numberOfConnections=_numberOfConnections;
@property(nonatomic) id <FLDownloadOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateContainerProgress;
- (void)performCalculations;
- (void)setupCalculationTimer;
- (BOOL)createTemporaryFileContainer;
- (void)startSplitConnections;
- (BOOL)setup;
- (void)requestContentLength;
- (void)chunkRequest:(id)arg1 didFinishWithData:(id)arg2;
- (void)chunkRequestNeedsAuthentication:(id)arg1;
- (void)chunkRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)chunkRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)headRequestNeedsAuthentication:(id)arg1;
- (void)headRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)headRequestDidFinish:(id)arg1;
- (void)togglePaused;
- (void)save;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)main;
- (void)start;
@property(readonly, nonatomic) NSArray *chunks;
@property(readonly, copy, nonatomic) NSString *finderPath;
@property(readonly, nonatomic) NSDictionary *jsonRepresentation;
@property(readonly, nonatomic) double elapsedTime;
@property(readonly, nonatomic) double percentDownloaded;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void)restoreFromKeychain;
- (void)setUsername:(id)arg1 password:(id)arg2;
- (void)setIsPaused:(BOOL)arg1 silent:(BOOL)arg2;
- (void)cancelSchedule;
- (void)remove;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

