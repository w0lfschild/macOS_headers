//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSMatrix, NSSlider, NSStepper, NSString, NSTextField;

@interface iTermPasteSpecialViewController : NSViewController
{
    NSTextField *_spacesPerTab;
    NSButton *_escapeShellCharsWithBackslash;
    NSButton *_removeControlCodes;
    NSButton *_bracketedPasteMode;
    NSMatrix *_tabTransform;
    NSButton *_convertNewlines;
    NSButton *_removeNewlines;
    NSButton *_base64Encode;
    NSButton *_useRegexSubstitution;
    NSTextField *_regex;
    NSTextField *_substitution;
    NSButton *_waitForPrompts;
    NSButton *_convertUnicodePunctuation;
    NSSlider *_chunkSizeSlider;
    NSSlider *_delayBetweenChunksSlider;
    NSTextField *_chunkSizeLabel;
    NSTextField *_delayBetweenChunksLabel;
    NSStepper *_stepper;
    NSTextField *_icuRegexHelpLabel;
    int _chunkSize;
    double _delayBetweenChunks;
    id <iTermPasteSpecialViewControllerDelegate> _delegate;
}

+ (id)pasteEventForConfig:(id)arg1 string:(id)arg2;
+ (id)descriptionForCodedSettings:(id)arg1;
@property(nonatomic) id <iTermPasteSpecialViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double delayBetweenChunks; // @synthesize delayBetweenChunks=_delayBetweenChunks;
@property(nonatomic) int chunkSize; // @synthesize chunkSize=_chunkSize;
@property(readonly, nonatomic) unsigned long long flags;
- (void)loadSettingsFromString:(id)arg1;
@property(readonly, nonatomic) NSString *stringEncodedSettings;
@property(retain, nonatomic) NSString *regexString;
@property(retain, nonatomic) NSString *substitutionString;
@property(nonatomic) BOOL shouldWaitForPrompt;
@property(nonatomic, getter=isWaitForPromptEnabled) BOOL enableWaitForPrompt;
@property(nonatomic) BOOL shouldUseRegexSubstitution;
@property(nonatomic, getter=isUseRegexSubstitutionEnabled) BOOL enableUseRegexSubstitution;
@property(nonatomic) BOOL shouldBase64Encode;
@property(nonatomic, getter=isBase64Enabled) BOOL enableBase64;
@property(nonatomic) BOOL shouldUseBracketedPasteMode;
@property(nonatomic, getter=isBracketedPasteEnabled) BOOL enableBracketedPaste;
@property(nonatomic) BOOL shouldRemoveControlCodes;
@property(nonatomic, getter=isRemoveControlCodesEnabled) BOOL enableRemoveControlCodes;
@property(nonatomic) BOOL shouldEscapeShellCharsWithBackslash;
@property(nonatomic, getter=isEscapeShellCharsWithBackslashEnabled) BOOL enableEscapeShellCharsWithBackslash;
@property(nonatomic) BOOL shouldRemoveNewlines;
@property(nonatomic) BOOL shouldConvertNewlines;
@property(nonatomic) BOOL shouldConvertUnicodePunctuation;
@property(nonatomic, getter=isConvertUnicodePunctuationEnabled) BOOL enableConvertUnicodePunctuation;
@property(nonatomic, getter=isRemoveNewlinesEnabled) BOOL enableRemoveNewlines;
@property(nonatomic, getter=isConvertNewlinesEnabled) BOOL enableConvertNewlines;
@property(nonatomic) long long selectedTabTransform;
@property(nonatomic, getter=areTabTransformsEnabled) BOOL enableTabTransforms;
@property(nonatomic) int numberOfSpacesPerTab;
- (void)controlTextDidChange:(id)arg1;
- (void)stepperDidChange:(id)arg1;
- (void)settingChanged:(id)arg1;
- (BOOL)controlIsTransform:(id)arg1;
- (void)delayBetweenChunksDidChange:(id)arg1;
- (void)chunkSizeDidChange:(id)arg1;
- (float)floatValueForDelayBetweenChunks;
- (float)floatValueForChunkSize;
- (id)descriptionForDuration:(double)arg1;
- (id)descriptionForByteSize:(double)arg1;
- (void)awakeFromNib;
- (id)init;

@end

