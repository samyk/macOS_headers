//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTAccessibilityFramework.h"

@class NSString;

@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework>
{
    BOOL _allowsRemoteAccess;
}

@property BOOL allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
- (id)parameterizedAttribute:(id)arg1 forElement:(struct __AXUIElement *)arg2 parameter:(id)arg3 error:(id *)arg4;
- (id)attributes:(id)arg1 forElement:(struct __AXUIElement *)arg2 error:(id *)arg3;
- (id)hierarchyForElement:(struct __AXUIElement *)arg1 attributes:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

