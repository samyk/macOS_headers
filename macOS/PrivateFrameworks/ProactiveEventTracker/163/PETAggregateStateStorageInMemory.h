//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveEventTracker/PETAggregateStateStorage.h>

@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage
{
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)saveCorruptState;
- (void)reset;
- (BOOL)resetLocked;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

