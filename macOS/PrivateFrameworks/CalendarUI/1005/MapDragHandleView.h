//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MapDragRadiusView;

@interface MapDragHandleView : NSView
{
    MapDragRadiusView *_radView;
}

@property __weak MapDragRadiusView *radView; // @synthesize radView=_radView;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

