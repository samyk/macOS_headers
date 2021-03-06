//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class ICTableAccessibilityController, NSArray, NSUUID;

@interface ICMTableCellGroupAccessibilityElement : NSAccessibilityElement
{
    NSUUID *_rowOrColumnIdentifier;
    ICTableAccessibilityController *_tableAXController;
    long long _index;
    NSArray *_cellElements;
}

@property(readonly, nonatomic) NSArray *cellElements; // @synthesize cellElements=_cellElements;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak ICTableAccessibilityController *tableAXController; // @synthesize tableAXController=_tableAXController;
@property(copy, nonatomic) NSUUID *rowOrColumnIdentifier; // @synthesize rowOrColumnIdentifier=_rowOrColumnIdentifier;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (id)initWithID:(id)arg1 tableAXController:(id)arg2;

@end

