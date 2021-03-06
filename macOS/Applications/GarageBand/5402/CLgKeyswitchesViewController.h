//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CLgKeyswitchesKeyViewDelegate-Protocol.h"

@class CLgKeyswitchesKeyView, MAVeNSButtonView, MAVeNSLabelView, MAVeNSPopupButtonView, MAVeNSSegmentedControlView, NSArray, NSString;

@interface CLgKeyswitchesViewController : NSViewController <CLgKeyswitchesKeyViewDelegate>
{
    MAVeNSButtonView *onButton;
    MAVeNSLabelView *octaveOffsetTextField;
    MAVeNSPopupButtonView *octaveOffsetPopupButton;
    MAVeNSSegmentedControlView *octaveSwitch;
    CLgKeyswitchesKeyView *key0;
    CLgKeyswitchesKeyView *key1;
    CLgKeyswitchesKeyView *key2;
    CLgKeyswitchesKeyView *key3;
    CLgKeyswitchesKeyView *key4;
    CLgKeyswitchesKeyView *key5;
    CLgKeyswitchesKeyView *key6;
    CLgKeyswitchesKeyView *key7;
    CLgKeyswitchesKeyView *key8;
    CLgKeyswitchesKeyView *key9;
    CLgKeyswitchesKeyView *key10;
    CLgKeyswitchesKeyView *key11;
    NSArray *keyViews;
    struct CDocumentLogic *document;
}

@property struct CDocumentLogic *document; // @synthesize document;
- (void)octaveSwitchAction:(id)arg1;
- (void)octaveOffsetPopupButtonAction:(id)arg1;
- (void)onButtonAction:(id)arg1;
- (void)updateControls;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)keyswitchesKeyMouseDown:(id)arg1;
- (long long)mb1OffsetForZone:(long long)arg1 articulationHandler:(struct CArticulationHandler *)arg2;
- (void)dealloc;
- (id)initWithDocument:(struct CDocumentLogic *)arg1;
- (id)localizedNoteLabelForNoteNumber:(long long)arg1 octaveOffset:(long long)arg2;
- (BOOL)outOfRangeNoteNumber:(long long)arg1 octaveOffset:(long long)arg2;
- (id)octavePopupButtonTitleForOctaveOffset:(BOOL)arg1;
- (int)middleCOffsetPreference;
- (void)handleUM_RECTRACK_id:(id)arg1;
- (void)handleUM_GEDIT_id:(id)arg1;
- (void)handleUM_CHARTICULATION_id:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (struct CArticulationHandler *)articulationHandler;
- (struct CInst *)instrument;
- (struct CTrack *)recordingTrack;
-     // Error parsing type: ^{CSong={FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}{FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}[120c]cCcc[170c][16C]cccc{CTFlagSet<_SONG::TSelBasedFlags, unsigned char>=C}c{CTFlagSet<_SONG::TFreeRecordingFlags, unsigned char>=C}ccccCcc[95s]{CTFlagSet<_SONG::TGeneralFlags, unsigned short>=S}SSSS[108i][16i]iiiiiiiii{CTronFlags={CTFlagSet<TTronFlags, int>=i}}i{CTFlagSet<_SONG::TVariousEditorFlags, int>=i}iiiiiiiiiiiIif^{CSongObjects}^{tMapGenData}^{GenDataPointerGroup}^{vector<MAMem2, std::__1::allocator<MAMem2> >}^{CAdjustBeats}^{CTrackConductor}^{CTransientContainer}^{CMovieThumbnailUtility}^{CMovieData}^{CChordTypes}^{CAssessmentController}i{TTrackNr=qi}ii{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{TAbsPureClock=q}S[16c]i{CTFlagSet<_SONG::TSongRuntimeFlags, int>=i}^{CEvs}c{CNoteRepeatPars=cccccccccccccccccccccccc[8c]}QiiC^{CUndoManager}BB{atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}B{unique_ptr<CSongCategories, std::__1::default_delete<CSongCategories> >={__compressed_pair<CSongCategories *, std::__1::default_delete<CSongCategories> >=^{CSongCategories}}}}16@0:8, name: song

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

