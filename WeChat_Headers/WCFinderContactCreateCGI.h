//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString, WCFinderContactExtInfo;

@interface WCFinderContactCreateCGI : WCFinderBaseCgi
{
    _Bool _notShowLocation;
    _Bool _notShowSex;
    NSString *_nickname;
    NSString *_signature;
    NSString *_headImageURL;
    WCFinderContactExtInfo *_contactExtInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool notShowSex; // @synthesize notShowSex=_notShowSex;
@property(nonatomic) _Bool notShowLocation; // @synthesize notShowLocation=_notShowLocation;
@property(retain, nonatomic) WCFinderContactExtInfo *contactExtInfo; // @synthesize contactExtInfo=_contactExtInfo;
@property(copy, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithNickname:(id)arg1 headImageURL:(id)arg2 signature:(id)arg3 contactExtInfo:(id)arg4 notShowLocation:(_Bool)arg5 notShowSex:(_Bool)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

