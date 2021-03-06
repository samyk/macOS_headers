//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPFetcher.h>

#import "NSURLSessionDataDelegate.h"

@class AVURLAsset, NSMutableData, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _completionHandler;
    AVURLAsset *_asset;
    BOOL _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)audioProperties;
- (id)videoProperties;
- (void)_completedWithAudio:(id)arg1;
- (void)_completedWithVideo:(id)arg1;
- (void)cancel;
- (void)_resolveVideo;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

