//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationHeartBeatMonitorDelegate.h"
#import "LocalAreaNetworkServerDelegate.h"

@class ChatMigrationHeartBeatMonitor, LocalAreaNetworkServer, MMTimer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WXGBackupDataInfo, WXGBackupDataMgr, WXGChatLogProtoHandler;

@interface WXGMigrationServerLogic : NSObject <LocalAreaNetworkServerDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    NSObject<OS_dispatch_queue> *m_getDataLogicQueue;
    _Bool m_bServerStop;
    _Bool m_bStartTransfer;
    long long m_chatMigrationType;
    long long m_otherSideChatMigrationVersion;
    long long m_otherSideSupportExt;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    MMTimer *m_sendHeartBeatTimer;
    double m_heartTimerCheckInterval;
    NSMutableArray *m_sendingArray;
    NSMutableDictionary *m_sessionNickDictionary;
    WXGBackupDataInfo *m_backupDataInfo;
    NSString *m_lastBackupSesionName;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    _Bool m_bFirstTag;
    MMTimer *m_transferSpeedTimer;
    LocalAreaNetworkServer *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupDataMgr *m_dataMgr;
    id <WXGMigrationServerLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationServerLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_notifyOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)p_notifyOnMainthread:(unsigned long long)arg1;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)restSendHeartBeatTimer;
- (void)onDisconnect;
- (void)onConnected;
- (void)onReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_sendFinishRequest;
- (void)p_processDataInfoAndSendTag:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)p_sendNextDataPushWithResponseID:(id)arg1;
- (void)p_sendLotOfDataPush;
- (void)p_sendRequestSession;
- (_Bool)sendData:(id)arg1;
- (id)p_resortSessionArray:(id)arg1;
- (void)p_inputDataAndStartDataMgrProduce;
- (_Bool)isSupportBackupNewFeature;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processHeartBeatRequestData:(id)arg1;
- (void)p_processBackupDataTagResponseData:(id)arg1;
- (void)p_processDataPushResponseData:(id)arg1;
- (void)p_processRequestSessionResponseData:(id)arg1;
- (void)p_processStartRequestData:(id)arg1;
- (void)p_processAuthenticateRequestData:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_checkTransferSpeed;
- (void)stopServerLogic;
- (_Bool)startServerLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

