//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSPushConfiguration, AMSPushPayload;

@protocol AMSPushParsable <NSObject>
+ (void)handleNotificationPayload:(AMSPushPayload *)arg1 config:(AMSPushConfiguration *)arg2 bag:(id <AMSBagProtocol>)arg3;

@optional
+ (BOOL)shouldSkipAccountCheck;
@end

