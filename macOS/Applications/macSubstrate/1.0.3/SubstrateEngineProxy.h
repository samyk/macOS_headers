//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SubstrateEngineProxy : NSObject
{
    NSXPCConnection *_installerConnection;
    NSXPCConnection *_helperConnection;
}

+ (id)sharedProxy;
- (void).cxx_destruct;
- (id)getHelperWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)getInstallerWithErrorHandler:(CDUnknownBlockType)arg1;

@end

