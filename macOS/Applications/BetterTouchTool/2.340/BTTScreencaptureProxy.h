//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTTImageEditor;

__attribute__((visibility("hidden")))
@interface BTTScreencaptureProxy : NSObject
{
    BTTImageEditor *_imageEditor;
}

@property(retain) BTTImageEditor *imageEditor; // @synthesize imageEditor=_imageEditor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)startScreencaptureWithCommand:(id)arg1 format:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;
- (void)uploadCommandLineToPath:(id)arg1 finishedCallback:(CDUnknownBlockType)arg2;
- (void)uploadToImgurFromPath:(id)arg1 finishedCallback:(CDUnknownBlockType)arg2;
- (id)filenameFromUserInput:(id)arg1 format:(id)arg2;
- (void)runCommand;
- (id)randomStringWithLength:(int)arg1;

@end

