//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesModel.h"

@class FavBrandMpVideoItem, FavLocationItem, FavProductItem, FavStreamVideoItem, FavTVItem, FavURLItem, FavWeAppItem, FavoritesDataItemSource, NSArray, NSString, WCFinderShareToMomentsItem;

@interface FavoritesItemDataField : FavoritesModel
{
    _Bool _isFromSingleMessage;
    int _dataType;
    unsigned int _subType;
    unsigned int _thumbSize;
    unsigned int _dataSize;
    unsigned int _duration;
    int _dataStatus;
    int _illegalType;
    unsigned int _srcMsgLocalId;
    unsigned int _srcMsgCreateTime;
    NSString *_dataFmt;
    NSString *_dataSourceId;
    NSString *_dataId;
    NSString *_htmlId;
    NSString *_dataTitle;
    NSString *_dataDesc;
    NSString *_cdnThumbUrl;
    NSString *_cdnThumbKey;
    NSString *_cdnDataUrl;
    NSString *_cdnDataKey;
    double _thumbWidth;
    double _thumbHeight;
    NSString *_streamWebUrl;
    NSString *_streamDataUrl;
    NSString *_streamLowbandUrl;
    NSString *_songLyric;
    NSString *_songAlbumUrl;
    NSString *_dataExt;
    NSString *_streamId;
    NSString *_thumbMd5;
    NSString *_thumbHead256Md5;
    NSString *_dataMd5;
    NSString *_dataHead256Md5;
    NSString *_sourceThumbPath;
    NSString *_sourceDataPath;
    NSString *_dataSrcName;
    NSString *_dataSrcNamePost;
    NSString *_dataSrcHeadUrl;
    NSString *_dataSrcTime;
    FavoritesDataItemSource *_dataSrc;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    double _nodeHeight;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_statExtStr;
    NSString *_canvasPageXml;
    NSString *_srcChatName;
    NSArray *_dataList;
    FavWeAppItem *_weAppItem;
    FavBrandMpVideoItem *_favBrandMpVideoItem;
    NSString *_authkey;
    NSString *_messageUUID;
    WCFinderShareToMomentsItem *_finderShareItem;
}

+ (id)xmlTagPreProcesslist;
+ (id)xmlAttributePropertylist;
+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyMapping;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) _Bool isFromSingleMessage; // @synthesize isFromSingleMessage=_isFromSingleMessage;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(retain, nonatomic) FavBrandMpVideoItem *favBrandMpVideoItem; // @synthesize favBrandMpVideoItem=_favBrandMpVideoItem;
@property(retain, nonatomic) FavWeAppItem *weAppItem; // @synthesize weAppItem=_weAppItem;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) unsigned int srcMsgCreateTime; // @synthesize srcMsgCreateTime=_srcMsgCreateTime;
@property(nonatomic) unsigned int srcMsgLocalId; // @synthesize srcMsgLocalId=_srcMsgLocalId;
@property(retain, nonatomic) NSString *srcChatName; // @synthesize srcChatName=_srcChatName;
@property(nonatomic) int illegalType; // @synthesize illegalType=_illegalType;
@property(retain, nonatomic) NSString *canvasPageXml; // @synthesize canvasPageXml=_canvasPageXml;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(nonatomic) double nodeHeight; // @synthesize nodeHeight=_nodeHeight;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(retain, nonatomic) FavoritesDataItemSource *dataSrc; // @synthesize dataSrc=_dataSrc;
@property(retain, nonatomic) NSString *dataSrcTime; // @synthesize dataSrcTime=_dataSrcTime;
@property(retain, nonatomic) NSString *dataSrcHeadUrl; // @synthesize dataSrcHeadUrl=_dataSrcHeadUrl;
@property(retain, nonatomic) NSString *dataSrcNamePost; // @synthesize dataSrcNamePost=_dataSrcNamePost;
@property(retain, nonatomic) NSString *dataSrcName; // @synthesize dataSrcName=_dataSrcName;
@property(retain, nonatomic) NSString *sourceDataPath; // @synthesize sourceDataPath=_sourceDataPath;
@property(retain, nonatomic) NSString *sourceThumbPath; // @synthesize sourceThumbPath=_sourceThumbPath;
@property(retain, nonatomic) NSString *dataHead256Md5; // @synthesize dataHead256Md5=_dataHead256Md5;
@property(retain, nonatomic) NSString *dataMd5; // @synthesize dataMd5=_dataMd5;
@property(retain, nonatomic) NSString *thumbHead256Md5; // @synthesize thumbHead256Md5=_thumbHead256Md5;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(nonatomic) int dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *dataExt; // @synthesize dataExt=_dataExt;
@property(copy, nonatomic) NSString *songAlbumUrl; // @synthesize songAlbumUrl=_songAlbumUrl;
@property(copy, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(retain, nonatomic) NSString *streamLowbandUrl; // @synthesize streamLowbandUrl=_streamLowbandUrl;
@property(retain, nonatomic) NSString *streamDataUrl; // @synthesize streamDataUrl=_streamDataUrl;
@property(retain, nonatomic) NSString *streamWebUrl; // @synthesize streamWebUrl=_streamWebUrl;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) unsigned int thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(retain, nonatomic) NSString *cdnDataKey; // @synthesize cdnDataKey=_cdnDataKey;
@property(retain, nonatomic) NSString *cdnDataUrl; // @synthesize cdnDataUrl=_cdnDataUrl;
@property(retain, nonatomic) NSString *cdnThumbKey; // @synthesize cdnThumbKey=_cdnThumbKey;
@property(retain, nonatomic) NSString *cdnThumbUrl; // @synthesize cdnThumbUrl=_cdnThumbUrl;
@property(retain, nonatomic) NSString *dataDesc; // @synthesize dataDesc=_dataDesc;
@property(retain, nonatomic) NSString *dataTitle; // @synthesize dataTitle=_dataTitle;
@property(retain, nonatomic) NSString *htmlId; // @synthesize htmlId=_htmlId;
@property(retain, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(retain, nonatomic) NSString *dataSourceId; // @synthesize dataSourceId=_dataSourceId;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)translateInfo;
- (_Bool)isRecordOrNoteData;
- (_Bool)needDownloadData;
- (_Bool)needDownloadThumb;
- (_Bool)needUploadData;
- (_Bool)needUploadThumb;
- (_Bool)hasNoDataOrThumb;
- (_Bool)hasThumbForItem;
- (id)GenFavItemDataClientIDByCreateTime:(int)arg1 Index:(int)arg2;
- (void)clearFileInfo;
- (id)Get3rdAppFileDataTempPath;
- (id)Get3rdAppThumbDataTempPath;
- (id)GetDataPath;
- (id)GetThumbPath;

@end

