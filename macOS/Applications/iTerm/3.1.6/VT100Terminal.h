//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, NSURL, VT100Output, VT100Parser;
@protocol VT100TerminalDelegate;

@interface VT100Terminal : NSObject
{
    BOOL inCommand_;
    id <VT100TerminalDelegate> delegate_;
    BOOL ansiMode_;
    BOOL numLock_;
    CDStruct_c9e88a64 graphicRendition_;
    CDStruct_47bc3a4d mainSavedCursor_;
    CDStruct_47bc3a4d altSavedCursor_;
    int sendModifiers_[5];
    NSMutableArray *_unicodeVersionStack;
    unsigned short _currentURLCode;
    BOOL receivingFile_;
    BOOL _reportFocus;
    BOOL _reverseVideo;
    BOOL _originMode;
    BOOL _moreFix;
    BOOL _wraparoundMode;
    BOOL _reverseWraparoundMode;
    BOOL _isAnsi;
    BOOL _autorepeatMode;
    BOOL _insertMode;
    BOOL _sendReceiveMode;
    BOOL _cursorMode;
    BOOL _keypadMode;
    BOOL _allowKeypadMode;
    BOOL _bracketedPasteMode;
    BOOL _copyingToPasteboard;
    BOOL _allowColumnMode;
    BOOL _columnMode;
    BOOL _disableSmcupRmcup;
    BOOL _strictAnsiMode;
    int _charset;
    VT100Parser *_parser;
    NSString *_termType;
    NSString *_answerBackString;
    unsigned long long _encoding;
    unsigned long long _canonicalEncoding;
    long long _mouseMode;
    long long _mouseFormat;
    VT100Output *_output;
    NSURL *_url;
    NSString *_urlParams;
}

@property(nonatomic) BOOL strictAnsiMode; // @synthesize strictAnsiMode=_strictAnsiMode;
@property(nonatomic) BOOL disableSmcupRmcup; // @synthesize disableSmcupRmcup=_disableSmcupRmcup;
@property(nonatomic) BOOL columnMode; // @synthesize columnMode=_columnMode;
@property(nonatomic) BOOL allowColumnMode; // @synthesize allowColumnMode=_allowColumnMode;
@property(retain, nonatomic) NSString *urlParams; // @synthesize urlParams=_urlParams;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) BOOL copyingToPasteboard; // @synthesize copyingToPasteboard=_copyingToPasteboard;
@property(readonly, nonatomic) VT100Output *output; // @synthesize output=_output;
@property(nonatomic) BOOL bracketedPasteMode; // @synthesize bracketedPasteMode=_bracketedPasteMode;
@property(nonatomic) BOOL allowKeypadMode; // @synthesize allowKeypadMode=_allowKeypadMode;
@property(nonatomic) BOOL keypadMode; // @synthesize keypadMode=_keypadMode;
@property(nonatomic) BOOL cursorMode; // @synthesize cursorMode=_cursorMode;
@property(nonatomic) long long mouseFormat; // @synthesize mouseFormat=_mouseFormat;
@property(nonatomic) long long mouseMode; // @synthesize mouseMode=_mouseMode;
@property(nonatomic) int charset; // @synthesize charset=_charset;
@property(nonatomic) BOOL sendReceiveMode; // @synthesize sendReceiveMode=_sendReceiveMode;
@property(nonatomic) BOOL insertMode; // @synthesize insertMode=_insertMode;
@property(nonatomic) BOOL autorepeatMode; // @synthesize autorepeatMode=_autorepeatMode;
@property(nonatomic) BOOL isAnsi; // @synthesize isAnsi=_isAnsi;
@property(nonatomic) BOOL reverseWraparoundMode; // @synthesize reverseWraparoundMode=_reverseWraparoundMode;
@property(nonatomic) BOOL wraparoundMode; // @synthesize wraparoundMode=_wraparoundMode;
@property(nonatomic) BOOL moreFix; // @synthesize moreFix=_moreFix;
@property(nonatomic) BOOL originMode; // @synthesize originMode=_originMode;
@property(nonatomic) BOOL reverseVideo; // @synthesize reverseVideo=_reverseVideo;
@property(nonatomic) BOOL reportFocus; // @synthesize reportFocus=_reportFocus;
@property(nonatomic) unsigned long long canonicalEncoding; // @synthesize canonicalEncoding=_canonicalEncoding;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(copy, nonatomic) NSString *answerBackString; // @synthesize answerBackString=_answerBackString;
@property(copy, nonatomic) NSString *termType; // @synthesize termType=_termType;
@property(readonly, nonatomic) VT100Parser *parser; // @synthesize parser=_parser;
@property(readonly, nonatomic) BOOL receivingFile; // @synthesize receivingFile=receivingFile_;
@property(nonatomic) id <VT100TerminalDelegate> delegate; // @synthesize delegate=delegate_;
- (id)sanitizedTitle:(id)arg1;
- (void)setStateFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *stateDictionary;
- (CDStruct_47bc3a4d)savedCursorFromDictionary:(id)arg1;
- (id)dictionaryForSavedCursor:(CDStruct_47bc3a4d)arg1;
- (CDStruct_c9e88a64)graphicRenditionFromDictionary:(id)arg1;
- (id)dictionaryForGraphicRendition:(CDStruct_c9e88a64)arg1;
- (void)popUnicodeVersion:(id)arg1;
- (void)pushUnicodeVersion:(id)arg1;
- (id)substringAfterSpaceInString:(id)arg1;
- (void)executeFinalTermToken:(id)arg1;
- (void)executeXtermProprietaryExtermExtension:(id)arg1;
- (void)executeXtermSetPalette:(id)arg1;
- (void)executeXtermSetKvp:(id)arg1;
- (void)executeLink:(id)arg1;
- (void)executeWorkingDirectoryURL:(id)arg1;
- (void)executeXtermTextColorForeground:(BOOL)arg1 arg:(id)arg2;
- (id)keyValuePairInToken:(id)arg1;
- (void)executeFileCommandWithValue:(id)arg1;
- (void)executeXtermSetRgb:(id)arg1;
- (id)xtermParseColorArgument:(id)arg1;
- (void)executeToken:(id)arg1;
- (CDStruct_1ef3fb1f)savedCursorPosition;
- (void)softReset;
- (void)restoreCursor;
- (void)setSavedCursorPosition:(CDStruct_1ef3fb1f)arg1;
- (void)clampSavedCursorToScreenSize:(CDStruct_1ef3fb1f)arg1;
- (void)resetSavedCursorPositions;
- (void)saveCursor;
- (CDStruct_47bc3a4d *)savedCursor;
- (id)decodedBase64PasteCommand:(id)arg1;
- (void)sendChecksumReportWithId:(int)arg1 rectangle:(CDStruct_7a47e81c)arg2;
- (BOOL)rectangleIsValid:(CDStruct_7a47e81c)arg1;
- (CDStruct_7a47e81c)rectangleInToken:(id)arg1 startingAtIndex:(int)arg2 defaultRectangle:(CDStruct_7a47e81c)arg3;
- (void)handleDeviceStatusReportWithToken:(id)arg1 withQuestion:(BOOL)arg2;
- (id)colorForXtermCCSetPaletteString:(id)arg1 colorNumberPtr:(int *)arg2;
- (void)executeSGR:(id)arg1;
- (void)resetGraphicRendition;
- (void)executeDecSetReset:(id)arg1;
@property(readonly, nonatomic) struct screen_char_t backgroundColorCodeReal;
@property(readonly, nonatomic) struct screen_char_t foregroundColorCodeReal;
@property(readonly, nonatomic) struct screen_char_t backgroundColorCode;
@property(readonly, nonatomic) struct screen_char_t foregroundColorCode;
- (void)resetByUserRequest:(BOOL)arg1;
- (void)resetCharset;
- (void)setBackgroundColor:(int)arg1 alternateSemantics:(BOOL)arg2;
- (void)setForegroundColor:(int)arg1 alternateSemantics:(BOOL)arg2;
- (void)setForeground24BitColor:(id)arg1;
- (void)setEncoding:(unsigned long long)arg1 canonical:(BOOL)arg2;
- (void)stopReceivingFile;
- (void)dealloc;
- (id)init;

@end

