//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DiskRequester : NSObject
{
}

+ (id)sharedInstance;
- (void)closeFinderWindow:(id)arg1;
- (BOOL)diskAtURL:(id)arg1 matchesName:(id)arg2;
- (BOOL)diskIsPresent:(id)arg1;
- (BOOL)askForDiskNamed:(id)arg1 messageText:(id)arg2 cancelButtonText:(id)arg3 error:(id *)arg4;

@end

