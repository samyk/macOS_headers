//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNCommuteSession, NSArray;

@protocol MNCommuteSessionObserver <NSObject>
- (void)commuteSession:(MNCommuteSession *)arg1 didUpdateDestinations:(NSArray *)arg2;

@optional
- (void)commuteSessionDidArrive:(MNCommuteSession *)arg1;
- (void)commuteSession:(MNCommuteSession *)arg1 didChangeToState:(unsigned long long)arg2;
@end

