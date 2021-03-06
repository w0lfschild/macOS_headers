//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCMediaControlInfoDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate>
{
    unsigned int _type;
    struct __CFDictionary *_callbacksDict;
    NSMutableArray *_controlInfoPool;
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;
    unsigned char _version;
    unsigned int _optionBitmap;
}

@property(readonly) unsigned char version; // @synthesize version=_version;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (void)disposeControlInfo:(id)arg1;
- (void *)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (void *)newControlInfo;
- (id)newControlInfoFromPool;
- (unsigned long long)feedbackSize;
- (int)addMediaControlInfoOption:(unsigned int)arg1;
- (void *)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (void *)newMediaControlInfo;
- (int)deregisterCallbacksWithContext:(void *)arg1;
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

