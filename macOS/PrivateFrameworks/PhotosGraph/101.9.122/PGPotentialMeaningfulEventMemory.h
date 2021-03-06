//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@protocol PGGraphMeaningfulEvent;

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory
{
    id <PGGraphMeaningfulEvent> _meaningfulEvent;
    unsigned long long _meaning;
}

@property(readonly) unsigned long long meaning; // @synthesize meaning=_meaning;
@property(readonly) id <PGGraphMeaningfulEvent> meaningfulEvent; // @synthesize meaningfulEvent=_meaningfulEvent;
- (void).cxx_destruct;
- (id)initWithCategory:(unsigned long long)arg1 meaningfulEvent:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4;

@end

