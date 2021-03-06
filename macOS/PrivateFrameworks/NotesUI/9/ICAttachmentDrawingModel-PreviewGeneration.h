//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentDrawingModel.h"

@class NSImage;

@interface ICAttachmentDrawingModel (PreviewGeneration)
- (struct NSImage *)generateImageUsingFullscreenRenderer;
- (BOOL)generatePreviewsInOperation:(id)arg1;
- (BOOL)needToGeneratePreviews;
- (BOOL)generatePreviewsDuringCloudActivity;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)providerDataTypes;
- (id)activityItems;
- (id)activityItem;
@property(readonly, nonatomic) NSImage *imageForActivityItem;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)saveDrawing:(id)arg1 withImage:(struct NSImage *)arg2 forImageDrawing:(id)arg3;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
@end

