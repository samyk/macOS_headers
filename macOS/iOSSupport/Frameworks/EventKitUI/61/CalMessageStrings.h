//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarEventInvitationNotificationAttendee, NSArray;

@interface CalMessageStrings : NSObject
{
    BOOL _timeProposals;
    NSArray *_titleStrings;
    NSArray *_bodyStrings;
    long long _comments;
    EKCalendarEventInvitationNotificationAttendee *_importantAttendee;
}

@property(readonly, nonatomic) EKCalendarEventInvitationNotificationAttendee *importantAttendee; // @synthesize importantAttendee=_importantAttendee;
@property(readonly, nonatomic) BOOL timeProposals; // @synthesize timeProposals=_timeProposals;
@property(readonly, nonatomic) long long comments; // @synthesize comments=_comments;
@property(readonly, nonatomic) NSArray *bodyStrings; // @synthesize bodyStrings=_bodyStrings;
@property(readonly, nonatomic) NSArray *titleStrings; // @synthesize titleStrings=_titleStrings;
- (void).cxx_destruct;
- (id)initWithTitles:(id)arg1 bodyStrings:(id)arg2 comments:(long long)arg3 timeProposals:(BOOL)arg4 importantAttendee:(id)arg5;

@end

