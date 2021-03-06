//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MPNowPlayingInfoLanguageOption : NSObject
{
    void *_mrLanguageOption;
}

@property(readonly, nonatomic) void *mrLanguageOption; // @synthesize mrLanguageOption=_mrLanguageOption;
- (BOOL)isEqualToLanguageOption:(id)arg1;
- (id)copyExternalRepresentation;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSArray *languageOptionCharacteristics; // @dynamic languageOptionCharacteristics;
@property(readonly, nonatomic) NSString *languageTag; // @dynamic languageTag;
@property(readonly, nonatomic) unsigned long long languageOptionType; // @dynamic languageOptionType;
- (BOOL)isAutomaticAudibleLanguageOption;
- (BOOL)isAutomaticLegibleLanguageOption;
- (id)initWithMRLanguageOption:(void *)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;

@end

