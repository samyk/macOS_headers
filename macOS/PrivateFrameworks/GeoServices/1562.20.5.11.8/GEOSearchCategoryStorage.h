//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOPDBrowseCategory *_browseCategory;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_browseCategory:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteEntry:1;
        unsigned int wrote_browseCategory:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property(readonly, nonatomic) BOOL hasAutocompleteEntry;
- (void)_readAutocompleteEntry;
@property(retain, nonatomic) GEOPDBrowseCategory *browseCategory;
@property(readonly, nonatomic) BOOL hasBrowseCategory;
- (void)_readBrowseCategory;
- (id)initWithSearchCategory:(id)arg1;

@end

