//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupEntry, NSArray;

@interface ABGroupEntriesResult : NSObject
{
    ABGroupEntry *_allDirectoriesGroupEntry;
    ABGroupEntry *_defaultDirectoryGroupEntry;
    NSArray *_groupEntries;
}

@property(retain) NSArray *groupEntries; // @synthesize groupEntries=_groupEntries;
@property(retain) ABGroupEntry *defaultDirectoryGroupEntry; // @synthesize defaultDirectoryGroupEntry=_defaultDirectoryGroupEntry;
@property(retain) ABGroupEntry *allDirectoriesGroupEntry; // @synthesize allDirectoriesGroupEntry=_allDirectoriesGroupEntry;
- (void)dealloc;

@end

