//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAppTest.h"

@class SearchInfo, _MKPlaceViewController;
@protocol MapsAppTestPlacecardChromeDelegate;

__attribute__((visibility("hidden")))
@interface MapsAppTestPlacecardChrome : MapsAppTest
{
    SearchInfo *_searchInfo;
    id <MapsAppTestPlacecardChromeDelegate> _placecardChromeDelegate;
    _MKPlaceViewController *_placeViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
@property(nonatomic) __weak id <MapsAppTestPlacecardChromeDelegate> placecardChromeDelegate; // @synthesize placecardChromeDelegate=_placecardChromeDelegate;
- (void)startPlacecardTest;
- (void)cleanup:(BOOL)arg1;
- (BOOL)runTest;

@end

