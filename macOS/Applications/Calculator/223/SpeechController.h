//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SpeechProtocol-Protocol.h"

@class NSDictionary, NSMenu, NSMenuItem, NSSpeechSynthesizer;

@interface SpeechController : NSObject <SpeechProtocol>
{
    NSMenu *mSpeechMenu;
    NSMenuItem *mSpeakButtons;
    NSMenuItem *mSpeakTotal;
    BOOL mEnabled;
    NSSpeechSynthesizer *mSpeechSynthesisChannel;
    NSDictionary *mSpeakableItemsDict;
}

- (void).cxx_destruct;
@property BOOL enabled; // @synthesize enabled=mEnabled;
- (void)speakTotal:(id)arg1;
- (void)speakButton:(id)arg1;
- (void)speechMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_loadSpeakableItems;
- (void)awakeFromNib;
- (void)_speakString:(id)arg1;
- (BOOL)_languageIsEnglish;

@end

