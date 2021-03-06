//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperationLocator.h>

__attribute__((visibility("hidden")))
@interface FPURLOperationLocator : FPActionOperationLocator
{
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)requiresCrossDeviceCopy;
- (void)attachSandboxExtensionOnXPCEncoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isFolder;
- (BOOL)isDownloaded;
- (unsigned long long)size;
- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (BOOL)isExternalURL;
- (id)description;
- (id)initWithObject:(id)arg1;

@end

