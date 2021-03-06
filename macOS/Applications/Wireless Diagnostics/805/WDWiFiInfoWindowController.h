//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTableView, SFAuthorization, W5Client;

@interface WDWiFiInfoWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_wifiInfoTable;
    NSMutableArray *_keys;
    NSMutableArray *_values;
    BOOL _isSetup;
    W5Client *_client;
    SFAuthorization *_authorization;
}

@property(retain) SFAuthorization *authorization; // @synthesize authorization=_authorization;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;
- (void)stopPassiveMonitoring;
- (void)startPassiveMonitoring;
- (void)teardownPassiveMonitoring;
- (void)setupPassiveMonitoring;
- (void)addNetworkConfigurationInfo:(id)arg1;
- (void)addBluetoothInfo:(id)arg1;
- (void)addWiFiInterfaceInfo:(id)arg1;
- (void)updateInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

