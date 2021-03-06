//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StatCollectorItem.h"

@class NSArray, NSString;

@interface DiskActivityStatCollectorItem : StatCollectorItem
{
    NSString *_serial;
    NSString *_name;
    NSString *_bsd;
    NSString *_hardwareType;
    NSArray *_mounts;
    double _read;
    double _write;
    double _readTotal;
    double _writeTotal;
    double _readIOPS;
    double _writeIOPS;
}

+ (long long)sampleCount;
@property(nonatomic) double writeIOPS; // @synthesize writeIOPS=_writeIOPS;
@property(nonatomic) double readIOPS; // @synthesize readIOPS=_readIOPS;
@property(nonatomic) double writeTotal; // @synthesize writeTotal=_writeTotal;
@property(nonatomic) double readTotal; // @synthesize readTotal=_readTotal;
@property(nonatomic) double write; // @synthesize write=_write;
@property(nonatomic) double read; // @synthesize read=_read;
@property(copy, nonatomic) NSArray *mounts; // @synthesize mounts=_mounts;
@property(copy, nonatomic) NSString *hardwareType; // @synthesize hardwareType=_hardwareType;
@property(copy, nonatomic) NSString *bsd; // @synthesize bsd=_bsd;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *serial; // @synthesize serial=_serial;
- (void).cxx_destruct;
- (id)description;

@end

