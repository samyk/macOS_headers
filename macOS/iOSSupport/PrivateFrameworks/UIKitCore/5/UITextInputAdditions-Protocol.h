//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UITextInteractionAssistant, UIView;
@protocol UISelectionInteractionAssistant;

@protocol UITextInputAdditions
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (UITextInteractionAssistant *)interactionAssistant;
- (UIView *)textInputView;

@optional
- (BOOL)_allowAnimatedUpdateSelectionRectViews;
- (BOOL)_useGesturesForEditableContent;
- (id <UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (UIView *)_textInputViewForAddingGestureRecognizers;
@end

