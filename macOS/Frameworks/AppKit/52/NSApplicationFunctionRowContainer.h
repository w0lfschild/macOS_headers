//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarProviderContainer.h"

@class NSString, NSTouchBar;

__attribute__((visibility("hidden")))
@interface NSApplicationFunctionRowContainer : NSObject <NSTouchBarProviderContainer>
{
}

- (id)NS_touchBarProvidersKeyPaths;
- (id)NS_touchBarProviders;
@property(readonly) NSTouchBar *touchBar;
- (BOOL)_lockoutEngaged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

