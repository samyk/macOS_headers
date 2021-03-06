//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXTrimScrubberLayoutHelper : NSObject
{
    BOOL _needsUpdate;
    double _filmstripScale;
    double _pivotAnchor;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _viewportFrame;
    struct NSEdgeInsets _horizontalTimelineInset;
    struct CGRect _filmstripFrame;
    struct CGRect _filmstripFrameInScrubberSpace;
    struct CGRect _visibleFrameInFilmstripSpace;
}

@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) struct CGRect visibleFrameInFilmstripSpace; // @synthesize visibleFrameInFilmstripSpace=_visibleFrameInFilmstripSpace;
@property(nonatomic) struct CGRect filmstripFrameInScrubberSpace; // @synthesize filmstripFrameInScrubberSpace=_filmstripFrameInScrubberSpace;
@property(nonatomic) struct CGRect filmstripFrame; // @synthesize filmstripFrame=_filmstripFrame;
@property(nonatomic) struct NSEdgeInsets horizontalTimelineInset; // @synthesize horizontalTimelineInset=_horizontalTimelineInset;
@property(nonatomic) double pivotAnchor; // @synthesize pivotAnchor=_pivotAnchor;
@property(nonatomic) double filmstripScale; // @synthesize filmstripScale=_filmstripScale;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGRect durationInsetFilmstripFrame;
- (void)_updateIfNeeded;
- (CDStruct_1b6d18a9)timeForOffsetInScrubberSpace:(double)arg1;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end

