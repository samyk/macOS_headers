//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BTMAgentConnection : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)serviceName;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)openLoginItemsWithReply:(CDUnknownBlockType)arg1;
- (void)canLoadServiceLoginItemWithURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setUserElection:(long long)arg1 forBackgroundItem:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setUserElection:(long long)arg1 forURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getBackgroundItemsWithReply:(CDUnknownBlockType)arg1;
- (void)removeLoginItem:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addLoginItem:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLoginItemsWithTypeMask:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (id)connection;

@end

