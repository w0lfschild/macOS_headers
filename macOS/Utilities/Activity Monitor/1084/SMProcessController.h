//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetCacheServicesManagerEventsProtocol-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "SMAuthProgressProtocol-Protocol.h"

@class AssetCacheServicesManager, BatteryGraphManager, NSArray, NSButton, NSDictionary, NSFont, NSImage, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSOutlineView, NSPanel, NSPopUpButton, NSPopoverTouchBarItem, NSProgressIndicator, NSScrollView, NSSegmentedControl, NSString, NSTabView, NSTableColumn, NSTextField, NSTimer, NSTouchBar, NSView, NSWindow, NetStatManager, SMCPUInfo, SMCPUMonitor, SMCacheController, SMDiskInfo, SMGPUController, SMGPUHistoryController, SMGPUMonitor, SMNetworkInfo, SMViewController, TotalPowerGraphManager;
@protocol NSObject, OS_dispatch_queue, OS_sysmon_request, OS_sysmon_row;

@interface SMProcessController : NSObject <SMAuthProgressProtocol, NSToolbarDelegate, NSTableViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, NSTouchBarProvider, NSTouchBarDelegate, AssetCacheServicesManagerEventsProtocol>
{
    NSWindow *_window;
    NSMenuItem *_columnMenu;
    NSMenu *_viewMenu;
    NSButton *_toolbarGetInfo;
    NSButton *_toolbarForceQuit;
    NSPopUpButton *_toolbarSysDiagnose;
    NSSegmentedControl *_toolbarTabs;
    NSTabView *_tabView;
    NSTextField *_graphicsCardLabel;
    NSTextField *_graphicsCardValue;
    NSMenuItem *_frequencySubmenu;
    NSMenu *_columnsMenu;
    NSMenuItem *_showCPUMonitorsOnTop;
    NSPanel *_signalSheet;
    NSTextField *_signalText;
    NSPopUpButton *_signalPopup;
    NSWindow *_sysdiagnoseCancelingSheet;
    NSProgressIndicator *_sysdiagnoseCancelingSpinner;
    NSDictionary *_columnToMenuTagDict;
    NSMutableDictionary *_sortedAndFilteredProcesses;
    long long _showCategory;
    long long _previousShowCategory;
    long long _prevShowCategory;
    NSMutableArray *_previousSelectedItems;
    NSArray *_watchedProcesses;
    SMCPUInfo *_cpuInfo;
    SMNetworkInfo *_networkInfo;
    SMDiskInfo *_diskInfo;
    SMCPUMonitor *_monitor;
    SMGPUHistoryController *_gpuHistoryManager;
    BatteryGraphManager *_batteryGraphManager;
    TotalPowerGraphManager *_totalPowerGraphManager;
    NSWindow *_toolbarViewsHolder;
    NSMenu *_mainMenu;
    NSMutableDictionary *_inspectorDict;
    NSTimer *_controlTimer;
    BOOL _displayHierarchy;
    NSNumberFormatter *_sizeFormatter;
    NSNumberFormatter *_threadFormatter;
    NSNumberFormatter *_powerScoreFormatter;
    long long _updateIntervalTag;
    void *_lsNotificationID;
    BOOL _alreadyAwake;
    BOOL _cancelingSysdiagnose;
    double _whenLastReceivedSysmonData;
    NSTouchBar *_mainTouchBar;
    NSSegmentedControl *_mtbTabControl;
    NSButton *_mtbStopButton;
    NSButton *_mtbInfoButton;
    NSButton *_mtbGearButton;
    NSPopoverTouchBarItem *_mtbGearPopover;
    NSTouchBar *_gearTouchBar;
    NSMutableArray *_gearMenuButtons;
    BOOL _shouldShowGPUTab;
    NSFont *_font;
    NSFont *_boldFont;
    NSFont *_monospaceNumbersFont;
    BOOL _sortDirection;
    BOOL _windowOcclusionState;
    BOOL _discreteGPUEnabled;
    BOOL _isContentCacheEnabled;
    BOOL _isGPUTabEnabled;
    unsigned int _my_uid;
    NSString *_filter;
    long long _selectedTab;
    SMViewController *_viewController;
    NSView *_containerView;
    NSScrollView *_processListView;
    NSOutlineView *_processOutlineView;
    NSTableColumn *_processNameColumn;
    NSTableColumn *_recentPowerColumn;
    NSTableColumn *_graphicsCardColumn;
    NSDictionary *_processes;
    NSArray *_allProcesses;
    NSArray *_placeHolderProcesses;
    NSString *_sortProperty;
    NSImage *_ascendingSortingImage;
    NSImage *_descendingSortingImage;
    unsigned long long _jobTicket;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    NSObject<OS_sysmon_request> *_sysmonRequest;
    NSObject<OS_sysmon_request> *_sysmonSysRequest;
    NSObject<OS_sysmon_row> *_lastSysSysmonRow;
    long long _sysSysmonRowTimeStamp;
    NetStatManager *_netStatManager;
    NSTimer *_updateHistoryTableTimer;
    long long _lastFreeNegativePID;
    NSString *_bundleIDToSelect;
    NSString *_processNameToSelect;
    SMCacheController *_cacheController;
    AssetCacheServicesManager *_cacheServicesManager;
    SMGPUController *_gpuController;
    SMGPUMonitor *_gpuMonitor;
    id <NSObject> _gpuMonitorGPUsDidChangeObserver;
    NSArray *_GPUs;
    NSTimer *_updateGPUTableTimer;
    NSDictionary *_gpuidToGpusAsProcesses;
    NSWindow *_sysdaignoseWaitWindow;
    NSTextField *_sysdaignoseWaitWindowTitle;
    NSProgressIndicator *_sysdiagnoseProgressIndicator;
}

+ (void)initialize;
+ (id)processController;
- (void).cxx_destruct;
@property __weak NSProgressIndicator *sysdiagnoseProgressIndicator; // @synthesize sysdiagnoseProgressIndicator=_sysdiagnoseProgressIndicator;
@property __weak NSTextField *sysdaignoseWaitWindowTitle; // @synthesize sysdaignoseWaitWindowTitle=_sysdaignoseWaitWindowTitle;
@property __weak NSWindow *sysdaignoseWaitWindow; // @synthesize sysdaignoseWaitWindow=_sysdaignoseWaitWindow;
@property unsigned int my_uid; // @synthesize my_uid=_my_uid;
@property(retain) NSDictionary *gpuidToGpusAsProcesses; // @synthesize gpuidToGpusAsProcesses=_gpuidToGpusAsProcesses;
@property(retain) NSTimer *updateGPUTableTimer; // @synthesize updateGPUTableTimer=_updateGPUTableTimer;
@property(retain) NSArray *GPUs; // @synthesize GPUs=_GPUs;
@property(retain) id <NSObject> gpuMonitorGPUsDidChangeObserver; // @synthesize gpuMonitorGPUsDidChangeObserver=_gpuMonitorGPUsDidChangeObserver;
@property(retain) SMGPUMonitor *gpuMonitor; // @synthesize gpuMonitor=_gpuMonitor;
@property BOOL isGPUTabEnabled; // @synthesize isGPUTabEnabled=_isGPUTabEnabled;
@property __weak SMGPUController *gpuController; // @synthesize gpuController=_gpuController;
@property BOOL isContentCacheEnabled; // @synthesize isContentCacheEnabled=_isContentCacheEnabled;
@property(retain) AssetCacheServicesManager *cacheServicesManager; // @synthesize cacheServicesManager=_cacheServicesManager;
@property __weak SMCacheController *cacheController; // @synthesize cacheController=_cacheController;
@property BOOL discreteGPUEnabled; // @synthesize discreteGPUEnabled=_discreteGPUEnabled;
@property BOOL windowOcclusionState; // @synthesize windowOcclusionState=_windowOcclusionState;
@property(retain) NSString *processNameToSelect; // @synthesize processNameToSelect=_processNameToSelect;
@property(retain) NSString *bundleIDToSelect; // @synthesize bundleIDToSelect=_bundleIDToSelect;
@property long long lastFreeNegativePID; // @synthesize lastFreeNegativePID=_lastFreeNegativePID;
@property(retain) NSTimer *updateHistoryTableTimer; // @synthesize updateHistoryTableTimer=_updateHistoryTableTimer;
@property(retain) NetStatManager *netStatManager; // @synthesize netStatManager=_netStatManager;
@property long long sysSysmonRowTimeStamp; // @synthesize sysSysmonRowTimeStamp=_sysSysmonRowTimeStamp;
@property(retain) NSObject<OS_sysmon_row> *lastSysSysmonRow; // @synthesize lastSysSysmonRow=_lastSysSysmonRow;
@property(retain) NSObject<OS_sysmon_request> *sysmonSysRequest; // @synthesize sysmonSysRequest=_sysmonSysRequest;
@property(retain) NSObject<OS_sysmon_request> *sysmonRequest; // @synthesize sysmonRequest=_sysmonRequest;
@property(retain) NSObject<OS_dispatch_queue> *sampleQueue; // @synthesize sampleQueue=_sampleQueue;
@property unsigned long long jobTicket; // @synthesize jobTicket=_jobTicket;
@property(retain) NSImage *descendingSortingImage; // @synthesize descendingSortingImage=_descendingSortingImage;
@property(retain) NSImage *ascendingSortingImage; // @synthesize ascendingSortingImage=_ascendingSortingImage;
@property BOOL sortDirection; // @synthesize sortDirection=_sortDirection;
@property(retain) NSString *sortProperty; // @synthesize sortProperty=_sortProperty;
@property(retain) NSArray *placeHolderProcesses; // @synthesize placeHolderProcesses=_placeHolderProcesses;
@property(retain) NSArray *allProcesses; // @synthesize allProcesses=_allProcesses;
@property(retain) NSDictionary *processes; // @synthesize processes=_processes;
@property __weak NSTableColumn *graphicsCardColumn; // @synthesize graphicsCardColumn=_graphicsCardColumn;
@property __weak NSTableColumn *recentPowerColumn; // @synthesize recentPowerColumn=_recentPowerColumn;
@property __weak NSTableColumn *processNameColumn; // @synthesize processNameColumn=_processNameColumn;
@property(retain) NSOutlineView *processOutlineView; // @synthesize processOutlineView=_processOutlineView;
@property __weak NSScrollView *processListView; // @synthesize processListView=_processListView;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
@property __weak SMViewController *viewController; // @synthesize viewController=_viewController;
@property long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain) NSString *filter; // @synthesize filter=_filter;
- (void)tbarTabPressed:(id)arg1;
- (void)actionItemPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)gearTouchBar;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (id)_deltaDescriptionForLongLong:(id)arg1;
- (id)_deltaSizeStringForValue:(id)arg1 deltaSize:(id)arg2 marked:(BOOL)arg3;
- (id)_deltaDescriptionForDouble:(double)arg1;
- (void)outlineViewColumnDidResize:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (void)outlineView:(id)arg1 didDragTableColumn:(id)arg2;
- (id)processOutlinViewObjectValueForTableColumn:(id)arg1 byItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)_updateSortColumn;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)processAtIndexPath:(id)arg1;
- (id)_childrenOfPID:(id)arg1;
- (id)_childrenOfProcess:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)selectProcessByBundleID:(id)arg1 orName:(id)arg2;
- (void)selectToolbarTab:(long long)arg1;
- (BOOL)isValidTab:(long long)arg1;
- (void)updateAllInspectors;
- (void)removeInspector:(id)arg1;
- (id)inspectorForProcess:(id)arg1;
- (id)processForPID:(id)arg1;
- (id)inspectorForPID:(id)arg1;
- (BOOL)pidIsDead:(id)arg1;
- (BOOL)_shouldShowProcess:(id)arg1;
- (BOOL)_processHierarchicallyMatchesFilter:(id)arg1;
- (BOOL)_processMatchesFilter:(id)arg1;
- (void)inspect:(id)arg1;
- (void)quitProcessWithProcesses:(id)arg1 window:(id)arg2;
- (void)cancelSignalSheet:(id)arg1;
- (void)sendSignalFromSheet:(id)arg1;
- (void)sendSignalWithProcesses:(id)arg1 window:(id)arg2;
- (void)markProcess:(id)arg1;
- (void)sendSignal:(id)arg1;
- (void)quitProcess:(id)arg1;
- (void)forceQuitPID:(int)arg1;
- (void)quitPID:(int)arg1;
- (void)printDocument:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)changeColumns:(id)arg1;
- (void)selectFilter:(id)arg1;
- (void)clearFilter:(id)arg1;
- (void)filterProcess;
- (BOOL)validateMenuItem:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)cancelDiagnose:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)sysdiagnose:(id)arg1;
- (BOOL)isSafariSelected;
- (BOOL)isMailSelected;
- (BOOL)selectionIncludesProcessWithBundleID:(id)arg1;
- (void)mddiagnose:(id)arg1;
- (void)spindump:(id)arg1;
- (void)sample:(id)arg1;
- (id)stringForDraggedItems:(id)arg1;
- (id)stringForSelectedRowsInTableView:(id)arg1;
- (void)copy:(id)arg1;
- (id)_nameOfTab:(long long)arg1;
- (void)_restoreColumnWidthForTab:(long long)arg1;
- (void)_saveColumnWidthForTab:(long long)arg1;
- (void)toolbarTabDidChange:(id)arg1;
- (void)showSysDiagnoseMenu:(id)arg1;
- (void)changeExportFormat:(id)arg1;
- (void)toggleCPUWindowsOnTop:(id)arg1;
- (void)updateSysSysmonRequest;
- (void)_updateSysmonRequest;
- (id)_pidsForcingDiscreteGPU;
- (void)changeUpdateFrequency:(id)arg1;
- (void)_sortProcessArray:(id)arg1 withPPID:(id)arg2;
- (void)showWindow:(id)arg1;
- (void)_updateToolbarTabs;
- (void)awakeFromNib;
- (BOOL)shouldShowCacheTab;
- (BOOL)shouldShowGPUTab;
- (void)showGPUHistoryWindow;
- (void)manager:(id)arg1 isActivated:(BOOL)arg2 withError:(id)arg3;
- (void)_occlusionStateDidChangeNotification:(id)arg1;
- (id)_pluginImage;
- (void)_validateToolbarButtons;
- (void)_saveUserColumns;
- (void)_processHistory:(id)arg1 sinceSecondsAgo:(unsigned long long)arg2;
- (void)_updateHistoryTable:(id)arg1;
- (void)_updateGPUTable:(id)arg1;
- (id)_processSysmonTable:(id)arg1 updateTable:(BOOL)arg2;
- (void)_processSysSysmonTable:(id)arg1;
- (void)_updateTabsWithSysmonRow:(id)arg1;
- (void)_updateTable;
- (void)windowWillClose:(id)arg1;
- (id)init;
- (void)_syncColumnsWithTab;
- (id)locString:(id)arg1;
- (unsigned long long)_updateInterval;
- (id)_stringOfActiveURLsForProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

