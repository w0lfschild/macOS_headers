//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OCExporter.h"

#import "TSKEncryptedDocumentExporter.h"

@class NSString, TSUProgress;

@interface PETExporter : OCExporter <TSKEncryptedDocumentExporter>
{
}

+ (void)initialize;
@property(readonly, nonatomic) long long exportAnalyticsFormatID;
- (id)exportURLForOutputURL:(id)arg1;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
- (BOOL)shouldUseBackwardsCompatibleType;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)writePresentation:(id)arg1 toUrl:(id)arg2;
@property(readonly, nonatomic) BOOL needsSupplementalFiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isCancelled;
@property(readonly, nonatomic) BOOL isExportSupported;
@property(readonly, nonatomic) TSUProgress *progress;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *typeUTI;

@end

