//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKCancelable.h"

@class NSString, PKPaymentProvisioningController;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable>
{
    PKPaymentProvisioningController *_controller;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (void)cancel;
- (void)dealloc;
- (id)initWithPaymentProvisioningController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

