//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFRenderingProperties;
@protocol PDFPageBackgroundManagerDelegate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManagerPrivate : NSObject
{
    id <PDFPageBackgroundManagerDelegate> documentDelegate;
    PDFRenderingProperties *renderingProperties;
    unsigned long long activePageIndex;
    NSMutableDictionary *backgroundImageCache[3];
    _Bool isCancled;
    _Bool isWorking;
    _Bool willForceUpdate;
}

- (void).cxx_destruct;

@end

