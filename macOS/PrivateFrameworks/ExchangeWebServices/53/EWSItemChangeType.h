//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSBaseItemIdType, NSArray, NSString;

@interface EWSItemChangeType : NSObject <XSDefinitionProvider>
{
    EWSBaseItemIdType *_ItemId;
    NSArray *_Updates;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Updates; // @synthesize Updates=_Updates;
@property(retain, nonatomic) EWSBaseItemIdType *ItemId; // @synthesize ItemId=_ItemId;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

