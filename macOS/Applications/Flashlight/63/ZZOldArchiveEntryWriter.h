//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZZArchiveEntryWriter-Protocol.h"

@class NSData;

@interface ZZOldArchiveEntryWriter : NSObject <ZZArchiveEntryWriter>
{
    NSData *_centralFileHeader;
    unsigned int _localFileLength;
    NSData *_localFile;
}

- (void).cxx_destruct;
- (BOOL)writeCentralFileHeaderToChannelOutput:(id)arg1 error:(out id *)arg2;
- (BOOL)writeLocalFileToChannelOutput:(id)arg1 withInitialSkip:(unsigned int)arg2 error:(out id *)arg3;
- (unsigned int)offsetToLocalFileEnd;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2 shouldSkipLocalFile:(BOOL)arg3;

@end

