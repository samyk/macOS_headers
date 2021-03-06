//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class PCRoundShadowView;

__attribute__((visibility("hidden")))
@interface PCShadowScrollView : NSScrollView
{
    PCRoundShadowView *contentShadowView;
    int contentShadowEdge;
    BOOL enabled;
    BOOL alwaysShowsShadow;
}

+ (double)defaultShadowSize;
@property(nonatomic) BOOL alwaysShowsShadow; // @synthesize alwaysShowsShadow;
@property(nonatomic) int contentShadowEdge; // @synthesize contentShadowEdge;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled;
- (void)contentViewFrameDidChangeNotification:(id)arg1;
- (void)removeContentShadowView;
- (void)roundShadowViewDidFadeOut:(id)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)resetContentShadowFrame;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)configureContentShadowFadeIn:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

