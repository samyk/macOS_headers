//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class NSString, NSView, NSViewAnimation;

__attribute__((visibility("hidden")))
@interface ViewSwapper : NSObject <NSAnimationDelegate>
{
    BOOL isFading;
    NSViewAnimation *viewAnimation;
    struct CGRect newWindowFrame;
    NSView *_inView;
    NSView *_outView;
}

- (void)stop;
- (void)resignKeyInViewIfNeeded:(id)arg1;
- (void)tigerSwapView:(id)arg1 withView:(id)arg2 resizeWindow:(BOOL)arg3;
- (void)compatibleSwapView:(id)arg1 withView:(id)arg2 resizeWindow:(BOOL)arg3;
- (void)beginSwap:(id)arg1 withView:(id)arg2 resizeWindow:(BOOL)arg3;
- (void)animationDidEnd:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

