//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTextField, NVRouteHeaderIconView;

__attribute__((visibility("hidden")))
@interface NVRouteHeaderView : NSTableCellView
{
    NSTextField *_title;
    NSTextField *_subTitle;
    NVRouteHeaderIconView *_iconView;
}

@property(nonatomic) __weak NVRouteHeaderIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak NSTextField *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) __weak NSTextField *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

