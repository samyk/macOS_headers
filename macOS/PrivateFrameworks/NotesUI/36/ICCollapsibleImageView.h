//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICCollapsibleBaseView.h>

@class NSImage, NSImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView
{
    NSImage *_image;
    NSImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)setAccessibilityElement:(BOOL)arg1;
- (void)performSetup;

@end

