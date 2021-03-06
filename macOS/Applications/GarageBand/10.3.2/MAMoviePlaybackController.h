//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAMoviePlayer;

@interface MAMoviePlaybackController : NSObject
{
    BOOL _debugSync;
    int _cachedAudioBusDelaySMPTE;
    MAMoviePlayer *_moviePlayer;
    struct CDocumentLogic *_doc;
    double _syncSuspendedUntilTime;
    double _lastScrubChangeTime;
    CDStruct_1b6d18a9 _lastSyncTargetTime;
}

@property BOOL debugSync; // @synthesize debugSync=_debugSync;
@property(readonly) int cachedAudioBusDelaySMPTE; // @synthesize cachedAudioBusDelaySMPTE=_cachedAudioBusDelaySMPTE;
@property double lastScrubChangeTime; // @synthesize lastScrubChangeTime=_lastScrubChangeTime;
@property CDStruct_1b6d18a9 lastSyncTargetTime; // @synthesize lastSyncTargetTime=_lastSyncTargetTime;
@property double syncSuspendedUntilTime; // @synthesize syncSuspendedUntilTime=_syncSuspendedUntilTime;
@property(readonly) struct CDocumentLogic *doc; // @synthesize doc=_doc;
@property(readonly) MAMoviePlayer *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void)handleDroppedFrames;
- (void)updatePlaybackEndTime;
- (void)routePlayerOutputToMovieView:(id)arg1;
- (void)updateAudioDeviceOnMoviePlayer;
- (int)movieSMPTEOffsetCorrectedForSong:(struct CSong *)arg1;
- (void)updateCachedAudioBusDelaySMPTEForSong:(struct CSong *)arg1;
- (BOOL)isSyncSuspended;
- (void)suspendSyncForSeconds:(double)arg1;
@property(nonatomic) BOOL forceSynchronousSeek;
@property(nonatomic) BOOL seekWithZeroTolerance;
- (BOOL)adjustSeekAccuracyForTargetTime:(CDStruct_1b6d18a9)arg1;
- (void)handlePlayheadIsInMovieRegionForSong:(struct CSong *)arg1 target:(CDStruct_1b6d18a9)arg2 isPlaying:(BOOL)arg3;
- (void)handlePlayheadIsAfterMovie;
- (void)handlePlayheadIsBeforeMovie;
- (void)syncMovieWithOption:(int)arg1 isPlaying:(BOOL)arg2;
- (void)startOrStopMovieIfNecessaryWithCurrentPlayingStatus:(BOOL)arg1;
- (void)startMovieForClock:(struct TAbsPureClock)arg1;
- (void)primeMovieForClock:(struct TAbsPureClock)arg1 isPlaying:(BOOL)arg2;
- (int)checkMovieTargetPosition:(CDStruct_1b6d18a9)arg1;
- (void)handleMoviePlayerNotification:(id)arg1;
@property(readonly) BOOL isReady;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDocument:(struct CDocumentLogic *)arg1;

@end

