//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface AddRemoveBar : NSSegmentedControl
{
}

+ (Class)cellClass;
- (void)setConfigSegmentAccessibilityDescription:(id)arg1;
- (void)setRemoveSegmentAccessibilityDescription:(id)arg1;
- (void)setAddSegmentAccessibilityDescription:(id)arg1;
- (BOOL)isConfigSelected;
- (BOOL)isRemoveSelected;
- (BOOL)isAddSelected;
- (BOOL)isConfigEnabled;
- (BOOL)isRemoveEnabled;
- (BOOL)isAddEnabled;
- (void)setConfigEnabled:(BOOL)arg1;
- (void)setRemoveEnabled:(BOOL)arg1;
- (void)setAddEnabled:(BOOL)arg1;
- (void)awakeFromNib;

@end

