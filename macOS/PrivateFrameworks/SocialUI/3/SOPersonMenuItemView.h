//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, NSString, NSTextField;

@interface SOPersonMenuItemView : NSView
{
    NSImageView *_checkmarkImageView;
    NSTextField *_titleTextField;
    NSTextField *_labelTextField;
    NSImageView *_iconImageView;
}

@property(retain) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain) NSImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)init;
@property(copy) NSString *label;
@property(copy) NSString *title;

@end

