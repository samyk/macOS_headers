//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSString;

@interface SMNWindowsLogAction : SMNAction
{
    NSString *tempDirectory;
}

+ (BOOL)streamsResults;
+ (int)actionID;
- (void).cxx_destruct;
@property(retain) NSString *tempDirectory; // @synthesize tempDirectory;
- (BOOL)expectsAResult;
- (id)requestPayload;
- (void)finishedFile:(id)arg1 length:(unsigned long long)arg2;
- (void)updatedFile:(id)arg1 partialLength:(unsigned long long)arg2;
- (BOOL)receiveResultOnFd:(int)arg1 errorIsFatal:(char *)arg2;

@end

