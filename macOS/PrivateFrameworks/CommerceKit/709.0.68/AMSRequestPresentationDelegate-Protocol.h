//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommerceKit/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest;

@protocol AMSRequestPresentationDelegate <NSObject>
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 completion:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

