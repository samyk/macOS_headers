//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAppleMediaAccessory, HMDHomeManager, NSHashTable, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver>
{
    HMDAppleMediaAccessory *_accessory;
    HMDHomeManager *_homeManager;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_activeClients;
}

+ (BOOL)isSupported;
@property(readonly, nonatomic) NSHashTable *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAvailableUpdate:(id)arg1;
- (void)_handleUpdateAvailableUpdate:(id)arg1;
- (void)_handleStop:(id)arg1;
- (void)_handleStart:(id)arg1;
- (BOOL)_shouldAcceptMessage:(id)arg1;
- (void)registerForMessages;
- (id)initWithHomeManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

