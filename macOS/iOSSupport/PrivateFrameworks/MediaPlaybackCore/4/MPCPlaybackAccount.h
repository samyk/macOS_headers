//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class ICMusicSubscriptionStatus, ICUserIdentity, NSString;

@interface MPCPlaybackAccount : NSObject <NSCopying>
{
    BOOL _hasCloudLibraryEnabled;
    BOOL _delegated;
    BOOL _activeAccount;
    ICUserIdentity *_userIdentity;
    NSString *_hashedDSID;
    NSString *_storeFrontIdentifier;
    ICMusicSubscriptionStatus *_subscriptionStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic, getter=isActiveAccount) BOOL activeAccount; // @synthesize activeAccount=_activeAccount;
@property(readonly, nonatomic, getter=isDelegated) BOOL delegated; // @synthesize delegated=_delegated;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(nonatomic) BOOL hasCloudLibraryEnabled; // @synthesize hasCloudLibraryEnabled=_hasCloudLibraryEnabled;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) BOOL usesLease;
@property(readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

