//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MemoriesDelegate : NSObject
{
}

+ (void)setCurrentProject:(id)arg1;
+ (long long)playbackPixelCount;
+ (BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+ (BOOL)forceTeardownDisplayOnProjectChange;
+ (float)duckingAmount;
+ (unsigned long long)exportFrameRateMode;
+ (unsigned long long)playbackFrameRateMode;
+ (BOOL)shouldPlaySlowMoWhenPreviewing;
+ (id)activeCoreProjectViewController;
+ (void)nukeCaches;
+ (id)currentProject;
+ (BOOL)ignoreReadOnly;
+ (BOOL)allowSaving;

@end

