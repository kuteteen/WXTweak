//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AfterPlaceOrderCommReq, BaseRequest, NSString;

@interface BusiF2FSucPageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AfterPlaceOrderCommReq *afterPlaceorderCommReq; // @dynamic afterPlaceorderCommReq;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int faultFlag; // @dynamic faultFlag;
@property(nonatomic) unsigned long long faultRetryClientTime; // @dynamic faultRetryClientTime;
@property(nonatomic) unsigned int faultRetryCnt; // @dynamic faultRetryCnt;
@property(retain, nonatomic) NSString *sucPageExtend; // @dynamic sucPageExtend;

@end
