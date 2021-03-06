//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFSiriRequestFailureHandling.h"
#import "AFSiriRequestHandling.h"
#import "AFSiriUsageResultHandling.h"
#import "NSXPCListenerDelegate.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    NSMapTable *_executorForRequest;
    id <AFSiriTaskmasterDelegate> _delegate;
}

+ (id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceWithName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AFSiriTaskmasterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleSiriRequest:(id)arg1 deliveryHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithTaskDeliverer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

