//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCPVideoActivityDescriptor : NSObject
{
    float descriptors[10];
    int _widthInMb;
    int _heightInMb;
    long long *_motionMagnitudeHistogram;
    float *_motionMagnitude;
}

@property(readonly) float *descriptors;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)arg1;
- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats *)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2;

@end

