//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GlobalSearchInstance, NSString;

@interface GlobalSearchResult : NSObject
{
    GlobalSearchInstance *instance_;
    NSString *context_;
    NSString *findString_;
    int x_;
    int endX_;
    long long absY_;
    long long absEndY_;
}

- (int)endY;
- (int)y;
- (long long)absEndY;
- (long long)absY;
- (int)endX;
- (int)x;
- (id)instance;
- (id)findString;
- (id)context;
- (void)dealloc;
- (id)initWithInstance:(id)arg1 context:(id)arg2 x:(int)arg3 absY:(long long)arg4 endX:(int)arg5 y:(long long)arg6 findString:(id)arg7;

@end

