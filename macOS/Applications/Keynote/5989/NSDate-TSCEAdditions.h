//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSCEAdditions)
+ (id)tsce_dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (id)tsce_dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
- (double)tsce_mapToDouble;
- (long long)tsce_weekNumberForType:(int)arg1;
- (long long)tsce_weekday;
- (long long)tsce_second;
- (long long)tsce_minute;
- (long long)tsce_hour;
- (long long)tsce_day;
- (long long)tsce_month;
- (long long)tsce_year;
@end

