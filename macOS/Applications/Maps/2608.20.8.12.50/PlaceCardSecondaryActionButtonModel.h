//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaceCardActionButtonModel-Protocol.h"

@class GEOQuickLink, NSArray, NSString;
@protocol PlaceCardActionButtonControlling;

__attribute__((visibility("hidden")))
@interface PlaceCardSecondaryActionButtonModel : NSObject <PlaceCardActionButtonModel>
{
    BOOL _canPresentFlow;
    BOOL _supportsAlternateFlow;
    NSString *_title;
    NSString *_subtitle;
    id <PlaceCardActionButtonControlling> _buttonController;
    GEOQuickLink *_quickLink;
    NSArray *_remainingQuickLinks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *remainingQuickLinks; // @synthesize remainingQuickLinks=_remainingQuickLinks;
@property(retain, nonatomic) GEOQuickLink *quickLink; // @synthesize quickLink=_quickLink;
@property(nonatomic) __weak id <PlaceCardActionButtonControlling> buttonController; // @synthesize buttonController=_buttonController;
@property(nonatomic) BOOL supportsAlternateFlow; // @synthesize supportsAlternateFlow=_supportsAlternateFlow;
@property(nonatomic) BOOL canPresentFlow; // @synthesize canPresentFlow=_canPresentFlow;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithActionButtonModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

