//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSViewController, SVSPagerViewController;

@protocol SVSPagerViewControllerDelegate <NSObject>
- (void)pagerViewControllerDidChangeTransitionState:(SVSPagerViewController *)arg1;
- (void)pagerViewController:(SVSPagerViewController *)arg1 didActivatePageViewController:(NSViewController *)arg2 oldActivePageViewController:(NSViewController *)arg3;
@end

