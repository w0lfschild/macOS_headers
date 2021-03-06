//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPreferencesModule.h>

#import "IPXiCloudConfigurationDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "PXSettingsKeyObserver-Protocol.h"

@class IPXiCloudConfiguration, NSButton, NSStackView, NSString, NSTextField, NSView, PFStateMachine;

__attribute__((visibility("hidden")))
@interface IPXiCloudPreferences : NSPreferencesModule <NSTokenFieldDelegate, NSWindowDelegate, NSTextViewDelegate, IPXiCloudConfigurationDelegate, PXSettingsKeyObserver>
{
    BOOL _iCloudStatusAvailable;
    BOOL _enablingMyPhotoStream;
    int _systemLibraryChangeToken;
    NSStackView *_stackView;
    NSView *_iCloudStatusView;
    NSTextField *_iCloudStatusTitle;
    NSView *_invalidAccountStatusView;
    NSTextField *_invalidAccountStatusTitle;
    NSTextField *_invalidAccountStatusMessage;
    NSView *_notSystemLibraryView;
    NSTextField *_notSystemLibraryTitle;
    NSView *_cplView;
    NSButton *_cplCheckBox;
    NSTextField *_cplInfo;
    NSButton *_cplDownloadOriginalsButton;
    NSTextField *_cplDownloadOriginalsInfo;
    NSButton *_cplOptimizeStorageButton;
    NSTextField *_cplOptimizeStorageInfo;
    NSView *_mpsView;
    NSButton *_mpsCheckBox;
    NSTextField *_mpsInfo;
    NSView *_cpsView;
    NSButton *_cpsCheckBox;
    NSTextField *_cpsInfo;
    id _upsellController;
    PFStateMachine *_stateMachine;
    NSString *_currentStateMachineState;
    long long _iCloudPhotoLibraryAssetType;
    unsigned long long _cachedLibrarySizeInBytes;
    IPXiCloudConfiguration *_configuration;
}

@property(retain, nonatomic) IPXiCloudConfiguration *configuration; // @synthesize configuration=_configuration;
@property BOOL enablingMyPhotoStream; // @synthesize enablingMyPhotoStream=_enablingMyPhotoStream;
@property BOOL iCloudStatusAvailable; // @synthesize iCloudStatusAvailable=_iCloudStatusAvailable;
@property unsigned long long cachedLibrarySizeInBytes; // @synthesize cachedLibrarySizeInBytes=_cachedLibrarySizeInBytes;
@property long long iCloudPhotoLibraryAssetType; // @synthesize iCloudPhotoLibraryAssetType=_iCloudPhotoLibraryAssetType;
@property(retain) NSString *currentStateMachineState; // @synthesize currentStateMachineState=_currentStateMachineState;
@property(retain) PFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) id upsellController; // @synthesize upsellController=_upsellController;
@property int systemLibraryChangeToken; // @synthesize systemLibraryChangeToken=_systemLibraryChangeToken;
@property(retain) NSTextField *cpsInfo; // @synthesize cpsInfo=_cpsInfo;
@property(retain) NSButton *cpsCheckBox; // @synthesize cpsCheckBox=_cpsCheckBox;
@property(retain) NSView *cpsView; // @synthesize cpsView=_cpsView;
@property(retain) NSTextField *mpsInfo; // @synthesize mpsInfo=_mpsInfo;
@property(retain) NSButton *mpsCheckBox; // @synthesize mpsCheckBox=_mpsCheckBox;
@property(retain) NSView *mpsView; // @synthesize mpsView=_mpsView;
@property(retain) NSTextField *cplOptimizeStorageInfo; // @synthesize cplOptimizeStorageInfo=_cplOptimizeStorageInfo;
@property(retain) NSButton *cplOptimizeStorageButton; // @synthesize cplOptimizeStorageButton=_cplOptimizeStorageButton;
@property(retain) NSTextField *cplDownloadOriginalsInfo; // @synthesize cplDownloadOriginalsInfo=_cplDownloadOriginalsInfo;
@property(retain) NSButton *cplDownloadOriginalsButton; // @synthesize cplDownloadOriginalsButton=_cplDownloadOriginalsButton;
@property(retain) NSTextField *cplInfo; // @synthesize cplInfo=_cplInfo;
@property(retain) NSButton *cplCheckBox; // @synthesize cplCheckBox=_cplCheckBox;
@property(retain) NSView *cplView; // @synthesize cplView=_cplView;
@property(retain) NSTextField *notSystemLibraryTitle; // @synthesize notSystemLibraryTitle=_notSystemLibraryTitle;
@property(retain) NSView *notSystemLibraryView; // @synthesize notSystemLibraryView=_notSystemLibraryView;
@property(retain) NSTextField *invalidAccountStatusMessage; // @synthesize invalidAccountStatusMessage=_invalidAccountStatusMessage;
@property(retain) NSTextField *invalidAccountStatusTitle; // @synthesize invalidAccountStatusTitle=_invalidAccountStatusTitle;
@property(retain) NSView *invalidAccountStatusView; // @synthesize invalidAccountStatusView=_invalidAccountStatusView;
@property(retain) NSTextField *iCloudStatusTitle; // @synthesize iCloudStatusTitle=_iCloudStatusTitle;
@property(retain) NSView *iCloudStatusView; // @synthesize iCloudStatusView=_iCloudStatusView;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)keepOriginalsStateChangeForCloudConfiguration:(id)arg1;
- (void)cloudConfigurationDidChange:(id)arg1;
- (void)a_togglePhotoSharing:(id)arg1;
- (void)a_toggleMyPhotoStream:(id)arg1;
- (void)a_keepThumbnails:(id)arg1;
- (void)a_keepOriginals:(id)arg1;
- (void)a_toggleiCloudPhotoLibrary:(id)arg1;
- (void)a_showSystemPhotoLibraryLearnMoreHelp:(id)arg1;
- (void)a_openSystemiCloudSettings:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)awakeFromNib;
- (void)_stopObservingSystemLibraryChanges;
- (void)_startObservingSystemLibraryChanges;
- (void)_setupStateMachine;
- (id)_stateMachineGraph;
- (void)_showICPSyncingMessage;
- (void)_showDownloadLibraryMessage;
- (void)_showWillRemoveFromMacMessage;
- (void)_showCannotDownloadMessage;
- (unsigned long long)_binaryBytesFromBytes:(unsigned long long)arg1;
- (void)_showLocalDiskSpaceBelowCriticalAmountAlert;
- (void)_showLocalDiskSpaceBelowSafeAmountAlert;
- (void)_showInsufficientiCloudSpaceDialog;
- (void)_showMayRunOutOfiCloudSpaceDialog;
- (void)_showUpgradeiCloudPlan;
- (void)_showReferencedMediaPresentDialog:(unsigned long long)arg1;
- (void)_showCopiedMediaDialog;
- (void)_showInvalidFileSystemDialog:(BOOL)arg1;
- (void)_updateSettingsForState:(id)arg1;
- (void)_updateInfoForState:(id)arg1;
- (void)_updateWindowFrame;
- (void)_updateCPLInfoForState:(id)arg1;
- (void)_updateCPLInfo2:(id)arg1;
- (void)_updateCPLInfo:(id)arg1;
- (void)_enableCPSUI:(BOOL)arg1;
- (void)_enableMPSUI:(BOOL)arg1;
- (void)_enableCPLUI:(BOOL)arg1;
- (void)_updateSettings;
- (void)_updateViewsForState:(id)arg1;
- (id)_viewsForState:(id)arg1;
- (id)_boldDisabledMessageTextAttributes;
- (id)_disabledMessageTextAttributes;
- (id)_splashMessageTextAttributes;
- (id)_splashTitleTextAttributes;
- (BOOL)_cachedIsMyPhotoStreamEnabled;
- (BOOL)_cachedIsiCloudPhotoLibraryEnabled;
- (long long)_iCloudPhotoLibraryFitsInLocalDeviceOnDisable;
- (void)_updateNotSystemLibraryView;
- (void)_updateInvalidAccountView;
- (void)_updateiCloudStatusView;
- (id)_photoLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

