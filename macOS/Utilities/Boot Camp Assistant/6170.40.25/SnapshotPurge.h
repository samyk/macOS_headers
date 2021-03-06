//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMAsyncDelegate-Protocol.h"

@class NSMutableArray;
@protocol SnapshotPurgeDelegate;

@interface SnapshotPurge : NSObject <DMAsyncDelegate>
{
    id <SnapshotPurgeDelegate> purgeDelegate;
    NSMutableArray *listOfSnapshotUUIDsToDelete;
    NSMutableArray *uuids;
}

- (void)dmAsyncStartedForDisk:(struct __DADisk *)arg1;
- (void)dmAsyncProgressForDisk:(struct __DADisk *)arg1 barberPole:(BOOL)arg2 percent:(float)arg3;
- (void)dmAsyncMessageForDisk:(struct __DADisk *)arg1 string:(id)arg2 dictionary:(id)arg3;
- (void)dmAsyncFinishedForDisk:(struct __DADisk *)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4;
- (BOOL)purgeSnapshotsOnDisk:(struct __DADisk *)arg1;
- (id)generateListOfSnapshotUUIDsToPurge:(id)arg1 volumes:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

