//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXComponentTypeDescribing-Protocol.h>

@class SXComponentSizer, SXLayoutAttributes;
@protocol SXComponent, SXComponentLayout;

@protocol SXComponentSizerFactory <SXComponentTypeDescribing>
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutAttributes:(SXLayoutAttributes *)arg3;
@end

