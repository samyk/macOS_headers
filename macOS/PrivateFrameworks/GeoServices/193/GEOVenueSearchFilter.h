//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOSearchFilter.h"

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>
{
    id <GEOVenueIdentifier> _identifier;
}

@property(readonly, nonatomic) id <GEOVenueIdentifier> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

