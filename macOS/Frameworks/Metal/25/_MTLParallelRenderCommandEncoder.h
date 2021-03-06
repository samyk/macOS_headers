//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

#import "MTLParallelRenderCommandEncoder.h"

@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer<MTLCommandBuffer>;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder>
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _commandBuffersSize;
    unsigned long long _commandBuffersCount;
    id *_commandBuffers;
    BOOL _retainedReferences;
    BOOL _StatEnabled;
    unsigned long long _numThisEncoder;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _numRequestedCounters;
    unsigned long long _numCommands;
}

@property unsigned long long numThisCommand; // @synthesize numThisCommand=_numCommands;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)renderCommandEncoder;
- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label; // @dynamic label;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=getType) unsigned long long type; // @dynamic type;

@end

