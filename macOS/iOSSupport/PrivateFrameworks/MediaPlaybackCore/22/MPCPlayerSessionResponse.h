//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPResponse.h>

@class MPCMediaRemoteController, MPSectionedCollection;
@protocol MPCPlayerSessionResponseBuilder;

@interface MPCPlayerSessionResponse : MPResponse
{
    MPSectionedCollection *_items;
    MPCMediaRemoteController *_controller;
}

+ (id)builderProtocol;
@property(readonly, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) MPSectionedCollection *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <MPCPlayerSessionResponseBuilder> builder; // @dynamic builder;

@end

