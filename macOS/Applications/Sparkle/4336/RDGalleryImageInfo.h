//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "RDPropertyDigestProtocol.h"

@class NSData, NSImage, NSString, NSURL, RDAsset, RDAssetReference, RDImageGalleryLabelContent, RDWebsite;

@interface RDGalleryImageInfo : NSObject <NSCoding, RDPropertyDigestProtocol>
{
    BOOL _showLabel;
    BOOL _hasActionOverlay;
    NSData *_bookmarkData;
    NSString *_filename;
    RDImageGalleryLabelContent *_label;
    long long _interaction;
    long long _imageLightboxSizeLimit;
    long long _lightboxTheme;
    double _lightboxOpacity;
    long long _actionOverlayImageIndex;
    long long _actionOverlayCorner;
    NSString *_link;
    RDWebsite *_website;
    RDAsset *_storedImageAsset;
    RDAsset *_storedThumbnailAsset;
    NSImage *_cachedThumbnail;
    RDAssetReference *_storedImageAssetRef;
    RDAssetReference *_storedThumbnailAssetRef;
    struct CGSize _cachedImageSize;
}

@property(retain, nonatomic) RDAssetReference *storedThumbnailAssetRef; // @synthesize storedThumbnailAssetRef=_storedThumbnailAssetRef;
@property(retain, nonatomic) RDAssetReference *storedImageAssetRef; // @synthesize storedImageAssetRef=_storedImageAssetRef;
@property(retain, nonatomic) NSImage *cachedThumbnail; // @synthesize cachedThumbnail=_cachedThumbnail;
@property(retain, nonatomic) RDAsset *storedThumbnailAsset; // @synthesize storedThumbnailAsset=_storedThumbnailAsset;
@property(retain, nonatomic) RDAsset *storedImageAsset; // @synthesize storedImageAsset=_storedImageAsset;
@property(nonatomic) struct CGSize cachedImageSize; // @synthesize cachedImageSize=_cachedImageSize;
@property(nonatomic) __weak RDWebsite *website; // @synthesize website=_website;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long actionOverlayCorner; // @synthesize actionOverlayCorner=_actionOverlayCorner;
@property(nonatomic) long long actionOverlayImageIndex; // @synthesize actionOverlayImageIndex=_actionOverlayImageIndex;
@property(nonatomic) BOOL hasActionOverlay; // @synthesize hasActionOverlay=_hasActionOverlay;
@property(nonatomic) double lightboxOpacity; // @synthesize lightboxOpacity=_lightboxOpacity;
@property(nonatomic) long long lightboxTheme; // @synthesize lightboxTheme=_lightboxTheme;
@property(nonatomic) long long imageLightboxSizeLimit; // @synthesize imageLightboxSizeLimit=_imageLightboxSizeLimit;
@property(nonatomic) long long interaction; // @synthesize interaction=_interaction;
@property(nonatomic) BOOL showLabel; // @synthesize showLabel=_showLabel;
@property(retain, nonatomic) RDImageGalleryLabelContent *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSData *bookmarkData; // @synthesize bookmarkData=_bookmarkData;
- (void).cxx_destruct;
@property(readonly, nonatomic) id digest;
- (id)thumbnailImageData;
- (id)imageData;
- (BOOL)loadImageFromAsset:(id)arg1 withFilename:(id)arg2;
- (BOOL)loadImage:(id)arg1;
- (void)generateCachedInfoWithImage:(id)arg1;
- (void)generateCachedInfo;
- (void)invalidateCachedInfo;
@property(readonly, nonatomic) NSURL *fileurl;
@property(readonly, nonatomic) NSImage *thumbnail;
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)setExternal:(BOOL)arg1;
- (id)removeLabel;
- (id)addLabelWithTitle:(id)arg1 inFrame:(struct CGRect)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyInWebsite:(id)arg1 withZone:(struct _NSZone *)arg2;

@end

