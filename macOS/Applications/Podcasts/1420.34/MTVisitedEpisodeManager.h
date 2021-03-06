//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton
{
    NSMutableSet *_startedEpisodeUuids;
    NSMutableSet *_endedEpisodeUuids;
}

@property(retain, nonatomic) NSMutableSet *endedEpisodeUuids; // @synthesize endedEpisodeUuids=_endedEpisodeUuids;
@property(retain, nonatomic) NSMutableSet *startedEpisodeUuids; // @synthesize startedEpisodeUuids=_startedEpisodeUuids;
- (void).cxx_destruct;
- (void)flushVisitedEpisodes;
- (unsigned long long)countOfEndedEpisodes;
- (unsigned long long)countOfStartedEpisodes;
- (BOOL)hasEndedVisitingEpisode:(id)arg1;
- (void)startVisitingEpisode:(id)arg1;
- (void)endVisitingEpisode:(id)arg1;
- (id)init;

@end

