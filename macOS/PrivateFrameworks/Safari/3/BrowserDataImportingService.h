//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BrowserDataImportingService.h"

__attribute__((visibility("hidden")))
@interface BrowserDataImportingService : NSObject <BrowserDataImportingService>
{
}

- (void)_replyWithImporterForBrowserWithBundleIdentifier:(id)arg1 bundleIdentifierMappings:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)exit;
- (void)createCredentialImporterForBrowserWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createHistoryImporterForBrowserWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createBookmarkImporterForBrowserWithBundleIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

