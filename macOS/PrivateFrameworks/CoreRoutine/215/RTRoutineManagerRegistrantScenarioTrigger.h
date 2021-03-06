//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant
{
    NSMutableDictionary *__scenarioTriggerHandlers;
    BOOL _registered;
    unsigned long long _monitoredScenarioTriggerTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes; // @synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes;
@property(readonly, copy, nonatomic) NSDictionary *scenarioTriggerHandlers; // @synthesize scenarioTriggerHandlers=__scenarioTriggerHandlers;
- (void)onScenarioTriggers:(id)arg1 error:(id)arg2;
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1;
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

