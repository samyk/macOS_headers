//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingColorAuditTableViewCell : UITableViewCell
{
    UIView *colorView;
    NSLayoutConstraint *heightConstraint;
    BOOL _expanded;
    NSString *_symbol;
    UIColor *_color;
}

@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

