//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDControl.h>

@class NSObject<OS_dispatch_queue>;

@interface ASDBooleanControl : ASDControl
{
    BOOL _value;
    NSObject<OS_dispatch_queue> *_valueQueue;
    BOOL _settable;
}

+ (id)jackControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)invertControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)phantomPowerControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
+ (id)muteControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
@property(readonly, nonatomic, getter=isSettable) BOOL settable; // @synthesize settable=_settable;
- (void).cxx_destruct;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
@property(nonatomic) BOOL value; // @dynamic value;
- (BOOL)changeValue:(BOOL)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (unsigned int)baseClass;
- (id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned int)arg6;
- (id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned int)arg3 inScope:(unsigned int)arg4 withPlugin:(id)arg5;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithPlugin:(id)arg1;

@end

