//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BaseResponse, BaseResponseErrMsg, CMessageWrap, ChatRoomDetail, CreateChatRoomResponse, CreateOpenIMChatRoomResp, GetAssociateChatRoomManageInfoResp, NSArray, NSObject, NSString, OplogErrMsg;

@protocol IGroupMgrExt

@optional
- (void)onUpdateChatRoomtToolWeAppInfoListWithUserName:(NSString *)arg1 roomToolsWxApps:(NSArray *)arg2 withResult:(unsigned int)arg3 errorMsg:(NSString *)arg4;
- (void)OnUpgradeAssociateChatRoom:(NSString *)arg1 withResult:(unsigned int)arg2 errorMsg:(NSString *)arg3;
- (void)OnGetUpgradeAssociateChatRoom:(NSString *)arg1 withResult:(unsigned int)arg2 errorMsg:(NSString *)arg3 withResp:(GetAssociateChatRoomManageInfoResp *)arg4;
- (void)OnUpdateApproveMessage:(NSString *)arg1 MessageWrap:(CMessageWrap *)arg2;
- (void)OnChangeGroupAdmin:(NSString *)arg1;
- (void)OnDelGroupAdmin:(NSString *)arg1 withResult:(unsigned int)arg2 adminList:(NSArray *)arg3 errTip:(NSString *)arg4;
- (void)OnAddGroupAdmin:(NSString *)arg1 withResult:(unsigned int)arg2 adminList:(NSArray *)arg3 errTip:(NSString *)arg4;
- (void)OnApproveChatRoomInvitation:(NSString *)arg1 ErrorInfo:(BaseResponseErrMsg *)arg2 Success:(_Bool)arg3 withUserData:(NSObject *)arg4;
- (void)OnSetChatRoomAccessType:(NSString *)arg1 Type:(unsigned int)arg2 ErrorInfo:(OplogErrMsg *)arg3 Success:(_Bool)arg4;
- (void)OnSetChatRoomTopic:(NSString *)arg1 ErrorInfo:(OplogErrMsg *)arg2 Success:(_Bool)arg3;
- (void)OnSetChatRoomDesc:(NSString *)arg1 Desc:(ChatRoomDetail *)arg2 Error:(BaseResponse *)arg3;
- (void)OnGetChatRoomInfo:(NSString *)arg1 Info:(ChatRoomDetail *)arg2;
- (void)OnChangeChatRoomOwner:(NSString *)arg1 NewOwner:(NSString *)arg2 Success:(_Bool)arg3;
- (void)OnInviteChatRoomMember:(NSString *)arg1 Ret:(int)arg2 Error:(BaseResponseErrMsg *)arg3 withUserData:(NSObject *)arg4;
- (void)OnChatRoomContactUpdateOK:(NSString *)arg1;
- (void)OnChatRoomUpgrade:(NSString *)arg1 rspCode:(int)arg2 restQuota:(unsigned int)arg3 maxCount:(unsigned int)arg4;
- (void)OnPersonalInfoVerified:(int)arg1;
- (void)OnSetChatRoomVerifyStutas:(NSString *)arg1 isOpen:(_Bool)arg2 rspCode:(int)arg3;
- (void)OnGetChatRoomUpgradeStatus:(unsigned int)arg1 quota:(unsigned int)arg2 maxCount:(unsigned int)arg3;
- (void)OnChangeMemberVerifyStatus:(NSString *)arg1;
- (void)OnChangeMemberShowDisplayName:(NSString *)arg1;
- (void)OnChangeMemberDisplayName:(NSString *)arg1;
- (void)OnDelGroupMember:(NSString *)arg1 withResult:(unsigned int)arg2 memberList:(NSArray *)arg3 errTip:(NSString *)arg4;
- (void)OnQuitGroup:(NSString *)arg1;
- (void)OnChangeGroup:(NSString *)arg1;
- (void)OnAddGroupMember:(NSString *)arg1 withStatus:(unsigned int)arg2 memberList:(NSArray *)arg3 inviteList:(NSArray *)arg4 Error:(BaseResponseErrMsg *)arg5 tipContent:(NSString *)arg6;
- (void)OnOpenIMCreateGroup:(NSString *)arg1 withStatus:(int)arg2 resp:(CreateOpenIMChatRoomResp *)arg3;
- (void)OnCreateGroup:(NSString *)arg1 withStatus:(int)arg2 resp:(CreateChatRoomResponse *)arg3;
@end
