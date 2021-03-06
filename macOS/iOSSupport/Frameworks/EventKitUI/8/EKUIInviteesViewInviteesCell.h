//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EKUILabeledAvatarView, NSArray, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell
{
    BOOL _hideStatus;
    BOOL _showSpinner;
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UILabel *_optionalInviteeLabel;
    UIImageView *_statusImageView;
    EKUILabeledAvatarView *_contactAvatarView;
    UIView *_textContainerView;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
    UIActivityIndicatorView *_spinner;
}

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;
@property(nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSArray *removableConstraints; // @synthesize removableConstraints=_removableConstraints;
@property(retain, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) EKUILabeledAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UILabel *optionalInviteeLabel; // @synthesize optionalInviteeLabel=_optionalInviteeLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property BOOL hideStatus; // @synthesize hideStatus=_hideStatus;
- (void).cxx_destruct;
- (id)_statusImageViewSymbolConfiguration;
- (void)updateCommonElements:(id)arg1 statusImage:(id)arg2;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4;
- (void)updateWithParticipantForSorting:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

