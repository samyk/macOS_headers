//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSURLRequestInternal : NSObject
{
    struct URLRequest _request;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithMessage:(struct __CFHTTPMessage *)arg1 bodyParts:(struct __CFArray *)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(struct __CFURL *)arg5 mutable:(unsigned char)arg6;
- (id)init;
@property(readonly) struct URLRequest *_inner; // @dynamic _inner;

@end

