//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject
{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (unsigned long long)unreadCallCount;
- (id)recentCallsWithLimitingTypes:(unsigned int)arg1;
- (id)init;

@end

