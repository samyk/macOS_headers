//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFGalleryCollection.h>

@class NSArray, NSString;

@interface WFMutableGalleryCollection : WFGalleryCollection
{
    NSString *identifier;
    NSString *name;
    NSString *collectionDescription;
    NSArray *workflows;
    NSString *language;
    WFGalleryCollection *base;
}

@property(retain, nonatomic) WFGalleryCollection *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(copy, nonatomic) NSArray *workflows; // @synthesize workflows;
@property(copy, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;

@end

