//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IPXPrintCaptionStyleView, IPXPrintContactSheetView, IPXPrintViewController, NSButton, NSPopUpButton, RDVersion;

@interface IPXPrintContactSheetCaptionsView : NSView
{
    IPXPrintContactSheetView *_contactSheetView;
    NSView *_backgroundColorView;
    NSButton *_titleCheckbox;
    NSButton *_descriptionCheckbox;
    NSButton *_dateCheckbox;
    NSButton *_ratingCheckbox;
    NSButton *_keywordCheckbox;
    NSButton *_filenameCheckbox;
    NSButton *_cameraCheckbox;
    NSButton *_shutterSpeedCheckbox;
    NSButton *_apertureCheckbox;
    NSButton *_focalLengthCheckbox;
    NSButton *_isoCheckbox;
    NSButton *_flashCheckbox;
    NSPopUpButton *_themePopup;
    IPXPrintCaptionStyleView *_captionStyleView;
    IPXPrintViewController *_printController;
    RDVersion *_exampleVersion;
}

- (void).cxx_destruct;
- (void)styleChanged:(id)arg1;
- (void)checkboxChanged:(id)arg1;
@property struct IPXPrintCaptionSelection captionSelection;
@property unsigned long long captionStyle;
@property(retain) RDVersion *exampleVersion;
@property(retain) IPXPrintViewController *printController;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

