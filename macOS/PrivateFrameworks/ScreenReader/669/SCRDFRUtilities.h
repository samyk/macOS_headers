//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRDFRUtilities : NSObject
{
}

+ (BOOL)dfrElementBounds:(struct CGRect)arg1 fullyContainedInDFRElementBounds:(struct CGRect)arg2;
+ (BOOL)isBoundsInvalid:(struct CGRect)arg1;
+ (BOOL)point:(struct CGPoint)arg1 inDFRElementBounds:(struct CGRect)arg2;
+ (struct CGRect)boundsForElementFromArbitraryThread:(id)arg1;

@end

