//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SecCertificate : NSObject
{
    struct __SecCertificate *_certificateRef;
}

@property(readonly, nonatomic) BOOL isAppleRoot;
- (id)data;
@property(readonly, nonatomic) NSString *commonName;
- (void)dealloc;
- (id)initWithCertificateRef:(struct __SecCertificate *)arg1;

@end

