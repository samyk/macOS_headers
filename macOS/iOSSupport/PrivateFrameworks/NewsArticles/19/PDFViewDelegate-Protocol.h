//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSURL, PDFActionRemoteGoTo, PDFView, UIViewController;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (UIViewController *)PDFViewParentViewController;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
@end

