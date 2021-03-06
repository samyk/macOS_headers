//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, REMObjectID;

@protocol REMXPCSyncInterfacePerformer
- (void)fetchServerRecordFor:(REMObjectID *)arg1 completion:(void (^)(CKRecord *, NSError *))arg2;
- (void)setMigrationStateToDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchUserRecordWithCompletion:(void (^)(CKRecord *, NSError *))arg1;
- (void)debugDownloadMigrationCacheWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)migrateICloudCalDavToCloudKitForAccountID:(REMObjectID *)arg1 disableCache:(BOOL)arg2 completion:(void (^)(REMMigrationResult *, NSError *))arg3;
- (void)deleteApplicationDataFromCloudKitWithCompletion:(void (^)(NSError *))arg1;
- (void)syncDataAccessAccountsWithAccountIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)restartCloudKitSync:(void (^)(NSError *))arg1;
- (void)syncCloudKit:(void (^)(NSError *))arg1;
@end

