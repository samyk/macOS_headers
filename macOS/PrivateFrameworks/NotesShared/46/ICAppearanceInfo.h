//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICAppearanceInfo : NSObject
{
    unsigned long long _type;
}

+ (void)enumerateAppearanceTypesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)appearanceInfoWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) BOOL isDark;

@end

