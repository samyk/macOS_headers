//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSString;

@interface VNClassificationObservation : VNObservation
{
    NSString *_identifier;
    id <VNOperationPointsProviding> _operationPointsProvider;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)operationPointsAndReturnError:(id *)arg1;
- (BOOL)hasMinimumPrecision:(float)arg1 forRecall:(float)arg2;
- (BOOL)hasMinimumRecall:(float)arg1 forPrecision:(float)arg2;
- (BOOL)hasPrecisionRecallCurve;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3 operationPointsProvider:(id)arg4;
- (id)initWithRequestRevision:(unsigned long long)arg1 identifier:(id)arg2 confidence:(float)arg3;

@end

