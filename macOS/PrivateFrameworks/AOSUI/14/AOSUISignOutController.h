//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSMutableArray;

@interface AOSUISignOutController : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableArray *_signOutObservers;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *signOutObservers; // @synthesize signOutObservers=_signOutObservers;
@property(retain) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)_removeAccount:(id)arg1 withActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showDesktopAndDocumentsAlertForAccount:(id)arg1 window:(id)arg2 withActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_showWalletDialogForAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preflightServices:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishDeletingAccount:(id)arg1 window:(id)arg2 withActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_dataclassActionsForAccountDeletion:(id)arg1;
- (void)signOutAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startProgress;
- (void)endProgress;
- (void)registerObserver:(id)arg1;
- (id)init;

@end

