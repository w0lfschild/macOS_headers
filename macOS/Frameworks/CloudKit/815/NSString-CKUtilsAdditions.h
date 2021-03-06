//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/CKShortDescription-Protocol.h>

@interface NSString (CKUtilsAdditions) <CKRecordValue, CKShortDescription>
- (id)CKBase64DecodedString;
- (id)CKBase64EncodedURLSafeString;
- (id)CKNilIfLengthZero;
- (id)CKSanitizedPath;
- (id)CKSHA256;
- (id)CKUnmangledDocumentNameFromURLFragment;
- (id)CKMangledDocumentNameForURLFragment;
- (id)CKSafeStringForURLWithCharsToBeEscaped:(id)arg1;
- (id)CKSafeStringForURLPathComponent;
- (id)CKSafeHashStringForPathComponent;
- (id)CKSafeStringForPathComponent;
- (id)CKDPIdentifier_Zone;
- (id)CKDPIdentifier_ShareId;
- (id)CKDPIdentifier_Subscription;
- (id)CKDPIdentifier_Device;
- (id)CKDPIdentifier_User;
- (id)CKDPIdentifier_Record;
- (id)CKDPIdentifier_Raw;
- (id)_CKDPIdentifierWithType:(int)arg1;
- (id)ckShortDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

