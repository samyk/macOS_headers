//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface OZNotificationStub : NSObject
{
    NSTimer *_pTimer;
    struct OZDocument *_pDocument;
}

- (void)fire;
- (void)processNotifications:(id)arg1;
- (void)releaseTimer;
- (void)createTimer;
- (void)dealloc;
- (id)initWithOZDocument:(struct OZDocument *)arg1 useTimer:(BOOL)arg2;

@end

