//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHBLegend : NSObject
{
}

+ (struct XlChartCustomLegend *)xlCustomLegendFrom:(id)arg1 state:(id)arg2;
+ (void)writeFrom:(id)arg1 isForPrimaryAxis:(_Bool)arg2 state:(id)arg3;
+ (id)readCHDLegendEntryFrom:(const struct XlChartCustomLegend *)arg1 state:(id)arg2;
+ (id)readFrom:(struct XlChartLegendFrame *)arg1 state:(id)arg2;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1;
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1;

@end

