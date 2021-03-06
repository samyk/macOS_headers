//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

@class TBrowserSplitViewController, TContainerLayoutManager, TPathBarController, TSearchSliceController;

@interface TBrowserViewContainerController : TViewController
{
    struct TNSRef<NSViewController, void> _bannerViewController;
    struct TNSRef<TBrowserSplitViewController, void> _browserSplitViewController;
    struct TNSRef<TSearchSliceController, void> _searchSliceController;
    struct TNSRef<TPathBarController, void> _pathBarController;
    struct TNSRef<TAirDropNotAvailableViewController, void> _airDropNotAvailableViewController;
    struct TNSRef<TContainerLayoutManager, void> _containerLayoutManager;
    struct TNSRef<NSMutableArray<NSLayoutConstraint *>, void> _layoutConstraints;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _notificationCenterObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureSearchSliceView:(_Bool)arg1 showSliceContainer:(_Bool)arg2 showSearchStringSlice:(_Bool)arg3 searchFilterUTIs:(id)arg4 toolbarSearchField:(id)arg5 browserContainerController:(id)arg6;
- (_Bool)isSearchSliceViewVisible;
- (id)searchSliceView;
@property(readonly, retain, nonatomic) TSearchSliceController *searchSliceController; // @dynamic searchSliceController;
- (void)configureForAirDrop:(_Bool)arg1 showNotAvailable:(_Bool)arg2;
- (void)setPathBarTarget:(const struct TFENode *)arg1 selectedNodes:(const struct TFENodeVector *)arg2;
- (_Bool)configurePathBar:(_Bool)arg1 browserContainerController:(id)arg2;
- (_Bool)isPathBarVisible;
- (id)pathBarView;
@property(readonly, retain, nonatomic) TPathBarController *pathBarController;
- (void)configureBannerView:(const struct TFENode *)arg1 isInColumnView:(_Bool)arg2 isBackupBrowser:(_Bool)arg3;
- (id)newBannerViewWrapperWithBanner:(id)arg1;
@property(readonly, nonatomic) _Bool bannerViewIsVisible; // @dynamic bannerViewIsVisible;
- (id)bannerView;
- (id)bannerViewController;
- (void)configureBrowserSplitViewWithBrowserViewController:(id)arg1;
- (id)browserSplitView;
- (id)browserSplitViewWrapper;
@property(readonly, retain, nonatomic) TBrowserSplitViewController *browserSplitViewController;
@property(retain, nonatomic) TContainerLayoutManager *containerLayoutManager; // @dynamic containerLayoutManager;
- (void)activateLayoutGuideRelatedConstraintsIfNeeded;
- (void)tearDownAccessoryViews;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (id)initWithContentView:(id)arg1 containerLayoutManager:(id)arg2;
- (void)initCommon;

@end

