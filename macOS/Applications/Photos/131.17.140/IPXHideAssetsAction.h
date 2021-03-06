//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXAssetsAction.h"

__attribute__((visibility("hidden")))
@interface IPXHideAssetsAction : IPXAssetsAction
{
    unsigned long long _desiredState;
}

+ (unsigned long long)desiredStateForAssets:(id)arg1;
@property(readonly, nonatomic) unsigned long long desiredState; // @synthesize desiredState=_desiredState;
- (BOOL)needsConfirmation;
- (id)defaultActionNameLocalizationKey;
- (void)_performChangeToHideAssets:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performUndo:(CDUnknownBlockType)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)presentAlertForWindow:(id)arg1 undoManager:(id)arg2;
- (id)initWithAssets:(id)arg1 desiredState:(unsigned long long)arg2;

@end

