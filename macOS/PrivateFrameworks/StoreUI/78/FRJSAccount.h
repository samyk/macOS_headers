//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRJSObject.h"

@class CKStoreAccount;

@interface FRJSAccount : FRJSObject
{
    CKStoreAccount *_storeAccount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKStoreAccount *storeAccount; // @synthesize storeAccount=_storeAccount;
- (id)callFunction:(id)arg1 withArguments:(id)arg2;
- (id)initWithStoreAccount:(id)arg1;

@end

