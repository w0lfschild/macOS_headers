//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKAuthorizationSubPaneAdding.h"

@class NSView, NSViewController;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding>
{
    NSViewController *_viewController;
    NSView *_internalView;
    double _internalCustomSpacingAfter;
}

- (void).cxx_destruct;
@property double internalCustomSpacingAfter; // @synthesize internalCustomSpacingAfter=_internalCustomSpacingAfter;
@property(readonly) NSView *internalView; // @synthesize internalView=_internalView;
@property(readonly) NSViewController *viewController; // @synthesize viewController=_viewController;
@property double customSpacingAfter;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
@property(readonly) NSView *view;
- (id)initWithView:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

