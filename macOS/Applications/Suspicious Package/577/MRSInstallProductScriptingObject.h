//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSScriptingObject.h"

@class MRSInstallProductLoader, MRSTree, NSArray;

@interface MRSInstallProductScriptingObject : MRSScriptingObject
{
    MRSTree *_bomTree;
    NSArray *_scriptingObjectsForPackageScripts;
    NSArray *_scriptingObjectsForComponentPackages;
    NSArray *_scriptingObjectsForUTIs;
    NSArray *_scriptingObjectsForValidationErrors;
}

- (void).cxx_destruct;
- (id)scriptingValueForPerformanceData;
- (id)scriptingValueForIsNotarized;
- (id)scriptingValueForSignatureStatus;
- (void)setScriptingValueForRegisteredUTIs:(id)arg1;
- (void)insertInScriptingValueForRegisteredUTIs:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)valueInScriptingValueForRegisteredUTIsWithName:(id)arg1;
- (id)scriptingValueForRegisteredUTIs;
- (id)scriptingValueForValidationErrors;
- (id)scriptingValueForComponentPackages;
- (id)scriptingValueForInstallerScripts;
- (id)valueInScriptingValueForInstalledItemsWithName:(id)arg1;
- (id)scriptingValueForInstalledItems;
- (id)objectSpecifier;
- (id)bomTreeIfDoneLoading;
@property(readonly) MRSInstallProductLoader *productLoader;
- (id)initWithProduct:(id)arg1 forDocument:(id)arg2;

@end

