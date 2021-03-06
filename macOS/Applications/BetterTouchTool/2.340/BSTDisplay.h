//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BSTDisplay : NSObject
{
    NSNumber *displayID;
    long long vendorID;
    long long modelNumber;
    long long unitNumber;
    struct CGSize screenSize;
    struct CGSize resolution;
    struct CGRect screenFrame;
    BOOL isMain;
    BOOL isBuiltIn;
    long long serialNumber;
    NSString *_importID;
}

@property(retain, nonatomic) NSString *importID; // @synthesize importID=_importID;
@property(nonatomic) long long serialNumber; // @synthesize serialNumber;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame;
@property(nonatomic) BOOL isBuiltIn; // @synthesize isBuiltIn;
@property(nonatomic) BOOL isMain; // @synthesize isMain;
@property(nonatomic) struct CGSize resolution; // @synthesize resolution;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize;
@property(nonatomic) long long unitNumber; // @synthesize unitNumber;
@property(nonatomic) long long modelNumber; // @synthesize modelNumber;
@property(nonatomic) long long vendorID; // @synthesize vendorID;
@property(retain, nonatomic) NSNumber *displayID; // @synthesize displayID;
- (void).cxx_destruct;

@end

