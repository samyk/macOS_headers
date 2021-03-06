//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "REMDAChangeTrackableModel.h"
#import "REMExternalSyncMetadataProviding.h"
#import "REMExternalSyncMetadataWritableProviding.h"
#import "REMObjectIDProviding.h"
#import "_REMDAChangeTrackableModel.h"

@class NSString, NSURL, REMObjectID;

@interface REMCalDAVNotification : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daPushKey;
    NSString *daSyncToken;
    NSString *_uuidString;
    NSURL *_hostURL;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_listID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (BOOL)rem_DA_supportsLazyDelete;
+ (BOOL)rem_DA_supportsFetching;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(copy, nonatomic) NSString *daSyncToken; // @synthesize daSyncToken;
@property(copy, nonatomic) NSString *daPushKey; // @synthesize daPushKey;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier;
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

