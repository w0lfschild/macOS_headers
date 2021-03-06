//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;
@protocol TraceEventTableViewContollerDelegate;

__attribute__((visibility("hidden")))
@interface TraceEventTableViewController : UITableViewController
{
    NSArray *_events;
    id <TraceEventTableViewContollerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TraceEventTableViewContollerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSArray *annotationsForEvents;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

