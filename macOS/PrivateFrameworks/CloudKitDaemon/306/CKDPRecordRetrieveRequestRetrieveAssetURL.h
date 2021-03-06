//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying>
{
    long long _requestedTTL;
    CKDPRequestedFields *_assetFields;
    int _type;
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasRequestedTTL;
@property(readonly, nonatomic) BOOL hasAssetFields;

@end

