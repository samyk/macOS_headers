//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDateInterval, NSSet, NSString;

@protocol USUsageTrackingAgent
- (void)fetchBudgetsWithIdentifier:(NSString *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifiers:(NSArray *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)checkStatusOfAllBudgetsWithReplyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg1;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)stopMonitoringAllBudgetsWithReplyHandler:(void (^)(NSError *))arg1;
- (void)stopMonitoringBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)startMonitoringBudgets:(NSArray *)arg1 darwinNotificationName:(NSString *)arg2 notificationTimes:(NSSet *)arg3 clientIdentifier:(NSString *)arg4 replyHandler:(void (^)(NSError *))arg5;
- (void)fetchReportsDuringInterval:(NSDateInterval *)arg1 partitionInterval:(double)arg2 focalOnly:(BOOL)arg3 forceImmediateSync:(BOOL)arg4 replyHandler:(void (^)(NSArray *, NSDictionary *, NSArray *, NSError *))arg5;
@end

