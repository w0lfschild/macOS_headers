//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDImportGroupTable;

@interface RDImportGroupModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) BOOL isSynthesized;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) RDImportGroupTable *table;
- (id)importTime;
- (id)importDay;
- (id)importMonth;
- (id)importYear;

@end

