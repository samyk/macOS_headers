//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "NSTabViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSImage, NSPopUpButton, NSSlider, NSString, NSTabView, TArrangeByMenuController, TFileBasedImageView, TViewOptionsSettingsController;

@interface TViewOptionsWindowController : TScriptableWindowController <NSWindowDelegate, NSTabViewDelegate>
{
    NSSlider *_iconViewIconSizeSlider;
    NSSlider *_iconViewGridSpacingSlider;
    NSTabView *_tabView;
    NSPopUpButton *_arrangeByButton;
    NSPopUpButton *_sortByButton;
    TFileBasedImageView *_iconViewBackgroundImageView;
    struct TNSRef<TViewOptionsSettingsController *, void> _viewOptionsSettingsController;
    struct TNSRef<TArrangeByMenuController *, void> _arrangeByMenuController;
    long long _selectedGroupByTag;
    long long _selectedSortByTag;
    _Bool _optionKeyDown;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _notificationObservers;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _keyValueBinders;
    struct vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>> _keyValueObservers;
    struct TNSRef<NSImage *, void> _genericAppIconImage;
}

+ (_Bool)isViewOptionsVisible;
+ (void)toggleWindowVisibility;
+ (void)show;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(nonatomic) long long selectedSortByTag; // @synthesize selectedSortByTag=_selectedSortByTag;
@property(nonatomic) long long selectedGroupByTag; // @synthesize selectedGroupByTag=_selectedGroupByTag;
@property(nonatomic) _Bool optionKeyDown; // @synthesize optionKeyDown=_optionKeyDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)backgroundImageNodeChanged;
- (void)backgroundImageViewImageNodeChanged;
@property(readonly, retain, nonatomic) NSImage *genericAppIconImage; // @dynamic genericAppIconImage;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
@property(readonly, retain, nonatomic) TViewOptionsSettingsController *viewOptionsSettingsController; // @dynamic viewOptionsSettingsController;
- (void)aboutToTearDown;
- (id)init;
- (id)windowNibName;
- (void)windowDidLoad;
- (void)iconViewGridSpacingTrackingStopped;
- (void)iconViewGridSpacingTrackingStarted;
- (void)iconViewIconSizeTrackingStopped;
- (void)iconViewIconSizeTrackingStarted;

// Remaining properties
@property(readonly, retain, nonatomic) TArrangeByMenuController *arrangeByMenuController; // @dynamic arrangeByMenuController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

