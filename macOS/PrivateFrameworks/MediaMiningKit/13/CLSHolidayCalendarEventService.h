//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSHolidayCalendarEventDateRuleDelegate.h"

@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate>
{
    NSArray *_eventRules;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *eventRules; // @synthesize eventRules=_eventRules;
- (id)_ruleWithUUID:(id)arg1;
- (id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2;
- (void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)eventRuleForLocalDate:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

