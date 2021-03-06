//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "TSACancellable-Protocol.h"

@class NSButton, NSObject, NSString, NSTextField, NSURL, TMADocument;
@protocol OS_dispatch_queue, TSPPassphraseConsumer;

@interface TMADocumentPassphraseRemoteChangeController : NSWindowController <TSACancellable>
{
    id <TSPPassphraseConsumer> _consumer;
    TMADocument *_document;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completion;
    BOOL _cancelled;
    BOOL _incorrectPasswordCount;
    BOOL _appModalMode;
    NSTextField *_promptPasswordMessage;
    NSTextField *_passwordField;
    NSTextField *_wrongPasswordField;
    NSTextField *_hintField;
    NSTextField *_enterPasswordField;
    NSButton *_saveInKeychainButton;
    NSButton *_closeButton;
    NSButton *_okButton;
}

+ (id)retrievePassphraseWithConsumer:(id)arg1 documentRoot:(id)arg2 url:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) NSButton *saveInKeychainButton; // @synthesize saveInKeychainButton=_saveInKeychainButton;
@property(nonatomic) NSTextField *enterPasswordField; // @synthesize enterPasswordField=_enterPasswordField;
@property(nonatomic) NSTextField *hintField; // @synthesize hintField=_hintField;
@property(nonatomic) NSTextField *wrongPasswordField; // @synthesize wrongPasswordField=_wrongPasswordField;
@property(nonatomic) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) NSTextField *promptPasswordMessage; // @synthesize promptPasswordMessage=_promptPasswordMessage;
- (void).cxx_destruct;
- (void)cancelAnimated:(BOOL)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_showHintField;
- (void)_showWrongPasswordField;
- (void)_setBusy:(BOOL)arg1;
- (void)_setupDefaultViewState;
- (void)_passphraseValidatedWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)okButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)_callCompletionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_savePassphraseInKeychain;
- (id)_lookupPassphraseInKeychain;
- (void)_showPasswordInput;
- (void)_finishWithReturnCode:(long long)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithConsumer:(id)arg1 document:(id)arg2 url:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

