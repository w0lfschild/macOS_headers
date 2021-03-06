//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextInputClient-Protocol.h>
#import <AppKit/NSTextInputTraits-Protocol.h>

@class NSAttributedString, NSCandidateListTouchBarItem, NSDictionary, NSString, NSView;

@protocol NSTextCheckingClient <NSTextInputClient, NSTextInputTraits>
- (NSCandidateListTouchBarItem *)candidateListTouchBarItem;
- (NSView *)viewForRange:(struct _NSRange)arg1 firstRect:(struct CGRect *)arg2 actualRange:(struct _NSRange *)arg3;
- (void)selectAndShowRange:(struct _NSRange)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAnnotatedString:(NSAttributedString *)arg2;
- (void)removeAnnotation:(NSString *)arg1 range:(struct _NSRange)arg2;
- (void)addAnnotations:(NSDictionary *)arg1 range:(struct _NSRange)arg2;
- (void)setAnnotations:(NSDictionary *)arg1 range:(struct _NSRange)arg2;
- (NSAttributedString *)annotatedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
@end

