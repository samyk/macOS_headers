//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject
{
    NSMutableDictionary *_descriptionDictionary;
    NSURL *_url;
}

+ (id)simpleImageDescriptionWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

