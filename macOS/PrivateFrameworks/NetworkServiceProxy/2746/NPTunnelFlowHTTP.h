//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSMutableData, NSNumber, NSURL;

@interface NPTunnelFlowHTTP : NPTunnelFlow
{
    BOOL _receivedHeaders;
    BOOL _responseSuccess;
    NSMutableData *_responseData;
    NSURL *_url;
    CDUnknownBlockType _postCompletionHandler;
    NSNumber *_responseContentLength;
}

@property BOOL responseSuccess; // @synthesize responseSuccess=_responseSuccess;
@property(retain) NSNumber *responseContentLength; // @synthesize responseContentLength=_responseContentLength;
@property BOOL receivedHeaders; // @synthesize receivedHeaders=_receivedHeaders;
@property(copy) CDUnknownBlockType postCompletionHandler; // @synthesize postCompletionHandler=_postCompletionHandler;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (BOOL)isClientFlowClosed;
- (void)closeClientFlowWithError:(int)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)postData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTunnel:(id)arg1 URL:(id)arg2 extraFlowProperties:(id)arg3;

@end

