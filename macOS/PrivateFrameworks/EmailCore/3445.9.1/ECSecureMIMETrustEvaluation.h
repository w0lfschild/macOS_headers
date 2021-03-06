//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ECSecureMIMETrustEvaluation : NSObject
{
    unsigned int _trustResult;
    struct __SecTrust *_trust;
    NSString *_signerEmailAddress;
    unsigned long long _options;
    NSError *_error;
}

+ (void)setAnchorCertificatesForTesting:(id)arg1;
+ (id)anchorCertificatesForTesting;
+ (id)reevaluateWithNetworkAccessAllowed:(id)arg1;
+ (id)evaluateTrust:(struct __SecTrust *)arg1 withOptions:(unsigned long long)arg2 signerEmailAddress:(id)arg3;
+ (id)log;
@property(readonly, nonatomic) unsigned int trustResult; // @synthesize trustResult=_trustResult;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *signerEmailAddress; // @synthesize signerEmailAddress=_signerEmailAddress;
@property(readonly, nonatomic) struct __SecTrust *trust; // @synthesize trust=_trust;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresReevaluationWithNetworkAccess;
- (void)_evaluate;
- (id)description;
- (void)dealloc;
- (id)_initWithTrust:(struct __SecTrust *)arg1 options:(unsigned long long)arg2 signerEmailAddress:(id)arg3;

@end

