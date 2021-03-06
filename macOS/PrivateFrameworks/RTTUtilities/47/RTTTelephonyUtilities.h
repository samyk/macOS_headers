//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientCarrierBundleDelegate.h"
#import "TUCallCapabilitiesDelegate.h"
#import "TUCallCapabilitiesDelegatePrivate.h"

@class ACAccountStore, AXDispatchTimer, CNContactStore, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate>
{
    ACAccountStore *_accountStore;
    NSNumber *_callCapabilitiesSupportsTelephonyCalls;
    AXDispatchTimer *_icloudAccountConsolidator;
    AXDispatchTimer *_icloudRelayConsolidator;
    BOOL _headphoneJackSupportsTTY;
    CTXPCServiceSubscriptionContext *_defaultVoiceContext;
    unsigned long long _activeContextCount;
    NSSet *_allVoiceContexts;
    CNContactStore *_contactStore;
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_telephonyUpdateQueue;
    NSObject<OS_dispatch_queue> *_accountStoreQueue;
}

+ (id)relayPhoneNumberForContext:(id)arg1;
+ (BOOL)relayIsSupportedForContext:(id)arg1;
+ (BOOL)shouldUseRTTForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)hardwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)isOnlyRTTSupportedForContext:(id)arg1;
+ (BOOL)isRTTSupportedForContext:(id)arg1;
+ (BOOL)isTTYSupportedForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)isRelayRTTSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)isTTYSupported;
+ (BOOL)TTYSoftwareEnabledForAnyActiveContext;
+ (BOOL)TTYHardwareEnabledForAnyActiveContext;
+ (void)performCallCenterTask:(CDUnknownBlockType)arg1;
+ (id)sharedCallCenter;
+ (id)sharedUtilityProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountStoreQueue; // @synthesize accountStoreQueue=_accountStoreQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue; // @synthesize telephonyUpdateQueue=_telephonyUpdateQueue;
@property(retain, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain) NSSet *allVoiceContexts; // @synthesize allVoiceContexts=_allVoiceContexts;
@property unsigned long long activeContextCount; // @synthesize activeContextCount=_activeContextCount;
@property(retain) CTXPCServiceSubscriptionContext *defaultVoiceContext; // @synthesize defaultVoiceContext=_defaultVoiceContext;
- (BOOL)relayRTTIsSupported;
- (void)_processiCloudAccountForRTT;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)iCloudRTTRelayDidChange:(id)arg1;
- (void)didChangeOutgoingRelayCallerID;
- (void)listenForCloudRelayChanges;
- (BOOL)currentProcessHandlesCloudRelay;
- (id)relayNumberForContext:(id)arg1;
- (BOOL)isTTYSupportedForContext:(id)arg1;
- (BOOL)isTTYOverIMSSupportedForContext:(id)arg1;
- (id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2;
- (id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2;
- (void)reloadDefaultVoiceContext;
- (BOOL)reloadRelayPhoneNumbers;
- (id)subscriptionContexts;
- (void)simLessSubscriptionsDidChange;
- (void)activeSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;
- (void)carrierSettingsDidChange;
- (id)labelFromUUID:(id)arg1;
- (id)phoneNumberFromUUID:(id)arg1;
- (id)contactPathForCall:(id)arg1;
- (BOOL)contactPathIsMe:(id)arg1;
- (id)ttyMeContact;
- (id)phoneNumberForContext:(id)arg1;
- (id)myPhoneNumber;
- (BOOL)relayIsSupported;
- (BOOL)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethodForContext:(id)arg1;
@property(retain) NSNumber *callCapabilitiesSupportsTelephonyCalls;
- (unsigned long long)currentPreferredTransportMethod;
- (void)headphoneStateChangedNotification:(id)arg1;
- (void)updateHeadphoneState;
- (void)didChangeTelephonyCallingSupport;
- (void)setTTYDictionaryAvailability:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

