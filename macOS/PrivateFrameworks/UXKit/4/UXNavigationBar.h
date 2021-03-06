//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXBar.h>

@class NSArray, NSImage, NSMutableArray, NSView, UXNavigationItem, _UXNavigationItemContainerView;

@interface UXNavigationBar : UXBar
{
    BOOL _needsRecalculateWindowKeyViewLoop;
    BOOL _recalculatingKeyViewLoop;
    BOOL _translucent;
    BOOL _recalculatingWindowKeyViewLoop;
    BOOL _alternateTitleEnabled;
    BOOL _detached;
    id <UXNavigationBarDelegate> _delegate;
    NSView *_titleCenteringTrackedView;
    NSArray *_items;
    NSImage *_backIndicatorImage;
    NSView *_globalTrailingView;
    double _globalTrailingViewWidthMultiplier;
    NSMutableArray *_internalItems;
    _UXNavigationItemContainerView *_topItemContainer;
    long long _currentOperation;
    UXNavigationItem *_transitioningItem;
    NSView *_alternateTitleView;
    NSView *_alternateCondensedTitleView;
    double _leftInteritemSpacing;
    double _rightInteritemSpacing;
    double _centerYOffset;
    struct NSEdgeInsets _edgeInsets;
}

+ (id)_itemKeyPathsToObserve;
@property(nonatomic) double centerYOffset; // @synthesize centerYOffset=_centerYOffset;
@property(nonatomic) double rightInteritemSpacing; // @synthesize rightInteritemSpacing=_rightInteritemSpacing;
@property(nonatomic) double leftInteritemSpacing; // @synthesize leftInteritemSpacing=_leftInteritemSpacing;
@property(nonatomic, getter=isDetached) BOOL detached; // @synthesize detached=_detached;
@property(nonatomic) BOOL alternateTitleEnabled; // @synthesize alternateTitleEnabled=_alternateTitleEnabled;
@property(retain, nonatomic) NSView *alternateCondensedTitleView; // @synthesize alternateCondensedTitleView=_alternateCondensedTitleView;
@property(retain, nonatomic) NSView *alternateTitleView; // @synthesize alternateTitleView=_alternateTitleView;
@property(nonatomic) BOOL recalculatingWindowKeyViewLoop; // @synthesize recalculatingWindowKeyViewLoop=_recalculatingWindowKeyViewLoop;
@property(retain, nonatomic) UXNavigationItem *transitioningItem; // @synthesize transitioningItem=_transitioningItem;
@property(nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) _UXNavigationItemContainerView *topItemContainer; // @synthesize topItemContainer=_topItemContainer;
@property(retain, nonatomic) NSMutableArray *internalItems; // @synthesize internalItems=_internalItems;
@property(nonatomic) double globalTrailingViewWidthMultiplier; // @synthesize globalTrailingViewWidthMultiplier=_globalTrailingViewWidthMultiplier;
@property(retain, nonatomic) NSView *globalTrailingView; // @synthesize globalTrailingView=_globalTrailingView;
@property(retain, nonatomic) NSImage *backIndicatorImage; // @synthesize backIndicatorImage=_backIndicatorImage;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak NSView *titleCenteringTrackedView; // @synthesize titleCenteringTrackedView=_titleCenteringTrackedView;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic) __weak id <UXNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNeedsRecalcuateWindowKeyViewLoop;
- (void)recalculateKeyViewLoop;
- (void)_completeInteractiveTransition:(BOOL)arg1 duration:(double)arg2;
- (void)beginInteractivePop;
- (void)beginInteractivePushToItem:(id)arg1;
- (void)_updateItemContainer;
- (void)_snapshot;
- (id)_popNavigationItemAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)_pushNavigationItem:(id)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)_prepareForNavigationItemTransition;
- (void)_updateTitleView;
- (id)_popNavigationItem;
- (void)_removeItem:(id)arg1;
- (void)_pushItem:(id)arg1;
- (void)_removeObserversForItem:(id)arg1;
- (void)_addObserversForItem:(id)arg1;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UXNavigationItem *backItem;
@property(readonly, nonatomic) UXNavigationItem *topItem;
- (void)mouseDown:(id)arg1;
- (void)updateConstraints;
- (void)layout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)barPosition;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

