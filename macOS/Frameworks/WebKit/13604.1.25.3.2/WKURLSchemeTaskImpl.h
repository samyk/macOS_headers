//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>
#import <WebKit/WKURLSchemeTask-Protocol.h>

@class NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTask>
{
    struct ObjectStorage<API::URLSchemeTask> _urlSchemeTask;
}

@property(readonly) struct Object *_apiObject;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
@property(readonly, copy, nonatomic) NSURLRequest *request;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

