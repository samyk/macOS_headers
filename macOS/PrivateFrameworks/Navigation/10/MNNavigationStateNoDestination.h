//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

@interface MNNavigationStateNoDestination : MNNavigationState
{
}

- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;

@end

