//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsAnalytics/NSObject-Protocol.h>

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(BOOL)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(BOOL)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didRemoveAccessTokenForTagID:(NSString *)arg2 userInitiated:(BOOL)arg3;
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeEditorialArticleVersion:(FCUserInfo *)arg1;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(BOOL)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(BOOL)arg2;
@end

