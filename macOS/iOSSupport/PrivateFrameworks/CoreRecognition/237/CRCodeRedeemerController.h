//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRecognition/CRCameraReader.h>

#import <CoreRecognition/CRCameraReaderDelegate-Protocol.h>

@class NSString;
@protocol CRCodeRedeemerControllerDelegate;

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate>
{
    id <CRCodeRedeemerControllerDelegate> _delegate;
}

+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2;
+ (unsigned long long)isCRCodeRedeemerAvailable;
@property __weak id <CRCodeRedeemerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned long long)arg3 duration:(double)arg4;
- (id)init;

// Remaining properties
@property(copy) NSString *cameraMode; // @dynamic cameraMode;
@property long long cameraPosition; // @dynamic cameraPosition;
@property unsigned long long captureCount; // @dynamic captureCount;
@property(getter=isCaptureMode) BOOL captureMode; // @dynamic captureMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property long long exposureMode; // @dynamic exposureMode;
@property long long focusMode; // @dynamic focusMode;
@property(readonly) unsigned long long hash;
@property double sessionTimeout; // @dynamic sessionTimeout;
@property BOOL showDiagnosticHUD; // @dynamic showDiagnosticHUD;
@property(readonly) Class superclass;
@property long long torchMode; // @dynamic torchMode;
@property long long whiteBalanceMode; // @dynamic whiteBalanceMode;

@end

