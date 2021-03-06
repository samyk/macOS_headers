//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapRequest, NSString;

@protocol GEOMapTransitPoint <NSObject>
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect;
@property(readonly, nonatomic) double boundingRadius;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (GEOMapRequest *)findAccessPoints:(void (^)(id <GEOMapTransitAccessPoint>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;
- (GEOMapRequest *)findGeometryWithCompletionHandler:(void (^)(GEOMapRequest *))arg1;
@end

