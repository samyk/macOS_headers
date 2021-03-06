//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class MCOOperation, NSString;

@interface WFSendEmailAction : WFAction
{
    NSString *_prefix;
    MCOOperation *_operation;
}

@property(nonatomic) __weak MCOOperation *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL showComposeSheet;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateEmailHeaderFromParameters:(CDUnknownBlockType)arg1;
- (void)sendTextViaMailtoURL:(id)arg1 withUserInterface:(id)arg2;
- (id)emailAccountWithAddress:(id)arg1;
- (id)emailResource;
- (BOOL)supportsUserInterfaceType:(id)arg1;
- (void)sendEmailWithAccount:(id)arg1 bodyCollection:(id)arg2 attachmentCollection:(id)arg3 to:(id)arg4 cc:(id)arg5 bcc:(id)arg6 subject:(id)arg7;
- (void)cancel;
- (void)runWithNoUserInterface:(id)arg1;
- (void)runWithAppKitUserInterface:(id)arg1 input:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

