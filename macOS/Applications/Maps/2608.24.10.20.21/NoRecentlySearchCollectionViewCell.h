//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KeyboardAvoidingView, MapsThemeLabel, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface NoRecentlySearchCollectionViewCell : UICollectionViewCell
{
    KeyboardAvoidingView *_keyboardAvoidingView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_contentLabelTopConstraint;
    MapsThemeLabel *_titleLabel;
    MapsThemeLabel *_contentLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MapsThemeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MapsThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *contentLabelTopConstraint; // @synthesize contentLabelTopConstraint=_contentLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) KeyboardAvoidingView *keyboardAvoidingView; // @synthesize keyboardAvoidingView=_keyboardAvoidingView;
- (void)layoutSubviews;
- (void)setHeightConstraint:(double)arg1 withPriority:(float)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)clearHeightConstraint;
- (id)initWithFrame:(struct CGRect)arg1;

@end

