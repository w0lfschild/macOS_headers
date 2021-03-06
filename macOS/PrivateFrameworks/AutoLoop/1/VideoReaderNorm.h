//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AutoLoop/VideoReader.h>

#import <AutoLoop/VRFrameIteration-Protocol.h>

@class VRNFrame;

@interface VideoReaderNorm : VideoReader <VRFrameIteration>
{
    unsigned int _lastRawIndex;
    VRNFrame *_lastFrame;
    VRNFrame *_nextFrame;
    CDStruct_1b6d18a9 normFrameTime;
    CDStruct_1b6d18a9 normTimeOffset;
    CDStruct_1b6d18a9 lastRawFrameTime;
    CDStruct_1b6d18a9 _lastNormTime;
    CDStruct_1b6d18a9 _startRawTime;
}

@property CDStruct_1b6d18a9 startRawTime; // @synthesize startRawTime=_startRawTime;
@property CDStruct_1b6d18a9 lastNormTime; // @synthesize lastNormTime=_lastNormTime;
@property unsigned int lastRawIndex; // @synthesize lastRawIndex=_lastRawIndex;
@property(retain) VRNFrame *nextFrame; // @synthesize nextFrame=_nextFrame;
@property(retain) VRNFrame *lastFrame; // @synthesize lastFrame=_lastFrame;
@property(readonly) CDStruct_1b6d18a9 lastRawFrameTime; // @synthesize lastRawFrameTime;
@property CDStruct_1b6d18a9 normTimeOffset; // @synthesize normTimeOffset;
@property(readonly) CDStruct_1b6d18a9 normFrameTime; // @synthesize normFrameTime;
- (void).cxx_destruct;
- (int)skipFrames:(unsigned int)arg1;
- (int)getNextFrame:(struct opaqueCMSampleBuffer **)arg1 frameTime:(CDStruct_1b6d18a9 *)arg2 rawFrameIndex:(unsigned int *)arg3;
- (id)getFrame:(int *)arg1;
- (int)setReadStartNorm:(unsigned int)arg1;
- (int)reset;
- (void)dealloc;
- (id)initFromFile:(id)arg1 normFrameTime:(CDStruct_1b6d18a9)arg2 useTimeOffset:(BOOL)arg3;

@end

