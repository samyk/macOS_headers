//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScriptingBridge/SBProxy.h>

__attribute__((visibility("hidden")))
@interface SBProxyByClass : SBProxy
{
    Class _classToCreate;
}

- (id)description;
- (unsigned int)codeInContext:(id)arg1;
- (id)initWithData:(id)arg1 andProperties:(id)arg2;
- (id)initWithClass:(Class)arg1 properties:(id)arg2 data:(id)arg3;
- (id)initWithContext:(id)arg1 specifier:(const struct AEDesc *)arg2;

@end

