//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, PLRoutineService;

@interface PLFrequentLocationManager : NSObject
{
    NSSet *_currentFrequentLocations;
    PLRoutineService *_routineManager;
}

@property(retain, nonatomic) PLRoutineService *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) NSSet *currentFrequentLocations; // @synthesize currentFrequentLocations=_currentFrequentLocations;
- (void).cxx_destruct;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;
- (BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;
- (id)init;

@end

