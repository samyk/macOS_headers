//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSProgressIndicator;

@interface ACUIAccountDataclassCellView : NSTableCellView
{
    BOOL _checkboxChecked;
    NSButton *_checkbox;
    NSProgressIndicator *_spinner;
}

- (void).cxx_destruct;
@property BOOL checkboxChecked; // @synthesize checkboxChecked=_checkboxChecked;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSButton *checkbox; // @synthesize checkbox=_checkbox;
- (void)setObjectValue:(id)arg1;
- (void)checkboxAction:(id)arg1;
- (void)didClickOptionsButton:(id)arg1;

@end

