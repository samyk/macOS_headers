//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionCallbackInterface.h"
#import "NSObject.h"

@class NSData;

@protocol NFHostEmulationSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didDisconnectFromReader;
- (void)didConnectToReader;
- (void)didReceiveAPDU:(NSData *)arg1;
@end

