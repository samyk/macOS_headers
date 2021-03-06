//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GLUTMenu : NSObject
{
    NSMutableArray *_menuItems;
    NSMenu *_nativeMenu;
    CDUnknownFunctionPointerType _selectFunc;
    CDUnknownFunctionPointerType _fselectFunc;
    int _menuid;
    GLUTMenu *_parentMenu;
}

- (void)setParentMenu:(id)arg1;
- (void *)getFortranCallback;
- (void)setFortranCallback:(void *)arg1;
- (void)removeMenuItemAtIndex:(int)arg1;
- (void)setMenuItemAtIndex:(int)arg1 toTitle:(id)arg2 menu:(id)arg3;
- (void)setMenuItemAtIndex:(int)arg1 toTitle:(id)arg2 tag:(int)arg3;
- (void)addSubMenuWithTitle:(id)arg1 menu:(id)arg2;
- (void)addMenuItemWithTitle:(id)arg1 tag:(int)arg2;
- (void)menuItemAction:(id)arg1;
- (void)_removeSubmenu:(id)arg1;
- (void)_invalidateMenuCache;
- (id)nativeMenu;
- (id)_buildMenu;
- (int)numberOfItems;
- (int)menuID;
- (void)finalize;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownFunctionPointerType)arg1 menuID:(int)arg2;

@end

