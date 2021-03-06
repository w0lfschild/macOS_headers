//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSButton, NSString;
@protocol SPResultViewControllerDelegate><SPPreviewControllerDelegate><NSObject;

@interface SPResultViewController : NSViewController
{
    BOOL _awoke;
    id <SPResultViewControllerDelegate><SPPreviewControllerDelegate><NSObject> _delegate;
    NSArray *_results;
    NSArray *_suggestions;
    NSString *_name;
    NSButton *_theButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *theButton; // @synthesize theButton=_theButton;
@property BOOL awoke; // @synthesize awoke=_awoke;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain) NSArray *results; // @synthesize results=_results;
@property __weak id <SPResultViewControllerDelegate><SPPreviewControllerDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (BOOL)doCommand:(unsigned long long)arg1;
- (void)removePreview;
- (void)hideNoResults;
- (void)showNoResults;
- (void)reloadResultsSelectingTopResult:(BOOL)arg1 animate:(BOOL)arg2;
- (void)selectTopResultIfNotSelected;
- (void)doubleClick:(id)arg1;
- (BOOL)updateViewForSelectedResult:(id)arg1;
- (BOOL)reloadPreviewForCurrentSelection;
- (void)clearPreview;
- (id)selectedResult;
- (long long)numberOfItems;
- (BOOL)currentSelectionIsFirstResult;
- (long long)currentSelection;
- (id)resultsTableView;
- (void)adjustSubviews;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 name:(id)arg3;

@end

