//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSManagedObjectContext, NSManagedObjectID;

@interface ICIndexHandwritingOperation : NSOperation
{
    NSManagedObjectID *_attachmentObjectID;
    NSManagedObjectContext *_context;
}

+ (id)sharedOperationQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSManagedObjectID *attachmentObjectID; // @synthesize attachmentObjectID=_attachmentObjectID;
- (void)main;
- (id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2;

@end

