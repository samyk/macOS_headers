//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBSHARINGAccessLevel, NSArray, NSNumber, NSString;

@interface DBSHARINGMembershipInfo : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGAccessLevel *_accessType;
    NSArray *_permissions;
    NSString *_initials;
    NSNumber *_isInherited;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *isInherited; // @synthesize isInherited=_isInherited;
@property(readonly, copy, nonatomic) NSString *initials; // @synthesize initials=_initials;
@property(readonly, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic) DBSHARINGAccessLevel *accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;
- (BOOL)isEqualToMembershipInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAccessType:(id)arg1;
- (id)initWithAccessType:(id)arg1 permissions:(id)arg2 initials:(id)arg3 isInherited:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

