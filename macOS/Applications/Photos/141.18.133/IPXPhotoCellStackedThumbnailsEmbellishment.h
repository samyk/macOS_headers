//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXPhotoCellParallaxEffectProviding-Protocol.h"

@class CALayer, MOMediaViewDefaultCell, NSString;

__attribute__((visibility("hidden")))
@interface IPXPhotoCellStackedThumbnailsEmbellishment : NSObject <IPXPhotoCellParallaxEffectProviding>
{
    MOMediaViewDefaultCell *_mediaViewCell;
    BOOL _observingThumbnailChanges;
    BOOL _enabled;
    CALayer *_layerWasObserving;
    struct CGPoint _parallaxAdjustment;
}

+ (id)embellishmentInstalledInMediaViewCell:(id)arg1;
- (void).cxx_destruct;
@property struct CGPoint parallaxAdjustment; // @synthesize parallaxAdjustment=_parallaxAdjustment;
- (id)screenshot;
- (void)resetParallaxEffect;
- (void)adjustParallaxEffectHorizontally:(BOOL)arg1 vertically:(BOOL)arg2 forContentRect:(struct CGRect)arg3;
- (BOOL)supportsParallaxEffect;
- (void)cellDidScroll;
- (struct CGRect)badgesFrame;
- (void)layout;
- (void)updateLayerBackground;
- (void)updateLayerVisibility;
@property(nonatomic) BOOL enabled;
- (id)_mediaView;
- (id)_mediaViewCell;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingThumbnailChanges;
- (void)_startObservingThumbnailChanges;
- (void)dealloc;
- (id)initWithOwningMediaViewCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

