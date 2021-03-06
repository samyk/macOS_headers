//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView
{
    NSMutableArray *_keylines;
    unsigned long long _direction;
}

@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (struct NSEdgeInsets)templatedContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)setCardSectionSubviews:(id)arg1;
- (void)triggerLayoutAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateLayout;
- (void)setDirection:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

