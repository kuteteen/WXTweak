//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface KVLogItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned int logId; // @dynamic logId;
@property(nonatomic) unsigned int logTime; // @dynamic logTime;
@property(nonatomic) unsigned int reportType; // @dynamic reportType;
@property(retain, nonatomic) NSData *value; // @dynamic value;

@end
