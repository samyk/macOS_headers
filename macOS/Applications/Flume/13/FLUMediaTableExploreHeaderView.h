//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUMediaTableHeaderView.h"

@class FLUBlurView, FLUBorderView, FLUTabbedButton;

@interface FLUMediaTableExploreHeaderView : FLUMediaTableHeaderView
{
    id <FLUMediaTableExploreHeaderViewDelegate> _delegate;
    FLUBlurView *_blurView;
    FLUTabbedButton *_postsButton;
    FLUTabbedButton *_peopleButton;
    FLUBorderView *_borderView;
}

+ (double)viewHeight;
@property(retain, nonatomic) FLUBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) FLUTabbedButton *peopleButton; // @synthesize peopleButton=_peopleButton;
@property(retain, nonatomic) FLUTabbedButton *postsButton; // @synthesize postsButton=_postsButton;
@property(retain, nonatomic) FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <FLUMediaTableExploreHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectTabAtIndex:(unsigned long long)arg1;
- (void)selectPreviousTab;
- (void)selectNextTab;
- (void)refreshView;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (void)didPressPeopleButton:(id)arg1;
- (void)didPressPostsButton:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)setupAccessibility;
- (void)setupWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

