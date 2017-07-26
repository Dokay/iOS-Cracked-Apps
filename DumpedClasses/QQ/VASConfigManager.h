//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, QQNavigationController;

@interface VASConfigManager : NSObject <IEngineDispatchDelegate, ISCListenerCallback, ISCBusinessCallback>
{
    NSArray *_vipKeyWords;
    NSString *_vipKeyWordsSendTipWording;
    NSString *_vipKeyWordsSendTipKey;
    NSString *_vipKeyWordsSendTipUrl;
    NSString *_vipKeyWordsOpenTipWording;
    NSString *_vipKeyWordsOpenTipKey;
    NSString *_vipKeyWordsOpenTipUrl;
    _Bool _keyWordMatchEnable;
    NSObject<OS_dispatch_queue> *_matchQueue;
    NSArray *_vipSendList;
    _Bool _sendRenewEnable;
    long long _sendRenewCheckFreq;
    NSMutableDictionary *_vasSendRenewConfig;
    NSMutableDictionary *_ssoReqUinDict;
    long long _lastLoadPaySwitchTime;
    _Bool _isH5Pay;
    NSString *_currentUin;
    CDUnknownBlockType _currentCmpBlk;
    QQNavigationController *_backRunNav;
    _Bool _isBackWebRuning;
    _Bool _c2cEnable;
    _Bool _groupEnable;
    _Bool _discussGroupEnable;
    long long _showVipGrayTipFreqC2C;
    long long _showVipGrayTipFreqGroup;
    long long _showVipGrayTipFreqDiscussGroup;
    NSArray *_vipDirtyWords;
    NSArray *_vipKeyWordsGroupAndDiscussGroup;
    NSString *_groupGrayTail;
    NSString *_groupGiftWording;
    NSString *_groupGiftHighlightWording;
    NSString *_groupOpenWording;
    NSString *_groupOpenHighlightWording;
    NSMutableDictionary *_ssoReqBlockDict;
    long long _fetchVipGrayTipWordingTolerateTime;
    _Bool _hasAddBackWebItem;
    NSMutableArray *_backWaitRunItems;
    _Bool _isEmojiStickerEnable;
    int _maxStickPerMsg;
    int _maxStickerShowPerMsg;
    double _emojiCanStickTime;
    NSString *_gameIconBaseUrl;
    int _gameIconExpireDay;
    _Bool _highBoomMsgShouldDrawInAIO;
    _Bool _founderColorFontShouldDrawInAIO;
    long long _lastShowVipGrayTipTimeC2C;
    long long _lastShowVipGrayTipTimeGroup;
    long long _lastShowVipGrayTipTimeDiscussGroup;
}

+ (id)getPersonalityDecorationViewController:(long long)arg1;
+ (_Bool)isValidMode:(id)arg1;
+ (id)shareManager;
@property(readonly, nonatomic) long long showVipGrayTipFreqDiscussGroup; // @synthesize showVipGrayTipFreqDiscussGroup=_showVipGrayTipFreqDiscussGroup;
@property(readonly, nonatomic) long long showVipGrayTipFreqGroup; // @synthesize showVipGrayTipFreqGroup=_showVipGrayTipFreqGroup;
@property(readonly, nonatomic) long long showVipGrayTipFreqC2C; // @synthesize showVipGrayTipFreqC2C=_showVipGrayTipFreqC2C;
@property(nonatomic) long long lastShowVipGrayTipTimeDiscussGroup; // @synthesize lastShowVipGrayTipTimeDiscussGroup=_lastShowVipGrayTipTimeDiscussGroup;
@property(nonatomic) long long lastShowVipGrayTipTimeGroup; // @synthesize lastShowVipGrayTipTimeGroup=_lastShowVipGrayTipTimeGroup;
@property(nonatomic) long long lastShowVipGrayTipTimeC2C; // @synthesize lastShowVipGrayTipTimeC2C=_lastShowVipGrayTipTimeC2C;
- (_Bool)showGameIconWithLastLoginTime:(unsigned long long)arg1;
- (id)getGameIconUrlWithAppId:(unsigned int)arg1;
- (void)autoRunWebViewWithConfig:(id)arg1;
- (void)delayClearWebViewInnerWithConfig:(id)arg1;
- (void)delayPerformRunActionWithConfig:(id)arg1;
- (void)clearBackWebViewInner;
- (void)clearBackgroundWebViewIfExist;
- (void)updateDecreaseForEntryId:(id)arg1 repeat:(_Bool)arg2;
- (id)recordStoreKey:(_Bool)arg1;
- (void)dealWithBackgroundWebViewConfig:(id)arg1;
- (id)getUrlByEnteryId:(id)arg1;
- (void)readBackgroundWebViewConfig;
- (void)observeApplicationDidEnterBackground:(id)arg1;
- (void)observeApplicationDidEnterForeground:(id)arg1;
- (id)webViewWhiteList;
- (void)saveWebViewWhiteList:(id)arg1;
- (id)preDNSDomains;
- (_Bool)isDomainPreDNS:(id)arg1;
- (id)sharpHeaderForUrl:(id)arg1;
- (_Bool)isUrlCanUseQBWebView:(id)arg1;
- (_Bool)isATSClosed;
- (void)qbWebViewSwitchOff;
- (_Bool)isCurrentUinQBWebViewSwitchOn;
- (_Bool)isQBInnerUsingWK;
- (void)saveWebViewConfig:(id)arg1;
- (id)getGTKFromSKey:(id)arg1;
- (void)loadPersonalitySwitchJsonWithUin:(id)arg1 Aid:(id)arg2 Complection:(CDUnknownBlockType)arg3;
- (void)onVipPaySwitchResp:(id)arg1;
- (void)loadloadPersonalitySwitchBySSOWithUin:(id)arg1 Aid:(id)arg2 Complection:(CDUnknownBlockType)arg3;
- (id)vipEntryNameFetch;
- (_Bool)loadKeywordDataByJson:(id)arg1;
- (void)parseVipPersonalCardConfigJson:(id)arg1;
- (void)loadGameIconInfoWithDic:(id)arg1;
- (void)loadMagicFontConfigInfo;
- (void)parseVipGrayTipsInfoWithDic:(id)arg1;
- (id)personalCardConfig;
- (id)vipPersonalCardConfigJsonPath;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestCheckRenewGiftTips:(id)arg1;
- (void)loadGiftConfigInfo;
- (void)saveSendRenewConfig:(id)arg1;
- (id)buildTipParamWithInfo:(id)arg1 msgUin:(id)arg2;
- (_Bool)checkRenewGiftVip:(id)arg1;
- (void)requestVipGrayTipsWordingWithMatchKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)matchGiftVipKeyWord:(id)arg1;
- (void)matchKeywordAndPostNotify:(id)arg1 withInfo:(id)arg2;
- (void)updateLastShowVipGrayTipsTimeWithMsgModel:(id)arg1;
- (_Bool)shouldShowVipGrayTipsWithMsgModel:(id)arg1;
- (_Bool)isInGray:(id)arg1;
- (void)setFounderColorFontShouldDrawInAIO:(_Bool)arg1;
- (_Bool)founderColorFontShouldDrawInAIO;
- (void)setHighBoomMsgShouldDrawInAIO:(_Bool)arg1;
- (_Bool)highBoomMsgShouldDrawInAIO;
- (double)getEmojiCanStickTime;
- (void)setMaxStickerShowNumPerMsg:(int)arg1;
- (int)getMaxStickerShowNumPerMsg;
- (void)setMaxStcikNumPerMsg:(int)arg1;
- (int)getMaxStickNumPerMsg;
- (void)setEmojiStickerEnableFlag:(_Bool)arg1;
- (_Bool)getEmojiStickerEnableFlag;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
