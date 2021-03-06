//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol QLPreviewItemPrivate <NSObject>

@optional
@property(readonly) NSURL *searchableItemURL;
@property(readonly) NSString *searchableItemTitle;
@property(readonly, copy) NSString *queryString;
@property(readonly, copy) NSString *extensionPath;
@property(readonly) NSString *applicationBundleIdentifier;
@property(readonly) NSString *searchableItemUniqueIdentifier;
@property(readonly) NSString *previewItemDisplayName;
@property(readonly) NSString *previewItemLocalizedDescription;
@property(readonly) NSString *previewItemContentType;
@property(readonly) NSURL *launchURL;
- (struct CGImage *)createImageForMaximumSize:(struct CGSize)arg1 options:(struct __CFDictionary *)arg2;
- (void)calculatePreviewURL:(id *)arg1 previewData:(id *)arg2 previewProperties:(id *)arg3 previewType:(id *)arg4;
@end

