//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEBackupsSubviewViewController.h"

#import "IEMainVCProtocol-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IEVoicemailCell, NSArray, NSButton, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface BackupTabVoicemailVC : IEBackupsSubviewViewController <NSTableViewDataSource, NSTableViewDelegate, IEMainVCProtocol>
{
    NSArray *voicemails;
    NSTableView *voicemailTable;
    NSButton *exportAllButton;
    NSButton *exportSelectedButton;
    IEVoicemailCell *sharedCell;
}

@property(retain, nonatomic) NSArray *voicemails; // @synthesize voicemails;
- (void).cxx_destruct;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)notifyUserOfSuccesses:(unsigned long long)arg1 failures:(unsigned long long)arg2 total:(unsigned long long)arg3 exportPath:(id)arg4;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)refreshDataForItem:(id)arg1;
- (void)loadDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)awakeFromNib;
- (void)setup;
- (id)initWithParentTab:(id)arg1;
- (void)exportSelectedPressed:(id)arg1;
- (void)exportAllPressed:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)rowDoubleClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

