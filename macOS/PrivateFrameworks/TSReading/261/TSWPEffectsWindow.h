//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UITextView;

@interface TSWPEffectsWindow : UIWindow
{
    BOOL _readyToGo;
    unsigned int _activeEffectsCount;
    UITextView *_dummyToReclaimFirstResponder;
}

+ (id)sharedEffectsWindowAboveStatusBar;
- (void)pDidChangeStatusBarOrientation:(id)arg1;
- (void)p_updateForOrientation:(long long)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)dealloc;
- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end

