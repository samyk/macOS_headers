//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHRectangleSketchRecognitionResult : CHSketchRecognitionResult
{
    struct CGPoint _upperLeftPoint;
    struct CGPoint _upperRightPoint;
    struct CGPoint _lowerLeftPoint;
    struct CGPoint _lowerRightPoint;
}

@property(readonly) struct CGPoint lowerRightPoint; // @synthesize lowerRightPoint=_lowerRightPoint;
@property(readonly) struct CGPoint lowerLeftPoint; // @synthesize lowerLeftPoint=_lowerLeftPoint;
@property(readonly) struct CGPoint upperRightPoint; // @synthesize upperRightPoint=_upperRightPoint;
@property(readonly) struct CGPoint upperLeftPoint; // @synthesize upperLeftPoint=_upperLeftPoint;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 upperLeftPoint:(struct CGPoint)arg4 upperRightPoint:(struct CGPoint)arg5 lowerLeftPoint:(struct CGPoint)arg6 lowerRightPoint:(struct CGPoint)arg7;

@end

