//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionPreviewActivity-Protocol.h>

@class NSString, NSURL;
@protocol SXURLPreviewing;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity>
{
    id <SXURLPreviewing> _URLPreviewing;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) id <SXURLPreviewing> URLPreviewing; // @synthesize URLPreviewing=_URLPreviewing;
- (void).cxx_destruct;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)previewViewControllerForAction:(id)arg1;
- (id)initWithURLPreviewing:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

