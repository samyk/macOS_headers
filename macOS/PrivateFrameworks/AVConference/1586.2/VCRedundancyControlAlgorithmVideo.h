//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentage;
    double _packetLossPercentageVideo;
    double _plrEnvelope;
    _Bool _isNetworkCongested;
    unsigned int _burstyLoss[8];
    unsigned int _burstyLossArraySize;
    unsigned int _burstyLossArrayIndex;
    unsigned int _redundancyMode;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (unsigned int)computeRedundancyWithLossPercentage;
- (void)updateBurstyLoss:(unsigned int)arg1;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_b3eb8f4a)arg1;
- (id)initWithRedundancyControllerMode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

