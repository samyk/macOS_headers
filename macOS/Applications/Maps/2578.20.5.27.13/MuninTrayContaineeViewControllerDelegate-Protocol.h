//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MuninTrayContaineeViewController, UIButton;

@protocol MuninTrayContaineeViewControllerDelegate <NSObject>
- (void)muninTrayContaineeViewController:(MuninTrayContaineeViewController *)arg1 didTapReportAnIssueButton:(UIButton *)arg2;
- (void)muninTrayContaineeViewController:(MuninTrayContaineeViewController *)arg1 didTapShareButton:(UIButton *)arg2;
- (void)muninTrayContaineeViewController:(MuninTrayContaineeViewController *)arg1 didTapToggleLabelsButton:(UIButton *)arg2;
@end

