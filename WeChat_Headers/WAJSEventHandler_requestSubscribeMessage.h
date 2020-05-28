//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WASubscriptionMessageLogicDataSource-Protocol.h"
#import "WASubscriptionMessageLogicDelegate-Protocol.h"

@class NSString, WASubscriptionMessageLogic;

@interface WAJSEventHandler_requestSubscribeMessage : WAJSEventHandler_BaseEvent <WASubscriptionMessageLogicDelegate, WASubscriptionMessageLogicDataSource>
{
    WASubscriptionMessageLogic *_logic;
}

@property(retain, nonatomic) WASubscriptionMessageLogic *logic; // @synthesize logic=_logic;
- (void).cxx_destruct;
- (id)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 success:(_Bool)arg3 cancel:(_Bool)arg4 errorMessage:(id)arg5 errorCode:(long long)arg6;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
