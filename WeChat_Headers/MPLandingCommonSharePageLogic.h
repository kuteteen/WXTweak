//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMWebViewDelegate-Protocol.h"

@class MMWebViewController, MPLandingCommonSharePageExtParams, MPLandingVideoDotAdCurrWebViewWrapper, NSMutableArray, NSString;
@protocol MPLandingCommonSharePageLogicDelegate;

@interface MPLandingCommonSharePageLogic : NSObject <MMWebViewDelegate>
{
    _Bool _isWebviewFastLoad;
    _Bool _isBackAdWebViewControllerReady;
    _Bool _isInMinimization;
    unsigned int _itemShowType;
    id <MPLandingCommonSharePageLogicDelegate> _delegate;
    NSString *_originalUrl;
    NSString *_bizUserName;
    MMWebViewController *_commonShareWebViewVC;
    MMWebViewController *_backAdWebViewController;
    MPLandingVideoDotAdCurrWebViewWrapper *_dotAdCurrWebViewWrapper;
    NSMutableArray *_dotAdScripItemArr;
    MPLandingCommonSharePageExtParams *_extParams;
}

@property(nonatomic) _Bool isInMinimization; // @synthesize isInMinimization=_isInMinimization;
@property(retain, nonatomic) MPLandingCommonSharePageExtParams *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSMutableArray *dotAdScripItemArr; // @synthesize dotAdScripItemArr=_dotAdScripItemArr;
@property(retain, nonatomic) MPLandingVideoDotAdCurrWebViewWrapper *dotAdCurrWebViewWrapper; // @synthesize dotAdCurrWebViewWrapper=_dotAdCurrWebViewWrapper;
@property(nonatomic) _Bool isBackAdWebViewControllerReady; // @synthesize isBackAdWebViewControllerReady=_isBackAdWebViewControllerReady;
@property(retain, nonatomic) MMWebViewController *backAdWebViewController; // @synthesize backAdWebViewController=_backAdWebViewController;
@property(retain, nonatomic) MMWebViewController *commonShareWebViewVC; // @synthesize commonShareWebViewVC=_commonShareWebViewVC;
@property(nonatomic) _Bool isWebviewFastLoad; // @synthesize isWebviewFastLoad=_isWebviewFastLoad;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) __weak id <MPLandingCommonSharePageLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetCommonSharePage;
- (id)currentMPVideoPlayerStateDictionary;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (_Bool)tryCreateAdViewWithUrlString:(id)arg1 error:(id *)arg2;
- (void)sendMPPageData:(id)arg1 toWebVC:(id)arg2;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)handleMpActionSetTopBarState:(_Bool)arg1 paramters:(id)arg2;
- (void)handleMPActionInsertNativeView:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionSetWebviewBackground:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionOpPlayer:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionSwitchVideo:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (id)handleGetMPVideoState:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionSendMPPageData:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionAdWebviewReady:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionCloseAdWebview:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionCreateAdWebview:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (id)handleMPActionGetFuncFlag:(id)arg1 errMsg:(id *)arg2;
- (void)handleMPActionShare:(id)arg1 errMsg:(id *)arg2;
- (id)onMPAction:(id)arg1 paramsDic:(id)arg2 webviewController:(id)arg3 errMsg:(id *)arg4;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)sendGetFuncFlagEvent:(id)arg1;
- (void)sendMPAdViewStateChangedEvent:(long long)arg1;
- (void)sendMPPlayerStateChangeEvent:(id)arg1 vid:(id)arg2 errMsg:(id)arg3;
- (void)deleteCommentMsgWithPersonalCommentId:(unsigned int)arg1 openId:(id)arg2;
- (void)sendHaokanResult:(_Bool)arg1 commentContent:(id)arg2 scene:(long long)arg3;
- (_Bool)isAddedToGookLook;
- (_Bool)shouldShowGoodLookItem;
- (void)closeWowRecommendCommentEditView;
- (void)destoryCommentEditView;
- (void)closeCommentEditView;
- (_Bool)isShowMPWowRecommendCommentEditView;
- (_Bool)isShowMPCommentEditView;
- (id)commonShareWebScrollView;
- (id)commonShareWebView;
- (id)commonShareWebViewController;
- (_Bool)isCommonShareFastLoaded;
- (id)allCommonShareWebVC;
- (void)setCommonShareLogicWebVCMinimizationState:(_Bool)arg1;
- (void)tryInitWebViewFromPreloadPool;
- (id)commonShareFullPageUrl;
- (void)clearCommonShareLogic;
- (_Bool)goToOriginalUrl:(id)arg1 bizUserName:(id)arg2 extParams:(id)arg3;
- (id)initWithDelegate:(id)arg1 originalUrl:(id)arg2 itemShowType:(unsigned int)arg3 bizUserName:(id)arg4 extParams:(id)arg5;
- (void)handleMPActionConfigMpAdAttr:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionCloseDotAdWebview:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionDotAdWebviewReady:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionHideDotAdWebview:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)handleMPActionDotAdSetScripData:(id)arg1 webviewController:(id)arg2 errMsg:(id *)arg3;
- (void)closeDotAdViewAndNotifyWebIfNeeded:(_Bool)arg1 clearScripData:(_Bool)arg2;
- (_Bool)isNeedDestoryCurrAdDotView:(double)arg1 totalDuration:(double)arg2 isPlayFinish:(_Bool)arg3 getNeedNotifyWebPtr:(_Bool *)arg4;
- (void)sendMPDotWebviewStateChangeEventToWebFrontId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 state:(int)arg3;
- (void)onSeekBarProcessCurrTime:(double)arg1 totalDuration:(double)arg2;
- (void)onVideoProcessCurrTime:(double)arg1 totalDuration:(double)arg2;
- (void)createDotAdViewWithScripItem:(id)arg1;
- (void)clearAdView;
- (_Bool)isAdViewReady;
- (id)adWebViewController;
- (void)createAdView:(id)arg1;

@end
