//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PPXPCClientHelper;

@interface PPNamedEntityReadWriteClient : NSObject
{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;
- (BOOL)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (BOOL)cloudSyncWithError:(id *)arg1;
- (BOOL)removeMapItemsBeforeDate:(id)arg1 error:(id *)arg2;
- (BOOL)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (BOOL)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)flushDonationsWithError:(id *)arg1;
- (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (BOOL)_doDeletionSyncCallWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2 syncCall:(CDUnknownBlockType)arg3;
- (BOOL)_doSyncCallWithError:(id *)arg1 syncCall:(CDUnknownBlockType)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

