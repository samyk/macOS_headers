//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFMediaObjectObserver-Protocol.h>
#import <Home/HFMediaSessionObserver-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>
{
    BOOL _hasPendingWrites;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableArray *_transactionStack;
    NSError *_cachedPlaybackStateWriteError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *cachedPlaybackStateWriteError; // @synthesize cachedPlaybackStateWriteError=_cachedPlaybackStateWriteError;
@property(retain, nonatomic) NSMutableArray *transactionStack; // @synthesize transactionStack=_transactionStack;
@property(readonly, nonatomic) BOOL hasPendingWrites; // @synthesize hasPendingWrites=_hasPendingWrites;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(BOOL)arg3 notifyDidUpdate:(BOOL)arg4;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(BOOL)arg3;
- (void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(BOOL)arg2;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (BOOL)hasPendingWritesForRouteID:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

