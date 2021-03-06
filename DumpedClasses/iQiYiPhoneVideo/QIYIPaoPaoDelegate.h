//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYPPPubManagerDelegate-Protocol.h"

@class NSString, QIYIPaoPaoPushSwitchManager, QYIMPaopao;

@interface QIYIPaoPaoDelegate : NSObject <IQYDataLoadManagerDelegate, QYPPPubManagerDelegate>
{
    QYIMPaopao *qiyiModuleXMPP;
    QIYIPaoPaoPushSwitchManager *pushSwitchManager;
}

+ (id)defaultDelegate;
- (void).cxx_destruct;
- (void)playVideoByFeedId:(id)arg1 inNavigationController:(id)arg2;
- (void)exitNavigationController:(id)arg1;
- (id)navigationControllerWithTopicSelectViewController:(id)arg1;
- (id)stringByClearMarkedString:(id)arg1;
- (id)jumpedViewControllerWithWallId:(id)arg1 andWallType:(long long)arg2 andUserInfo:(id)arg3;
- (_Bool)isSameCirclePage:(id)arg1 withPage:(id)arg2;
- (id)jumpedViewControllerWithDefaultTab:(long long)arg1;
- (_Bool)isShutUpWithCircleId:(id)arg1 endTime:(double *)arg2;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)dataloadManagerCommonHandler:(id)arg1;
- (void)playMiniPlayer;
- (void)pauseMiniPlayer;
- (void)hideMiniPlayer;
- (void)showMiniPlayer;
- (void)pingbackPaoPaoLaunchWithS1:(unsigned long long)arg1 S2:(unsigned long long)arg2 extraParam:(id)arg3;
- (void)pingbackPaoPaoLaunchWithStrigS1:(id)arg1 stringS2:(id)arg2;
- (void)pingbackPaoPaoLaunchWithS1:(unsigned long long)arg1 S2:(unsigned long long)arg2;
- (void)pingbackClickPaoPaoInRankFromHalfPlayerWithStarId:(id)arg1 starName:(id)arg2;
- (void)pingbackShowMoreRankInHalfPlayer;
- (void)pingbackShowSeeYouAgainInFullPlayerWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackShowRankInHalfPlayerWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackClosePaoPaoNotificationInMyQIYI;
- (void)pingbackOpenPaoPaoNotifictionInMyQIYI;
- (void)pingbackShowInExploreImageBadge;
- (void)pingbackShowInExploreNumberBadge;
- (void)pingbackShowInExploreRedBadge;
- (void)pingbackShowInExploreNoBadge;
- (void)pingbackShowInExplore;
- (void)pingbackMiniPlayerDragHideWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackMiniPlayerClickCloseWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackMiniPlayerClickPlayWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackMiniPlayerClickPauseWithTvid:(id)arg1 albumId:(id)arg2;
- (void)pingbackEnterPaoPaoFromExploreImageBadge;
- (void)pingbackEnterPaoPaoFromExploreNumberBadge;
- (void)pingbackEnterPaoPaoFromExploreRedBadge;
- (void)pingbackEnterPaoPaoFromExploreNoBadge;
- (void)pingbackEnterPaoPaoFromFullPlayerTopWithTvid:(id)arg1 ablumdId:(id)arg2;
- (void)pingbackEnterPaoPaoFromHalfPlayerBannerWithTvid:(id)arg1 ablumdId:(id)arg2;
- (void)pingbackEnterPaoPaoFromPlayer;
- (void)setBlockAPNSStatus:(_Bool)arg1;
- (_Bool)getBlockAPNSStatusFromUserDefault;
- (void)blockAllAPNS:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)paopaoLogoutWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)paopaoSwitchAccount;
- (id)paopaoVersion;
- (void)paopaoLoginAnonymous;
- (void)paopaoLogin;
- (void)clearDataCacheForcedly;
- (void)cleanDB4NewVersion;
- (void)initJumpToMessageDict;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

