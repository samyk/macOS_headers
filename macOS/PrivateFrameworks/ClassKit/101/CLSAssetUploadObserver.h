//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSAsset, NSError, NSMetadataQuery, NSOperationQueue;

@interface CLSAssetUploadObserver : NSObject
{
    CLSAsset *_asset;
    double _uploadProgress;
    NSError *_uploadError;
    CDUnknownBlockType _onUploadProgress;
    CDUnknownBlockType _onUploadComplete;
    NSMetadataQuery *_query;
    NSOperationQueue *_uploadObserverQueue;
    CDUnknownBlockType _preCompleteHook;
}

@property(copy, nonatomic) CDUnknownBlockType preCompleteHook; // @synthesize preCompleteHook=_preCompleteHook;
@property(retain, nonatomic) NSOperationQueue *uploadObserverQueue; // @synthesize uploadObserverQueue=_uploadObserverQueue;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;
@property(copy, nonatomic) CDUnknownBlockType onUploadProgress; // @synthesize onUploadProgress=_onUploadProgress;
@property(retain) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) CLSAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_notifyOfCompletion;
- (void)_notifyOfChange;
- (void)_processItems:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)queryGatheredData:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
@property(nonatomic, getter=isUploaded) BOOL uploaded;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

