//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBStateCaptureItem : NSObject
{
    id <BSInvalidatable> _invalidatable;
    CDUnknownBlockType _block;
    NSString *_title;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

