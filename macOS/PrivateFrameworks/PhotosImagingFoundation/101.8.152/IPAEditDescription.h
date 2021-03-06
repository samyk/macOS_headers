//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAEditOperationOrdering-Protocol.h>
#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSString;

@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration>
{
    NSArray *_operations;
}

+ (id)sortOperations:(id)arg1 withOrdering:(id)arg2;
+ (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3;
+ (BOOL)containsValidOperations:(id)arg1;
+ (Class)expectedOperationClass;
+ (id)presetifyAdjustmentStack:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithOperationsUpToUUID:(id)arg1;
- (id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByRemovingOperation:(id)arg1;
- (id)descriptionByRemovingOperationAtIndex:(unsigned long long)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionWithOperations:(id)arg1;
- (void)withImmutableOperationAtIndex:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)forEachImmutableOperation:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)containsOperationWithIdentifier:(id)arg1;
- (id)operationWithUUID:(id)arg1;
- (id)operationAtIndex:(unsigned long long)arg1;
- (id)firstOperationWithIdentifier:(id)arg1;
- (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1;
- (unsigned long long)indexOfOperationWithUUID:(id)arg1;
- (unsigned long long)firstIndexOfOperationWithIdentifier:(id)arg1;
- (id)operations;
- (unsigned long long)operationCount;
- (BOOL)isEqualToDescriptionRenderOperations:(id)arg1;
- (BOOL)isEqualToDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)init;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)_debugDescriptionSuffix;
- (id)_operations;
- (id)_operationAtIndex:(unsigned long long)arg1;
- (id)initWithOperations:(id)arg1;
- (id)archivalRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

