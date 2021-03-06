//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVLeafDataPayload.h"

@class NSArray, NSData, NSString, NSURL;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>
{
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property(readonly, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(readonly, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSURL *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *childrenOrder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSURL *destinationURL;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *sourceURL;
@property(readonly) Class superclass;

@end

