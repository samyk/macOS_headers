//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FImmutableTree;

@interface FPruneForest : NSObject
{
    FImmutableTree *_pruneForest;
}

+ (id)empty;
+ (id)keepTree;
+ (id)pruneTree;
@property(retain, nonatomic) FImmutableTree *pruneForest; // @synthesize pruneForest=_pruneForest;
- (void).cxx_destruct;
- (void)enumarateKeptNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)setPruneValue:(id)arg1 forAll:(id)arg2 atPath:(id)arg3;
- (id)pruneAll:(id)arg1 atPath:(id)arg2;
- (id)keepAll:(id)arg1 atPath:(id)arg2;
- (id)keepPath:(id)arg1;
- (id)prunePath:(id)arg1;
- (id)childAtPath:(id)arg1;
- (id)child:(id)arg1;
- (BOOL)affectsPath:(id)arg1;
- (BOOL)shouldKeepPath:(id)arg1;
- (BOOL)shouldPruneUnkeptDescendantsAtPath:(id)arg1;
- (BOOL)prunesAnything;
- (id)initWithForest:(id)arg1;

@end

