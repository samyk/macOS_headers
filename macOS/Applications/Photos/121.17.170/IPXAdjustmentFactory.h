//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PAAdjustmentFactory-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, PFCanceler;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXAdjustmentFactory : NSObject <PAAdjustmentFactory>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_loadGroup;
    PFCanceler *_canceler;
    NSMutableDictionary *_operations;
    BOOL _isLoaded;
    BOOL _isLoading;
    NSMutableArray *_loadCompletionBlocks;
}

- (void).cxx_destruct;
- (void)_sendCompletion:(CDUnknownBlockType)arg1 success:(BOOL)arg2;
- (void)setOperation:(id)arg1 forIdentifier:(id)arg2;
- (id)operationWithIdentifier:(id)arg1;
- (void)wait;
- (void)cancel;
- (void)_didLoad:(id)arg1 success:(BOOL)arg2;
- (void)didLoad:(id)arg1 success:(BOOL)arg2;
- (void)_run:(id)arg1 failCount:(id)arg2;
- (void)_finishOperation:(id)arg1 composition:(id)arg2 failCounter:(id)arg3 failed:(BOOL)arg4 operations:(id)arg5;
- (void)_finishLivePhoto:(id)arg1 composition:(id)arg2 operations:(id)arg3;
- (void)_load:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureLoadGroup;
- (BOOL)reset:(id)arg1;
- (void)load:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_allIdentifiersWithMetaData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

