//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EOSSerialLog : NSObject
{
    int _serialFileDescriptor;
    NSString *_serialFilePath;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_q;
}

@property(retain) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property int serialFileDescriptor; // @synthesize serialFileDescriptor=_serialFileDescriptor;
@property(retain) NSString *serialFilePath; // @synthesize serialFilePath=_serialFilePath;
- (void).cxx_destruct;
- (id)_defaultSerialFilePath;
- (void)_closeSerialDevice;
- (BOOL)_openSerialDevice;
- (void)stopLogging;
- (BOOL)startLogging;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

