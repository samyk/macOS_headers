//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject
{
    BOOL _ascending;
    NSArray *_generators;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSArray *generators; // @synthesize generators=_generators;
- (unsigned long long)hash;
- (BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)orderByExpression;
- (id)initWithGenerators:(id)arg1 ascending:(BOOL)arg2;

@end

