//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject
{
    IDSServerCertificate *_backingCertificate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDSServerCertificate *backingCertificate; // @synthesize backingCertificate=_backingCertificate;
- (id)description;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithBackingCertificate:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;

@end

