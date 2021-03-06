//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRDynamicBarAnimator;

@protocol FRDynamicBarAnimatorDelegate <NSObject>
- (void)dynamicBarAnimatorWillLeaveSteadyState:(FRDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(FRDynamicBarAnimator *)arg1;
- (BOOL)dynamicBarAnimator:(FRDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(FRDynamicBarAnimator *)arg1;
@end

