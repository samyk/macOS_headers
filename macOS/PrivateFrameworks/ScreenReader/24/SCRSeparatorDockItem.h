//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSlider.h>

__attribute__((visibility("hidden")))
@interface SCRSeparatorDockItem : SCRSlider
{
}

- (id)interactionValueDescription;
- (id)valueDescription;
- (id)typeDescription;
- (void)handleInteractionOutput:(id)arg1 forCommand:(id)arg2 withStatus:(BOOL)arg3;
- (BOOL)interactPageDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)isInteractive;
- (long long)groupBehavior;
- (BOOL)incrementWithPercentage:(double)arg1;
- (BOOL)decrementWithPercentage:(double)arg1;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)incrementSmall;
- (BOOL)decrementSmall;
- (BOOL)increment;
- (BOOL)decrement;
- (double)maxFloatValue;
- (double)minFloatValue;
- (BOOL)supportsMaxFloatValue;
- (BOOL)supportsMinFloatValue;
- (id)maxValue;
- (id)minValue;

@end

