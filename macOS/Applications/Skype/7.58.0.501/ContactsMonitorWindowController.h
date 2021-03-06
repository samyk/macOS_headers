//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MonitorWindowController.h"

#import "NSToolbarDelegate-Protocol.h"

@class GroupBar, NSArrayController, NSString, NSToolbar, SkypeMacContactGroupManager;

@interface ContactsMonitorWindowController : MonitorWindowController <NSToolbarDelegate>
{
    NSToolbar *_toolbar;
    NSArrayController *_groupsArrayController;
    GroupBar *_groupBar;
    SkypeMacContactGroupManager *_groupManager;
    BOOL _isObservingGroupArrayController;
}

- (void).cxx_destruct;
- (void)setMonitorContentViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingGroupArrayController;
- (void)_startObservingGroupArrayController;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)_setupGroupBar;
- (void)_setupToolbar;
- (void)_setupGroupsArrayController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

