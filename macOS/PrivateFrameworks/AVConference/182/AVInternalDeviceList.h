//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType propertyListener;
    CDUnknownBlockType hardwareListener;
    CDUnknownBlockType changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;
+ (id)newDeviceList;
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;
- (void)notifyDeviceListChanged;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (unsigned int)dataSourceControlID;

@end

