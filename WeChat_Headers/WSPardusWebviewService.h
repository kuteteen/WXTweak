//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "WebSearchMgrDelegate-Protocol.h"

@class FTSWebSearchMgr, NSString, WSPardusWebViewJSHandler;

@interface WSPardusWebviewService : WSTemplateBaseMgr <WebSearchMgrDelegate>
{
    FTSWebSearchMgr *_webSearchMgr;
    WSPardusWebViewJSHandler *_jsHandler;
}

@property(retain, nonatomic) WSPardusWebViewJSHandler *jsHandler; // @synthesize jsHandler=_jsHandler;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
- (void).cxx_destruct;
- (void)onWebSearchCommCgiResult:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (unsigned int)getVersionOfDefaultTemplate;
- (unsigned int)getVersionOfUsedTemplate;
- (unsigned int)getResouceType;
- (id)getTemplateResoucePath;
- (id)getAppTemplateResoucePath;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

