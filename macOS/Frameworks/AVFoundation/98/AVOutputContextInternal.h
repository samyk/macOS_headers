//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVOutputContextInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextImpl> impl;
    unsigned long long outputDeviceFeatures;
    int applicationPID;
    BOOL applicationPIDWasSet;
    id <AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;
}

- (void).cxx_destruct;

@end

