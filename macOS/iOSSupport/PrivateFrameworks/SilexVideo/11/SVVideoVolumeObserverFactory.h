//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVolumeObserverFactory-Protocol.h>

@class AVAudioSession, NSString;
@protocol SVPlayerProviding;

@interface SVVideoVolumeObserverFactory : NSObject <SVVideoVolumeObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
    AVAudioSession *_audioSession;
}

@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createVolumeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 audioSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

