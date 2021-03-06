//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICNFMCActivityTarget.h"

@class NSArray, NSMutableSet, NSString;

@interface _ICNFMCActivityMonitorMultiTarget : NSObject <ICNFMCActivityTarget>
{
    NSMutableSet *_allTargets;
    id <ICNFMCActivityTarget> _primaryTarget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ICNFMCActivityTarget> primaryTarget; // @synthesize primaryTarget=_primaryTarget;
- (id)displayName;
@property(readonly, copy, nonatomic) NSArray *allTargets;
- (BOOL)removeActivityTarget:(id)arg1;
- (BOOL)addActivityTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

