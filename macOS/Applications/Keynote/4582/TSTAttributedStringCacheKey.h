//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, TSWPParagraphStyle;

@interface TSTAttributedStringCacheKey : NSObject <NSCopying>
{
    NSString *_string;
    TSWPParagraphStyle *_style;
}

@property(retain, nonatomic) TSWPParagraphStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithString:(id)arg1 andStyle:(id)arg2;

@end

