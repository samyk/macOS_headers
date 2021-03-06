//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSTouchBarColorPickerViewController;

@protocol NSTouchBarColorPickerViewControllerDelegate <NSObject>
- (void)colorPickerViewController:(NSTouchBarColorPickerViewController *)arg1 didSelectColor:(NSColor *)arg2;

@optional
- (void)colorPicker:(NSTouchBarColorPickerViewController *)arg1 didChangeCurrentModeFrom:(long long)arg2 to:(long long)arg3;
- (void)colorPickerViewControllerDidCancel:(NSTouchBarColorPickerViewController *)arg1;
- (void)colorPickerViewControllerDidEnd:(NSTouchBarColorPickerViewController *)arg1;
- (void)colorPickerViewControllerWillBegin:(NSTouchBarColorPickerViewController *)arg1;
@end

