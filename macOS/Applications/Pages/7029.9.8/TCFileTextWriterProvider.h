//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCXmlTextWriterProvider.h"

@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider
{
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (BOOL)setUp;
- (id)initWithFilePath:(id)arg1;

@end

