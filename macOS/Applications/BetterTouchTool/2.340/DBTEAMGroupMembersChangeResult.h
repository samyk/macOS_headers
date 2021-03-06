//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMGroupFullInfo, NSString;

@interface DBTEAMGroupMembersChangeResult : NSObject <DBSerializable, NSCopying>
{
    DBTEAMGroupFullInfo *_groupInfo;
    NSString *_asyncJobId;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *asyncJobId; // @synthesize asyncJobId=_asyncJobId;
@property(readonly, nonatomic) DBTEAMGroupFullInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (BOOL)isEqualToGroupMembersChangeResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithGroupInfo:(id)arg1 asyncJobId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

