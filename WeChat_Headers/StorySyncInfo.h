//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StorySyncInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int chatRoomIdx; // @dynamic chatRoomIdx;
@property(nonatomic) unsigned int last24HoursCount; // @dynamic last24HoursCount;
@property(nonatomic) unsigned long long objId; // @dynamic objId;
@property(nonatomic) unsigned int objPostTime; // @dynamic objPostTime;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end
