//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HMPBCharacteristicReference, NSData;

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying>
{
    NSData *_actionUUID;
    HMPBCharacteristicReference *_characteristicReference;
    NSData *_targetValue;
}

@property(retain, nonatomic) HMPBCharacteristicReference *characteristicReference; // @synthesize characteristicReference=_characteristicReference;
@property(retain, nonatomic) NSData *targetValue; // @synthesize targetValue=_targetValue;
@property(retain, nonatomic) NSData *actionUUID; // @synthesize actionUUID=_actionUUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCharacteristicReference;
@property(readonly, nonatomic) BOOL hasTargetValue;
@property(readonly, nonatomic) BOOL hasActionUUID;

@end

