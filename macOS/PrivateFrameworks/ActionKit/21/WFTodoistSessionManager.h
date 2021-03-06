//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFTodoistSessionManager : NSObject
{
    NSURLSession *_session;
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSString *_syncToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getProjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

