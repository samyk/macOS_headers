//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPReplaceAction-Protocol.h>

@class NSString, TSWPChangeSession, TSWPSelection;

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction>
{
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}

- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 replaceBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 string:(id)arg2 changeSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

