//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface EKStrikethroughLabel : UILabel
{
    BOOL _drawsStrikethrough;
    double _firstLineHeadIndent;
    double _hyphenationFactor;
}

@property(nonatomic) double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
@property(nonatomic) double firstLineHeadIndent; // @synthesize firstLineHeadIndent=_firstLineHeadIndent;
@property(nonatomic) BOOL drawsStrikethrough; // @synthesize drawsStrikethrough=_drawsStrikethrough;
- (void)setText:(id)arg1;

@end

