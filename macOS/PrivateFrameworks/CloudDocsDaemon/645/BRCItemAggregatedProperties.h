//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCItemAggregatedProperties : NSObject
{
    unsigned long long _numberOfDocFaults;
    unsigned long long _needsFaultingCount;
    unsigned long long _numberOfDirFaults;
    unsigned long long _uploadedSize;
    unsigned long long _needsUploadSize;
    unsigned long long _uploadedCount;
    unsigned long long _needsUploadCount;
    unsigned long long _downloadedSize;
    unsigned long long _needsDownloadSize;
    unsigned long long _downloadedCount;
    unsigned long long _needsDownloadCount;
    unsigned long long _unstagedCount;
    unsigned long long _needsUnstageCount;
    unsigned long long _syncedUpCount;
    unsigned long long _needsSyncUpCount;
    unsigned long long _overQuotaCount;
    unsigned long long _sharedItemsCount;
}

+ (id)aggregatedPropertiesForRowID:(long long)arg1 db:(id)arg2;
@property(nonatomic) unsigned long long sharedItemsCount; // @synthesize sharedItemsCount=_sharedItemsCount;
@property(nonatomic) unsigned long long overQuotaCount; // @synthesize overQuotaCount=_overQuotaCount;
@property(nonatomic) unsigned long long needsSyncUpCount; // @synthesize needsSyncUpCount=_needsSyncUpCount;
@property(nonatomic) unsigned long long syncedUpCount; // @synthesize syncedUpCount=_syncedUpCount;
@property(nonatomic) unsigned long long needsUnstageCount; // @synthesize needsUnstageCount=_needsUnstageCount;
@property(nonatomic) unsigned long long unstagedCount; // @synthesize unstagedCount=_unstagedCount;
@property(nonatomic) unsigned long long needsDownloadCount; // @synthesize needsDownloadCount=_needsDownloadCount;
@property(nonatomic) unsigned long long downloadedCount; // @synthesize downloadedCount=_downloadedCount;
@property(nonatomic) unsigned long long needsDownloadSize; // @synthesize needsDownloadSize=_needsDownloadSize;
@property(nonatomic) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(nonatomic) unsigned long long needsUploadCount; // @synthesize needsUploadCount=_needsUploadCount;
@property(nonatomic) unsigned long long uploadedCount; // @synthesize uploadedCount=_uploadedCount;
@property(nonatomic) unsigned long long needsUploadSize; // @synthesize needsUploadSize=_needsUploadSize;
@property(nonatomic) unsigned long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) unsigned long long numberOfDirFaults; // @synthesize numberOfDirFaults=_numberOfDirFaults;
@property(nonatomic) unsigned long long needsFaultingCount; // @synthesize needsFaultingCount=_needsFaultingCount;
@property(nonatomic) unsigned long long numberOfDocFaults; // @synthesize numberOfDocFaults=_numberOfDocFaults;
- (unsigned long long)fileDownloadedCount;
- (unsigned long long)totalFileDownloadingCount;
- (unsigned long long)downloadedByteCompletedCount;
- (unsigned long long)downloadingByteTotalCount;
- (BOOL)isDownloading;
- (unsigned long long)uploadedByteCompletedCount;
- (unsigned long long)uploadingByteTotalCount;
- (unsigned long long)fileUploadedCount;
- (unsigned long long)totalFileUploadingCount;
- (BOOL)isUploading;
- (BOOL)isEmpty;
- (id)description;
- (void)updateWithChildOldProperties:(id)arg1 newProperties:(id)arg2;

@end

