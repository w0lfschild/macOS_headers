//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "TSAUIState-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, TSKSelectionPathTransformer;
@protocol TNUIStateDelegate;

@interface TNUIState : NSObject <NSCopying, TSAUIState>
{
    BOOL _editingDisabled;
    BOOL _removedAllQuickCalcFunctions;
    BOOL _showsComments;
    BOOL _showsRulers;
    BOOL _showCanvasGuides;
    BOOL _inspectorPaneIsVisible;
    BOOL _inspectorPaneIsAutoHidden;
    int _inspectorPaneViewMode;
    TSKSelectionPath *_selectionPath;
    id <TNUIStateDelegate> _delegate;
    long long _documentMode;
    NSArray *_selectedQuickCalcFunctions;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    TSKSelectionPathTransformer *_selectionPathTransformer;
    NSMutableDictionary *_chartUIState;
    NSMutableDictionary *_sheetUIStates;
    NSMutableDictionary *_editModeSheetUIStates;
    struct CGSize _desktopScreenSize;
    struct CGRect _desktopWindowFrame;
}

+ (double)maximumViewScale;
+ (double)minimumViewScale;
- (void).cxx_destruct;
@property(nonatomic, getter=inspectorPaneIsAutoHidden) BOOL inspectorPaneIsAutoHidden; // @synthesize inspectorPaneIsAutoHidden=_inspectorPaneIsAutoHidden;
@property(nonatomic, getter=inspectorPaneIsVisible) BOOL inspectorPaneIsVisible; // @synthesize inspectorPaneIsVisible=_inspectorPaneIsVisible;
@property(readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates; // @synthesize editModeSheetUIStates=_editModeSheetUIStates;
@property(readonly, nonatomic) NSMutableDictionary *sheetUIStates; // @synthesize sheetUIStates=_sheetUIStates;
@property(readonly, nonatomic) NSMutableDictionary *chartUIState; // @synthesize chartUIState=_chartUIState;
@property(retain, nonatomic) TSKSelectionPathTransformer *selectionPathTransformer; // @synthesize selectionPathTransformer=_selectionPathTransformer;
@property(nonatomic) BOOL showCanvasGuides; // @synthesize showCanvasGuides=_showCanvasGuides;
@property(nonatomic) struct CGSize desktopScreenSize; // @synthesize desktopScreenSize=_desktopScreenSize;
@property(nonatomic) struct CGRect desktopWindowFrame; // @synthesize desktopWindowFrame=_desktopWindowFrame;
@property(retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // @synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState;
@property(nonatomic) BOOL showsRulers; // @synthesize showsRulers=_showsRulers;
@property(nonatomic) BOOL showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) BOOL removedAllQuickCalcFunctions; // @synthesize removedAllQuickCalcFunctions=_removedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions; // @synthesize selectedQuickCalcFunctions=_selectedQuickCalcFunctions;
@property(nonatomic) int inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=_inspectorPaneViewMode;
@property(nonatomic) long long documentMode; // @synthesize documentMode=_documentMode;
@property(nonatomic) __weak id <TNUIStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL editingDisabled; // @synthesize editingDisabled=_editingDisabled;
@property(copy, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
- (void)resetForInitialViewing;
- (id)p_fixedUpSelectionPathForRestoration:(id)arg1 forcingUnpagination:(BOOL)arg2;
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)arg1;
- (void)transformSelectionPathFromDocumentRevision:(id)arg1;
- (void)enumerateSheetUIStatesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: v40@0:8^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::UUIDSheetUIStateDictionaryArchive>=^{Arena}ii^{Rep}}^{SelectionArchive}^{ChartSelectionArchive}^{Reference}^{Point}^{Size}^{Size}^{SelectionPathArchive}^{Reference}^{Reference}IIiiIIiBBBBBBBBB}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: @32@0:8r^{UIStateArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::SheetUIStateDictionaryEntryArchive>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}{RepeatedPtrField<TSCH::ChartUIState>=^{Arena}ii^{Rep}}{RepeatedPtrField<TN::UUIDSheetUIStateDictionaryArchive>=^{Arena}ii^{Rep}}^{SelectionArchive}^{ChartSelectionArchive}^{Reference}^{Point}^{Size}^{Size}^{SelectionPathArchive}^{Reference}^{Reference}IIiiIIiBBBBBBBBB}16@24, name: initWithArchive:unarchiver:
@property(readonly, copy) NSString *description;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) long long inspectorPaneHiddenState;
- (void)p_exitPaginatedMode;
- (void)p_enterPaginatedMode;
@property(readonly, nonatomic) BOOL hasPreviousVisibleRect;
@property(readonly, nonatomic) BOOL hasVisibleRect;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (void)removeAllUIStatesForSheet:(id)arg1;
- (void)removeUIStateForSheet:(id)arg1;
- (id)p_uiStateForActiveSheet;
- (id)uiStateForSheet:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)uiStateForSheet:(id)arg1;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) float previousViewScale;
- (float)viewScaleForSheet:(id)arg1;
@property(readonly, nonatomic) float viewScale;
- (float)p_defaultViewScale;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect)arg1;
- (void)clearPreviousVisibleRect;
@property(nonatomic) struct CGRect previousVisibleRect;
- (void)setPreviousVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint previousScrollPosition;
- (void)clearVisibleRect;
@property(nonatomic) struct CGRect visibleRect;
- (void)setVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint scrollPosition;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

