//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKPlaceActionManagerProtocol-Protocol.h>

@class MKPlaceCardActionItem, NSString, TUCallProvider;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol>
{
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
    BOOL _placeInBookmarks;
    BOOL _showContactActions;
    BOOL _isCurrentLocation;
    id _placeCardDelegate;
    id _transitCardDelegate;
}

@property(nonatomic) __weak id transitCardDelegate; // @synthesize transitCardDelegate=_transitCardDelegate;
@property(nonatomic) __weak id placeCardDelegate; // @synthesize placeCardDelegate=_placeCardDelegate;
@property(nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(nonatomic) BOOL showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) BOOL placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
- (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_canMakeCalls:(CDUnknownBlockType)arg1;
- (void)_launchMaps;
- (id)createFooterActions;
- (void)_enableStoreAction;
- (id)createRowActions;
- (id)favoriteItemForFooter:(BOOL)arg1;
- (BOOL)_showReportAProblem;
- (unsigned long long)options;
- (id)placeItem;
- (id)mapItem;
- (id)contact;
- (id)transitLineItem;
- (id)transitDelegate;
- (id)delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

