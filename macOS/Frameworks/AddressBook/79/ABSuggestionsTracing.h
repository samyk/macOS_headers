//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABSuggestionsTracing : NSObject
{
}

+ (id)suggestionLoggingForService;
+ (void)traceSuggestionAction:(id)arg1 suggestionIdentifier:(id)arg2 contactIdentifier:(id)arg3;
+ (void)traceSuggestionInfoInteraction:(id)arg1 suggestionIdentifier:(id)arg2 contactIdentifier:(id)arg3;
+ (void)traceContactInformationSource:(id)arg1 suggestionIdentifier:(id)arg2 contactIdentifier:(id)arg3;
+ (void)traceSuggestionInteraction:(id)arg1;

@end

