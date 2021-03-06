{ Parsed from Photos.framework (iPhoneOS8.2) PHImageManager.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHImageRequestOptionsPtr = ^PHImageRequestOptions;
  PHVideoRequestOptionsPtr = ^PHVideoRequestOptions;
  PHImageManagerPtr = ^PHImageManager;
  PHCachingImageManagerPtr = ^PHCachingImageManager;
{$endif}

{$ifdef TYPES}
type
  PHImageContentMode = NSInteger;
  PHImageContentModePtr = ^PHImageContentMode;

const
  PHImageContentModeAspectFit = 0;
  PHImageContentModeAspectFill = 1;
  PHImageContentModeDefault = PHImageContentModeAspectFit;

type
  PHImageRequestOptionsVersion = NSInteger;
  PHImageRequestOptionsVersionPtr = ^PHImageRequestOptionsVersion;

const
  PHImageRequestOptionsVersionCurrent = 0;
  PHImageRequestOptionsVersionUnadjusted = 1;
  PHImageRequestOptionsVersionOriginal = 2;

type
  PHImageRequestOptionsDeliveryMode = NSInteger;
  PHImageRequestOptionsDeliveryModePtr = ^PHImageRequestOptionsDeliveryMode;

const
  PHImageRequestOptionsDeliveryModeOpportunistic = 0;
  PHImageRequestOptionsDeliveryModeHighQualityFormat = 1;
  PHImageRequestOptionsDeliveryModeFastFormat = 2;

type
  PHImageRequestOptionsResizeMode = NSInteger;
  PHImageRequestOptionsResizeModePtr = ^PHImageRequestOptionsResizeMode;

const
  PHImageRequestOptionsResizeModeNone = 0;
  PHImageRequestOptionsResizeModeFast = 1;
  PHImageRequestOptionsResizeModeExact = 2;

type
  PHAssetImageProgressHandler = OpaqueCBlock { available in 8_0 };
{$endif}

{$ifdef CLASSES}

type
  PHImageRequestOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setVersion(newValue: PHImageRequestOptionsVersion); message 'setVersion:';
    function version: PHImageRequestOptionsVersion; message 'version';
    procedure setDeliveryMode(newValue: PHImageRequestOptionsDeliveryMode); message 'setDeliveryMode:';
    function deliveryMode: PHImageRequestOptionsDeliveryMode; message 'deliveryMode';
    procedure setResizeMode(newValue: PHImageRequestOptionsResizeMode); message 'setResizeMode:';
    function resizeMode: PHImageRequestOptionsResizeMode; message 'resizeMode';
    procedure setNormalizedCropRect(newValue: CGRect); message 'setNormalizedCropRect:';
    function normalizedCropRect: CGRect; message 'normalizedCropRect';
    procedure setNetworkAccessAllowed(newValue: boolean); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: boolean; message 'isNetworkAccessAllowed';
    procedure setSynchronous(newValue: boolean); message 'setSynchronous:';
    function isSynchronous: boolean; message 'isSynchronous';
    procedure setProgressHandler(newValue: PHAssetImageProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetImageProgressHandler; message 'progressHandler';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  PHVideoRequestOptionsVersion = NSInteger;
  PHVideoRequestOptionsVersionPtr = ^PHVideoRequestOptionsVersion;

const
  PHVideoRequestOptionsVersionCurrent = 0;
  PHVideoRequestOptionsVersionOriginal = 1;

type
  PHVideoRequestOptionsDeliveryMode = NSInteger;
  PHVideoRequestOptionsDeliveryModePtr = ^PHVideoRequestOptionsDeliveryMode;

const
  PHVideoRequestOptionsDeliveryModeAutomatic = 0;
  PHVideoRequestOptionsDeliveryModeHighQualityFormat = 1;
  PHVideoRequestOptionsDeliveryModeMediumQualityFormat = 2;
  PHVideoRequestOptionsDeliveryModeFastFormat = 3;

type
  PHAssetVideoProgressHandler = OpaqueCBlock { available in 8_0 };
{$endif}

{$ifdef CLASSES}

type
  PHVideoRequestOptions = objcclass external (NSObject)
  public
    procedure setNetworkAccessAllowed(newValue: boolean); message 'setNetworkAccessAllowed:';
    function isNetworkAccessAllowed: boolean; message 'isNetworkAccessAllowed';
    procedure setVersion(newValue: PHVideoRequestOptionsVersion); message 'setVersion:';
    function version: PHVideoRequestOptionsVersion; message 'version';
    procedure setDeliveryMode(newValue: PHVideoRequestOptionsDeliveryMode); message 'setDeliveryMode:';
    function deliveryMode: PHVideoRequestOptionsDeliveryMode; message 'deliveryMode';
    procedure setProgressHandler(newValue: PHAssetVideoProgressHandler); message 'setProgressHandler:';
    function progressHandler: PHAssetVideoProgressHandler; message 'progressHandler';
  end;
{$endif}

{$ifdef TYPES}
type
  PHImageRequestID = cint32 { available in 8_0 };
  PHImageRequestIDPtr = ^PHImageRequestID { available in 8_0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHImageManagerMaximumSize: CGSize { available in 8_0 }; cvar; external;
  PHImageResultIsInCloudKey: NSString { available in 8_0 }; cvar; external;
  PHImageResultIsDegradedKey: NSString { available in 8_0 }; cvar; external;
  PHImageResultRequestIDKey: NSString { available in 8_0 }; cvar; external;
  PHImageCancelledKey: NSString { available in 8_0 }; cvar; external;
  PHImageErrorKey: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PHImageManager = objcclass external (NSObject)
  public
    class function defaultManager: PHImageManager; message 'defaultManager';
    function requestImageForAsset_targetSize_contentMode_options_resultHandler (asset: PHAsset; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions; resultHandler: OpaqueCBlock): PHImageRequestID; message 'requestImageForAsset:targetSize:contentMode:options:resultHandler:';
    function requestImageDataForAsset_options_resultHandler (asset: PHAsset; options: PHImageRequestOptions; resultHandler: OpaqueCBlock): PHImageRequestID; message 'requestImageDataForAsset:options:resultHandler:';
    procedure cancelImageRequest (requestID: PHImageRequestID); message 'cancelImageRequest:';
    function requestPlayerItemForVideo_options_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; resultHandler: OpaqueCBlock): PHImageRequestID; message 'requestPlayerItemForVideo:options:resultHandler:';
    function requestExportSessionForVideo_options_exportPreset_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; exportPreset: NSString; resultHandler: OpaqueCBlock): PHImageRequestID; message 'requestExportSessionForVideo:options:exportPreset:resultHandler:';
    function requestAVAssetForVideo_options_resultHandler (asset: PHAsset; options: PHVideoRequestOptions; resultHandler: OpaqueCBlock): PHImageRequestID; message 'requestAVAssetForVideo:options:resultHandler:';
  end;

type
  PHCachingImageManager = objcclass external (PHImageManager)
  public
    procedure setAllowsCachingHighQualityImages(newValue: boolean); message 'setAllowsCachingHighQualityImages:';
    function allowsCachingHighQualityImages: boolean; message 'allowsCachingHighQualityImages';
    procedure startCachingImagesForAssets_targetSize_contentMode_options (assets: NSArray; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions); message 'startCachingImagesForAssets:targetSize:contentMode:options:';
    procedure stopCachingImagesForAssets_targetSize_contentMode_options (assets: NSArray; targetSize: CGSize; contentMode: PHImageContentMode; options: PHImageRequestOptions); message 'stopCachingImagesForAssets:targetSize:contentMode:options:';
    procedure stopCachingImagesForAllAssets; message 'stopCachingImagesForAllAssets';
  end;
{$endif}

