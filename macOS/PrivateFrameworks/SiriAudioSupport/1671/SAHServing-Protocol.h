//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class INPlayMediaIntent, INPlayMediaIntentResponse;

@protocol SAHServing
- (void)recordPostEngagementSignalsForIntent:(INPlayMediaIntent *)arg1 response:(INPlayMediaIntentResponse *)arg2 force:(BOOL)arg3 test:(BOOL)arg4;
- (void)recordAppSelectionSignalsForIntent:(INPlayMediaIntent *)arg1 force:(BOOL)arg2 test:(BOOL)arg3;
@end

