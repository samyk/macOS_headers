//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject
{
    AFManagedStorageConnection *_store;
}

- (void).cxx_destruct;
- (void)saveInfo:(id)arg1 forIdentifier:(id)arg2;
- (id)infoForIdentifier:(id)arg1;
- (void)reset;
- (id)_store;

@end

