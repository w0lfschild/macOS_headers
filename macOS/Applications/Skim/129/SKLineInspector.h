//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKWindowController.h"

@class NSArray, NSSegmentedControl, SKLineWell;

__attribute__((visibility("hidden")))
@interface SKLineInspector : SKWindowController
{
    NSSegmentedControl *styleButton;
    NSSegmentedControl *startLineStyleButton;
    NSSegmentedControl *endLineStyleButton;
    SKLineWell *lineWell;
    double lineWidth;
    long long style;
    NSArray *dashPattern;
    long long startLineStyle;
    long long endLineStyle;
    unsigned long long currentLineChangeAction;
}

+ (BOOL)sharedLineInspectorExists;
+ (id)sharedLineInspector;
@property(readonly, nonatomic) unsigned long long currentLineChangeAction; // @synthesize currentLineChangeAction;
@property(nonatomic) long long endLineStyle; // @synthesize endLineStyle;
@property(nonatomic) long long startLineStyle; // @synthesize startLineStyle;
@property(copy, nonatomic) NSArray *dashPattern; // @synthesize dashPattern;
@property(nonatomic) long long style; // @synthesize style;
@property(nonatomic) double lineWidth; // @synthesize lineWidth;
@property(retain, nonatomic) SKLineWell *lineWell; // @synthesize lineWell;
@property(retain, nonatomic) NSSegmentedControl *endLineStyleButton; // @synthesize endLineStyleButton;
@property(retain, nonatomic) NSSegmentedControl *startLineStyleButton; // @synthesize startLineStyleButton;
@property(retain, nonatomic) NSSegmentedControl *styleButton; // @synthesize styleButton;
- (void)setNilValueForKey:(id)arg1;
- (void)setAnnotationStyle:(id)arg1;
- (void)notifyChangeAction:(unsigned long long)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

@end

