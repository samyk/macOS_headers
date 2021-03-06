//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue, NSString;

@interface CSASRequestSender : NSObject
{
    struct AuthorizationOpaqueRef *_authRef;
    NSOperationQueue *_operationQueue;
    NSDictionary *_commandSet;
    NSString *_helperID;
}

@property(copy) NSString *helperID; // @synthesize helperID=_helperID;
@property(copy, nonatomic) NSDictionary *commandSet; // @synthesize commandSet=_commandSet;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)executeCommandInHelperTool:(id)arg1 userInfo:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)requestHelperVersion:(CDUnknownBlockType)arg1;
- (BOOL)syncRemoveHelperTool:(id *)arg1;
- (void)removeHelperTool:(CDUnknownBlockType)arg1;
- (BOOL)blessHelperToolAndReturnError:(id *)arg1;
- (void)cleanUp;
- (void)dealloc;
- (id)initWithCommandSet:(id)arg1 helperID:(id)arg2 error:(id *)arg3;

@end

