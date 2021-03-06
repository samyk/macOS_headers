//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BrowserCoachMark, NSImage;

@interface BrowserCoachMarkView : NSView
{
    BrowserCoachMark *_coach;
    NSImage *_contentImage;
    struct CGPoint _imageOffset;
}

+ (BOOL)coachMarksWouldOverlapUsingTextRects:(id)arg1;
- (double)bottomBorder;
- (double)rightBorder;
- (double)topBorder;
- (double)leftBorder;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawGradientInRect:(struct CGRect)arg1;
- (struct CGRect)contentRect;
- (id)initWithCoach:(id)arg1 contentRect:(struct CGRect)arg2 contentImage:(id)arg3 contentImageOffset:(struct CGPoint)arg4;
- (void)dealloc;

@end

