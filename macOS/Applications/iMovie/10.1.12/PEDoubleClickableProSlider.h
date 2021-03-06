//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSlider.h"

@class NSString;

@interface PEDoubleClickableProSlider : LKSlider
{
    double mDefaultValue;
    BOOL mHasSetDefaultValue;
    NSString *mAccessibilityTitle;
}

- (void)dealloc;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_sliderTouched:(BOOL)arg1;
- (double)defaultValue;
- (void)setDefaultValue:(double)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

