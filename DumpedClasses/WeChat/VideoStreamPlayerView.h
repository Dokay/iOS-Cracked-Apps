//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SightPlayerView.h"

#import "VideoStreamPlayerViewModeDelegate.h"

@class CMessageWrap, NSArray, NSObject, NSString, VideoStreamInfo, VideoStreamKVReportLogic, VideoStreamPlayerViewModel, WCMediaItem;

@interface VideoStreamPlayerView : SightPlayerView <VideoStreamPlayerViewModeDelegate>
{
    NSObject *m_oPlaybackTimeObserver;
    _Bool m_bBuffering;
    NSArray *m_arrBufferTimes;
    unsigned int m_uBufferCount;
    _Bool m_bForcePause;
    CMessageWrap *m_oMessageWrap;
    WCMediaItem *m_oMediaItem;
    float _m_uiCurrentPlayedSec;
    VideoStreamKVReportLogic *m_oKVReportLogic;
    VideoStreamInfo *m_oVideoInfo;
    id <NSObject><AVPlayerStateControlDelegate> _controlDelegate;
    VideoStreamPlayerViewModel *_m_oPlayViewModel;
}

@property(retain, nonatomic) VideoStreamPlayerViewModel *m_oPlayViewModel; // @synthesize m_oPlayViewModel=_m_oPlayViewModel;
@property(nonatomic) float m_uiCurrentPlayedSec; // @synthesize m_uiCurrentPlayedSec=_m_uiCurrentPlayedSec;
@property(nonatomic) __weak id <NSObject><AVPlayerStateControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(retain, nonatomic) VideoStreamInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(retain, nonatomic) VideoStreamKVReportLogic *m_oKVReportLogic; // @synthesize m_oKVReportLogic;
- (void).cxx_destruct;
- (void)onVideoDownloadModeChange:(unsigned long long)arg1;
- (void)ShouldUpdateThumbImage:(id)arg1;
- (void)OnVideoDownloadErrorExpired:(_Bool)arg1;
- (void)tryToBeginPlayVideo;
- (void)tryToPlayAndStopLoading;
- (void)tryToPauseAndStartLoading;
- (void)updateVideoArgs;
- (void)setBufferState:(_Bool)arg1;
- (double)getVideoCurrentSeconde;
- (double)getVideoBufferedTime;
- (id)getAVPlayerItem;
- (id)getAVPlayer;
- (void)checkPlayerState;
- (void)reportKVArgs:(struct CDNDownloadResult)arg1;
- (void)calculateDataBufferState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitoringPlayback:(id)arg1;
- (void)startBuffering;
- (void)seekTo:(float)arg1;
- (void)pauseForce:(_Bool)arg1;
- (void)startPlayer;
- (void)playToEnd:(id)arg1;
- (id)buildAVItem;
- (void)initPlayer;
- (void)clearPlayer;
- (void)dealloc;
- (unsigned long long)startDownloadVideo;
- (id)initWithFrame:(struct CGRect)arg1 MediaItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 MessageWrap:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

