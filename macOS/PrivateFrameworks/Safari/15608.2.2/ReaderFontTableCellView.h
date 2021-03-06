//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSImageView, NSProgressIndicator;

__attribute__((visibility("hidden")))
@interface ReaderFontTableCellView : NSTableCellView
{
    long long _fontAvailabilityState;
    NSButton *_downloadButton;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_checkboxImage;
    id <ReaderFontTableCellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ReaderFontTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long fontAvailabilityState; // @synthesize fontAvailabilityState=_fontAvailabilityState;
@property(nonatomic) __weak NSImageView *checkboxImage; // @synthesize checkboxImage=_checkboxImage;
- (void).cxx_destruct;
- (void)_startDownloadIfAppropriate;
- (void)_installProgressIndicator;
- (void)_installDownloadButton;
- (void)setProgressIndicatorProgress:(double)arg1;

@end

