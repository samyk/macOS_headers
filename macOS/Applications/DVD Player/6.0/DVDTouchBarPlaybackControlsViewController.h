//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AVTouchBarScrubber, NSButton, NSTextField;
@protocol AVTouchBarPlaybackControlsControlling;

@interface DVDTouchBarPlaybackControlsViewController : NSViewController
{
    AVTouchBarScrubber *_touchBarScrubber;
    NSTextField *_elapsedTimeTextField;
    NSTextField *_remainingTimeTextField;
    NSButton *_playButton;
    id <AVTouchBarPlaybackControlsControlling> _playerController;
}

@property(retain, nonatomic) id <AVTouchBarPlaybackControlsControlling> playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)hidePlaybackControls:(BOOL)arg1;
- (void)updateTouchBarWithRate:(double)arg1;
- (void)updateTouchBarTimeTextsElapsed:(id)arg1 remaining:(id)arg2;
- (id)makePlayButton;
- (void)loadView;

@end

