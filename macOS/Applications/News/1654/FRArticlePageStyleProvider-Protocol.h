//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCObservable, FRNavigationStyle, NSString;
@protocol FCFeedTheming;

@protocol FRArticlePageStyleProvider <NSObject>
@property(readonly, nonatomic) id <FCFeedTheming> articlePageStyleProviderFeedTheming;
@property(readonly, nonatomic) FCObservable *scrollView;
@property(readonly, nonatomic) FCObservable *articlePageStyleProviderNavigationStyleUpdateObserver;
@property(readonly, nonatomic) FRNavigationStyle *articlePageStyleProviderNavigationStyle;
@property(readonly, copy, nonatomic) NSString *articlePageStyleProviderIdentifier;
@end

