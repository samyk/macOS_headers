//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface AddonTableCellView : NSTableCellView
{
    NSTextField *_titleLabel;
    NSTextField *_authorLabel;
    NSTextField *_versionLabel;
    NSTextField *_defaultLabel;
    NSImageView *_iconView;
    NSButton *_checkbox;
}

@property(nonatomic) __weak NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak NSTextField *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(nonatomic) __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(nonatomic) __weak NSTextField *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)stateChanged:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setObjectValue:(id)arg1;

@end

