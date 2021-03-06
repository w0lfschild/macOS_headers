//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXAssetTransitioning-Protocol.h"
#import "IPXBrowserControllerBarsHelperDataSource-Protocol.h"
#import "IPXGridBasedTestElement-Protocol.h"
#import "IPXScrollableTestElement-Protocol.h"
#import "IPXSelectionContainerProvider-Protocol.h"
#import "IPXShareServicesAnimationSource-Protocol.h"
#import "IPXWorkspaceMenuItemEnableProtocol-Protocol.h"
#import "NSDraggingDestination-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSMenuItemValidation-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "PXChangeObserver-Protocol.h"
#import "PXGAXResponder-Protocol.h"
#import "PXGViewMouseSessionDelegate-Protocol.h"
#import "PXPhotosContentControllerDelegate-Protocol.h"

@class IPXFilePromiseHelper, IPXPhotosBarsController, IPXPhotosGridAssetPickerActionController, IPXPhotosViewSummaryController, IPXSelectionContainer, IPXWorkspaceController, NSArray, NSDictionary, NSScrollView, NSSet, NSString, NSTouchBar, NSTrackingArea, NSView, PHCollection, PXAssetReference, PXGViewMouseSession, PXIndexPathSet, PXPhotosContentController, PXPhotosViewConfiguration, PXPhotosViewModel;
@protocol PXBrowserSelectionSnapshot, PXDisplayCollection, PXGAXResponder, PXPhotosViewEventTracker;

__attribute__((visibility("hidden")))
@interface IPXPhotosViewController : IPXViewController <IPXGridBasedTestElement, PXChangeObserver, PXGViewMouseSessionDelegate, IPXScrollableTestElement, PXPhotosContentControllerDelegate, IPXAssetTransitioning, IPXSelectionContainerProvider, IPXBrowserControllerBarsHelperDataSource, IPXWorkspaceMenuItemEnableProtocol, PXGAXResponder, NSDraggingDestination, NSMenuDelegate, NSMenuItemValidation, NSTouchBarProvider, IPXShareServicesAnimationSource>
{
    NSTrackingArea *_trackingArea;
    NSView *_rolloverDecorationView;
    NSView *_contextualAnchorView;
    BOOL _shouldBeginEditingTitleAfterTransitioningIn;
    PXPhotosContentController *_contentController;
    id <PXGAXResponder> _axNextResponder;
    NSTouchBar *_touchBar;
    IPXFilePromiseHelper *_filePromiseHelper;
    PXPhotosViewConfiguration *_configuration;
    PXGViewMouseSession *_mouseSession;
    IPXPhotosViewSummaryController *_summaryController;
    IPXPhotosBarsController *_barsController;
    IPXPhotosGridAssetPickerActionController *_assetPickerController;
    PXAssetReference *_dropTargetAssetReference;
    NSSet *_draggedAssetReferences;
    PXIndexPathSet *_draggedIndexPathSet;
    NSSet *_controlHitTestResultIdentifiers;
    NSSet *_allHitTestResultIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *allHitTestResultIdentifiers; // @synthesize allHitTestResultIdentifiers=_allHitTestResultIdentifiers;
@property(readonly, nonatomic) NSSet *controlHitTestResultIdentifiers; // @synthesize controlHitTestResultIdentifiers=_controlHitTestResultIdentifiers;
@property(retain, nonatomic) PXIndexPathSet *draggedIndexPathSet; // @synthesize draggedIndexPathSet=_draggedIndexPathSet;
@property(retain, nonatomic) NSSet *draggedAssetReferences; // @synthesize draggedAssetReferences=_draggedAssetReferences;
@property(retain, nonatomic) PXAssetReference *dropTargetAssetReference; // @synthesize dropTargetAssetReference=_dropTargetAssetReference;
@property(nonatomic) BOOL shouldBeginEditingTitleAfterTransitioningIn; // @synthesize shouldBeginEditingTitleAfterTransitioningIn=_shouldBeginEditingTitleAfterTransitioningIn;
@property(readonly, nonatomic) IPXPhotosGridAssetPickerActionController *assetPickerController; // @synthesize assetPickerController=_assetPickerController;
@property(readonly, nonatomic) IPXPhotosBarsController *barsController; // @synthesize barsController=_barsController;
@property(readonly, nonatomic) IPXPhotosViewSummaryController *summaryController; // @synthesize summaryController=_summaryController;
@property(retain, nonatomic) PXGViewMouseSession *mouseSession; // @synthesize mouseSession=_mouseSession;
@property(readonly, copy, nonatomic) PXPhotosViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IPXFilePromiseHelper *filePromiseHelper; // @synthesize filePromiseHelper=_filePromiseHelper;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
- (id)makeTouchBar;
- (struct CGRect)shareServicesScreenBoundsForAsset:(id)arg1 representativeImage:(struct CGImage **)arg2;
- (id)animatedTransitionItemsForProposedItems:(id)arg1 operation:(long long)arg2;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (void)prepareForTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)gridSelectionContext;
@property(readonly, nonatomic) IPXSelectionContainer *selectionContainer;
@property(readonly, nonatomic) NSScrollView *testElement_scrollView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)currentContentFilteringMenuItems;
- (id)presentingViewControllerForContentController:(id)arg1;
- (void)needsUpdateForContentController:(id)arg1;
- (BOOL)photosContentController:(id)arg1 pushViewController:(id)arg2;
- (void)dismissPresentedViewControllerForContentController:(id)arg1;
- (void)photosContentController:(id)arg1 presentViewController:(id)arg2;
- (BOOL)metadataMenuItemsEnabled;
- (void)menuDidClose:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)_supportedDragOperationForDraggingInfo:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (BOOL)_scrollToAXGroup:(id)arg1 userInfo:(id)arg2;
- (BOOL)_scrollToAXInfo:(id)arg1;
- (BOOL)_scrollToAXElement:(id)arg1 userInfo:(id)arg2;
- (struct CGPoint)_locationForAXElement:(id)arg1 inView:(id)arg2;
- (BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (void)_handleLayoutChange:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)axContainingViewForAXGroup:(id)arg1;
- (BOOL)_itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (BOOL)_itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (BOOL)_itemWasRightClickedWithHitTestResult:(id)arg1 event:(id)arg2;
- (BOOL)_itemWasDoubleClickedWithHitTestResult:(id)arg1;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasRightClickedWithEvent:(id)arg3;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (BOOL)_itemWasSingleClickedWithHitTestResult:(id)arg1;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasClickedWithEvent:(id)arg3;
- (id)mouseSession:(id)arg1 draggingItemsForSelectionSnapshot:(id)arg2;
- (void)mouseSession:(id)arg1 createdDraggingSession:(id)arg2 forSelectionSnapshot:(id)arg3;
- (void)mouseSession:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2;
- (BOOL)mouseSession:(id)arg1 itemIsControlForHitTestResult:(id)arg2;
- (id)mouseSession:(id)arg1 indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3 inDataSource:(id)arg4;
- (id)mouseSession:(id)arg1 indexPathsInRect:(struct CGRect)arg2;
- (struct PXSimpleIndexPath)mouseSession:(id)arg1 indexPathAtPoint:(struct CGPoint)arg2;
- (id)mouseSession:(id)arg1 hitTestResultAtPoint:(struct CGPoint)arg2;
- (id)_topHitTestResultFromResults:(id)arg1;
- (struct PXSimpleIndexPath)_selectionIndexPathForHitTestResult:(id)arg1;
- (void)mouseSessionDidFinishInteractiveSelection:(id)arg1;
- (void)mouseSessionWillStartInteractiveSelection:(id)arg1;
- (id)targetForSubtoolbarItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)a_zoomOut:(id)arg1;
- (void)a_zoomIn:(id)arg1;
- (void)a_toggleAspectRatio:(id)arg1;
- (void)a_showLocationInfo:(id)arg1;
- (void)a_showPhotoPicker:(id)arg1;
- (void)a_showFilteringOptions:(id)arg1;
- (void)a_selectItemsInSection:(id)arg1;
- (void)a_openSelectedItems:(id)arg1;
- (void)a_toggleCaptionEdit:(id)arg1;
- (void)a_toggleEdit:(id)arg1;
- (void)a_toggleViewer:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)_moveAndModifySelection:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)_moveInDirection:(unsigned long long)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateRolloverDecorationViewWithEvent:(id)arg1;
- (void)_createMouseSession;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateForEqualNavigationDestination:(id)arg1;
- (void)performActionForSelectingCurrentTabBarItemSegment;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationDestination;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (id)preferredFirstResponder;
- (void)didUpdateLayoutGuides;
- (struct NSEdgeInsets)px_layoutMargins;
- (void)_updateForEmptyStateIfNeeded;
- (void)_popOnDeleteIfNeeded;
- (void)_persistZoomStepIfNeeded;
- (void)_updateDraggedAssetReferences;
- (void)_updateDecorations;
- (void)_updateTitleEditingIfNeeded;
- (void)_scrollToInitialPositionAnimated:(BOOL)arg1;
- (void)_updateInitialViewModelValues;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppearInitially;
- (void)viewDidLoad;
@property(readonly, nonatomic) id <PXPhotosViewEventTracker> eventTracker;
@property(readonly, nonatomic) PHCollection *photosCollection;
@property(readonly, nonatomic) id <PXDisplayCollection> containerCollection;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel;
@property(readonly, nonatomic) PXPhotosContentController *contentControllerIfLoaded;
@property(readonly, nonatomic) PXPhotosContentController *contentController; // @synthesize contentController=_contentController;
- (void)_enterOneUpWithConfiguration:(id)arg1 focusedOnAssetReference:(id)arg2;
- (id)_oneUpViewControllerWithConfiguration:(id)arg1 focusedOnAssetReference:(id)arg2;
- (id)_decorationViewForAssetAtIndexPath:(struct PXSimpleIndexPath)arg1 dataSource:(id)arg2;
- (void)_setSelectedIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_scrollToSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_scrollToItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (unsigned long long)_targetDirectionForMove:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)_testElement_currentTopMostOneUpTestElement;
- (void)testElement_exitOneUp;
- (id)testElement_enterOneUpFromSelectedItem;
- (id)testElement_navigationController;
- (BOOL)testElement_selectNextItem;
- (BOOL)testElement_selectPreviousItem;
- (BOOL)testElement_selectLastItem;
- (BOOL)testElement_selectFirstItem;
- (BOOL)testElement_scrollToItemAtIndexPath:(id)arg1;
- (void)testElement_invalidateSelection;
- (long long)testElement_numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long testElement_numberOfSections;
- (BOOL)testElement_selectItemsAtIndexPaths:(id)arg1;
- (BOOL)testElement_selectItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *testElement_indexPathsForSelectedItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL testElement_isEmpty;
@property(readonly, nonatomic) BOOL testElement_isReady;
@property(readonly, nonatomic) NSDictionary *testElement_scrollingExtraInformation;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;

@end

