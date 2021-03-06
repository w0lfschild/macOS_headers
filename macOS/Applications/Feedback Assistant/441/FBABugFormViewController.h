//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBABugFormControlViewDelegate-Protocol.h"
#import "FBADraftPage-Protocol.h"
#import "FBADraftingDelegate-Protocol.h"

@class FBADraftingController, FBAStackView, NSCache, NSScrollView, NSString;

@interface FBABugFormViewController : NSViewController <FBABugFormControlViewDelegate, FBADraftingDelegate, FBADraftPage>
{
    BOOL _shouldDisplayArrows;
    BOOL _hasLoaded;
    FBADraftingController *_draftingController;
    FBAStackView *_stackView;
    NSScrollView *_scrollView;
    NSCache *_viewCache;
}

- (void).cxx_destruct;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain) NSCache *viewCache; // @synthesize viewCache=_viewCache;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak FBAStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) BOOL shouldDisplayArrows; // @synthesize shouldDisplayArrows=_shouldDisplayArrows;
@property(retain, nonatomic) FBADraftingController *draftingController; // @synthesize draftingController=_draftingController;
- (id)pageSubtitleText;
- (id)pageHeaderText;
- (id)firstKeyView;
- (void)_collapseViews:(id)arg1 expandViews:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)draftingController:(id)arg1 madeVisibilityUpdatesWithSnapshotDiff:(id)arg2;
- (void)controlView:(id)arg1 didChangeValue:(id)arg2;
- (void)setQuestionErrorStateIfNeeded:(id)arg1;
- (void)setQuestionErrorStateIfNeeded:(id)arg1 withInvalidQuestions:(id)arg2;
- (void)commitEditing;
- (void)scrollToQuestion:(id)arg1 animated:(BOOL)arg2 focus:(BOOL)arg3;
- (id)createControlViewForQuestion:(id)arg1;
- (id)controlViewForQuestion:(id)arg1;
- (id)rowViewForRow:(id)arg1;
- (id)createQuestionGroupViewForQuestionGroup:(id)arg1;
- (id)createSectionTitleViewForSection:(id)arg1;
- (id)controlViewAtIndexPath:(id)arg1;
- (id)visibleSectionStackViewForSection:(id)arg1;
- (id)visibleRowViewForRow:(id)arg1;
- (void)loadStackView;
- (void)viewDidAppear;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

