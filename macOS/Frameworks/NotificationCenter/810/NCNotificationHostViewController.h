//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewHostViewController.h>

#import <NotificationCenter/NCNotificationHostProtocol-Protocol.h>

@class NCRemoteNotificationPlugIn, NSString;
@protocol NCNotificationHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface NCNotificationHostViewController : NCRemoteViewHostViewController <NCNotificationHostProtocol>
{
}

- (void)notificationCloseWithActivation:(long long)arg1 actionIdentifier:(id)arg2;
- (void)remoteViewReadyWithConfiguration:(id)arg1;
- (void)remoteViewSetupConfiguration:(id)arg1;
- (struct CGSize)maxSize;
@property(readonly, nonatomic) NCRemoteNotificationPlugIn *notificationPlugIn;
- (id)initWithPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NCNotificationHostViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

