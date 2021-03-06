//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BPHomebrewInterfaceDelegate-Protocol.h"

@class NSArray, NSString;
@protocol BPHomebrewManagerDelegate;

@interface BPHomebrewManager : NSObject <BPHomebrewInterfaceDelegate>
{
    NSArray *_formulae_installed;
    NSArray *_formulae_outdated;
    NSArray *_formulae_all;
    NSArray *_formulae_leaves;
    NSArray *_formulae_search;
    NSArray *_formulae_repositories;
    id <BPHomebrewManagerDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property __weak id <BPHomebrewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *formulae_repositories; // @synthesize formulae_repositories=_formulae_repositories;
@property(retain) NSArray *formulae_search; // @synthesize formulae_search=_formulae_search;
@property(retain) NSArray *formulae_leaves; // @synthesize formulae_leaves=_formulae_leaves;
@property(retain) NSArray *formulae_all; // @synthesize formulae_all=_formulae_all;
@property(retain) NSArray *formulae_outdated; // @synthesize formulae_outdated=_formulae_outdated;
@property(retain) NSArray *formulae_installed; // @synthesize formulae_installed=_formulae_installed;
- (void).cxx_destruct;
- (void)homebrewInterfaceShouldDisplayNoBrewMessage:(BOOL)arg1;
- (void)homebrewInterfaceDidUpdateFormulae;
- (void)cleanUp;
- (long long)statusForFormula:(id)arg1;
- (long long)searchForFormula:(id)arg1 inArray:(id)arg2;
- (void)storeAllFormulaeCaches;
- (BOOL)loadAllFormulaeCaches;
- (void)updateSearchWithName:(id)arg1;
- (void)reloadFromInterfaceRebuildingCache:(BOOL)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initUniqueInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

