//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderTopicListDetailViewModelDelegate;

@interface WCFinderTopicListDetailViewModel : NSObject
{
    _Bool _queryContinueFlag;
    id <WCFinderTopicListDetailViewModelDelegate> _delegate;
    unsigned long long _topicType;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSMutableArray *_allSearchDataItems;
    NSString *_exposeItemInfo;
    NSString *_allExposeItemInfo;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectid;
}

+ (id)initWithTopicType:(unsigned long long)arg1 lastBuffer:(id)arg2 latestRequestID:(id)arg3 queryText:(id)arg4 queryContinueFlag:(_Bool)arg5 dataSources:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 refObjectid:(id)arg9;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *allExposeItemInfo; // @synthesize allExposeItemInfo=_allExposeItemInfo;
@property(retain, nonatomic) NSString *exposeItemInfo; // @synthesize exposeItemInfo=_exposeItemInfo;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(nonatomic) __weak id <WCFinderTopicListDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (void)onFeedFollowStatusChanged:(id)arg1 isFollow:(_Bool)arg2 contentVM:(id)arg3;
- (long long)numberOfSection;
- (long long)contentIndexOfTid:(id)arg1;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageDataItems;
- (void)onQueryContentWith:(id)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;

@end

