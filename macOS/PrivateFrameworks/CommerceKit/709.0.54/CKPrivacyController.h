//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKPrivacyController : NSObject
{
}

+ (BOOL)_shouldDisableGDPR;
+ (BOOL)shouldDisplayPrivacyLinkForIdentifier:(id)arg1 storeClient:(id)arg2;
+ (void)acknowledgePrivacyLinkForIdentifier:(id)arg1 storeClient:(id)arg2;
+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)arg1 account:(id)arg2;
+ (BOOL)_mergeLocalPrivacyConsentWithAccount:(id)arg1;

@end

