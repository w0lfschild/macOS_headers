//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailFoundation/EFSQLBinding.h>

@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding
{
    NSData *_dataValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;
- (id)initWithData:(id)arg1;

@end

