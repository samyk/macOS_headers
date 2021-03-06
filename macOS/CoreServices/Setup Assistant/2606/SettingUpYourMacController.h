//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MacBuddyViewController.h"

@class NSObject, NSProgressIndicator, NSString, NSView;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SettingUpYourMacController : MacBuddyViewController
{
    NSObject<OS_dispatch_queue> *_animationQueue;
    NSObject<OS_dispatch_semaphore> *_animationSemaphore;
    NSProgressIndicator *_spinny;
    NSView *_progressView;
    NSString *_settingUpText;
    NSView *_accessibilityContainerView;
    NSView *_animationContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
@property(retain, nonatomic) NSView *accessibilityContainerView; // @synthesize accessibilityContainerView=_accessibilityContainerView;
@property(copy, nonatomic) NSString *settingUpText; // @synthesize settingUpText=_settingUpText;
@property(retain, nonatomic) NSView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSProgressIndicator *spinny; // @synthesize spinny=_spinny;
- (void)_fadeOutProgressView;
- (void)_animateCheckAndRowNumber:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)didBecomeInvisible;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)computerImage;
- (id)init;

@end

