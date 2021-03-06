//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Geode/NSObject-Protocol.h>

@protocol IPAGeometryConverter <NSObject>
- (unsigned long long)computeRectPosition:(struct CGRect)arg1 onImageRect:(struct CGRect)arg2 intersectionSizeInPercent:(double *)arg3;
- (void)translateOutputPoint:(struct CGPoint)arg1 andOutputRadius:(double)arg2 toInputPoint:(struct CGPoint *)arg3 andInputRadius:(double *)arg4;
- (void)translateInputPoint:(struct CGPoint)arg1 andInputRadius:(double)arg2 toOutputPoint:(struct CGPoint *)arg3 andOutputRadius:(double *)arg4;
- (struct CGPoint)unitInputPointFromUnitOutputPoint:(struct CGPoint)arg1;
- (struct CGPoint)unitOutputPointFromUnitInputPoint:(struct CGPoint)arg1;
- (struct CGPoint)inputPointFromOutputPoint:(struct CGPoint)arg1;
- (struct CGPoint)outputPointFromInputPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)outputToInputTransform;
- (struct CGAffineTransform)inputToDisplayTransform;
- (struct CGAffineTransform)inputToOutputTransform;
- (struct ipa_pointConversionResult)convertFromOutputPoint:(struct CGPoint)arg1;
- (struct ipa_rectConversionResult)convertFromOutputRect:(struct CGRect)arg1;
- (struct ipa_rectConversionResult)convertFromInputRect:(struct CGRect)arg1;
- (BOOL)isValidOutputPoint:(struct CGPoint)arg1;
- (BOOL)isValidOutputRect:(struct CGRect)arg1;
- (BOOL)isValidInputRect:(struct CGRect)arg1;
- (BOOL)isValidInputPoint:(struct CGPoint)arg1;
- (struct PFIntSize_st)outputSize;
- (struct PFIntSize_st)inputSize;
@end

