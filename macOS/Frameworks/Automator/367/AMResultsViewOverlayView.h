//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSDictionary, NSString;

@interface AMResultsViewOverlayView : NSView
{
    NSString *_overlayString;
    NSDictionary *_attributes;
    BOOL _drawBackground;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *overlayString; // @synthesize overlayString=_overlayString;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

