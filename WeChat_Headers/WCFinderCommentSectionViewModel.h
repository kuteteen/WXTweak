//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSString, WCFinderComment;

@interface WCFinderCommentSectionViewModel : NSObject
{
    _Bool _showSubCommentList;
    _Bool _upContinueFlag;
    _Bool _downContinueFlag;
    long long _commentID;
    NSString *_clientID;
    unsigned long long _expandCommentCount;
    NSData *_lastBuffer;
    WCFinderComment *_rootComment;
    NSMutableSet *_subCommentIDSet;
}

+ (id)commentSectionViewModelWithRootComment:(id)arg1;
@property(retain, nonatomic) NSMutableSet *subCommentIDSet; // @synthesize subCommentIDSet=_subCommentIDSet;
@property(retain, nonatomic) WCFinderComment *rootComment; // @synthesize rootComment=_rootComment;
@property(nonatomic) _Bool downContinueFlag; // @synthesize downContinueFlag=_downContinueFlag;
@property(nonatomic) _Bool upContinueFlag; // @synthesize upContinueFlag=_upContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long expandCommentCount; // @synthesize expandCommentCount=_expandCommentCount;
@property(nonatomic) _Bool showSubCommentList; // @synthesize showSubCommentList=_showSubCommentList;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) long long commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (_Bool)postCommentFailure:(id)arg1;
- (_Bool)postCommentSuccessful:(id)arg1;
- (void)addPostComment:(id)arg1;
- (unsigned long long)getLastSubCommentIndex;
- (void)addSubComments:(id)arg1 addToBottom:(_Bool)arg2;
- (double)extraHeightWithIndex:(unsigned long long)arg1;
- (void)replaceRootCommentByPostSuccessful:(id)arg1;
- (_Bool)removeSubCommentWithCommentID:(long long)arg1;
- (unsigned long long)numberOfComment;
- (unsigned long long)getMoreCommentTypeIndex:(unsigned long long)arg1;
- (unsigned long long)getCommentCellTypeWithIndex:(unsigned long long)arg1;
- (id)getRootComment;
- (id)getFinderCommentWithIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long subCommentCount;

@end

