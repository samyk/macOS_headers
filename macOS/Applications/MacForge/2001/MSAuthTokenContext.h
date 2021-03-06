//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSEncrypter, NSArray, NSHashTable;

@interface MSAuthTokenContext : NSObject
{
    BOOL _resetAuthTokenRequired;
    NSHashTable *_delegates;
    MSEncrypter *_encrypter;
    NSArray *_authTokenHistoryArray;
}

+ (void)resetSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *authTokenHistoryArray; // @synthesize authTokenHistoryArray=_authTokenHistoryArray;
@property(retain, nonatomic) MSEncrypter *encrypter; // @synthesize encrypter=_encrypter;
@property(nonatomic, getter=isResetAuthTokenRequired) BOOL resetAuthTokenRequired; // @synthesize resetAuthTokenRequired=_resetAuthTokenRequired;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)preventResetAuthTokenAfterStart;
- (void)finishInitialize;
- (void)checkIfTokenNeedsToBeRefreshed:(id)arg1;
- (void)setAuthTokenHistory:(id)arg1;
- (id)authTokenHistory;
- (void)removeAuthToken:(id)arg1;
- (id)authTokenValidityArray;
- (id)accountId;
- (id)authToken;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)setAuthToken:(id)arg1 withAccountId:(id)arg2 expiresOn:(id)arg3;
- (id)init;

@end

