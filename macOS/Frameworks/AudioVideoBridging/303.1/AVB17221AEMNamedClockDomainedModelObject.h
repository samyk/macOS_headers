//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

@interface AVB17221AEMNamedClockDomainedModelObject : AVB17221AEMNamedModelObject
{
    unsigned short clockDomainIndex;
}

@property unsigned short clockDomainIndex; // @synthesize clockDomainIndex;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_02f57b7b *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_02f57b7b *)arg1 descriptorLength:(unsigned short)arg2;

@end

