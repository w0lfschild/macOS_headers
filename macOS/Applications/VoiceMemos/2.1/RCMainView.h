//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RCRestylableProtocol-Protocol.h"

@class NSLayoutConstraint;
@protocol RCMainViewDelegate;

@interface RCMainView : UIView <RCRestylableProtocol>
{
    BOOL _tableViewIsEditing;
    BOOL _isTableViewEditMode;
    UIView *_libraryTableView;
    UIView *_recordingView;
    UIView *_footerView;
    id <RCMainViewDelegate> _delegate;
    NSLayoutConstraint *_libraryTableViewBottomContraint;
    NSLayoutConstraint *_recordingViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *recordingViewBottomConstraint; // @synthesize recordingViewBottomConstraint=_recordingViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *libraryTableViewBottomContraint; // @synthesize libraryTableViewBottomContraint=_libraryTableViewBottomContraint;
@property(nonatomic) __weak id <RCMainViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isTableViewEditMode; // @synthesize isTableViewEditMode=_isTableViewEditMode;
@property(nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) UIView *recordingView; // @synthesize recordingView=_recordingView;
@property(nonatomic) UIView *libraryTableView; // @synthesize libraryTableView=_libraryTableView;
- (void).cxx_destruct;
- (void)_styleView;
- (void)restyle;
- (void)_updateLibraryTableViewBottomConstraint;
- (void)layoutSubviews;
- (void)_updateBottomLayoutForTableViewEditMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupDefaultConstraints;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

