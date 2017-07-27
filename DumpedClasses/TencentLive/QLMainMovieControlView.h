//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMovieBaseControlView.h"

#import "KKMediaPlayerEventProtocol.h"
#import "QLActionMenuDelegate.h"
#import "QLBanabaCommentButtonDelegate.h"
#import "QLBanabaSettingPanelProtocol.h"
#import "QLBaseInputViewDelegate.h"
#import "QLLiveTitleUpdateDelegate.h"
#import "QLMPClarityListViewDelegate.h"
#import "QLMPComplexPanelViewDelegate.h"
#import "QLMediaPlayerFunctionDelegate.h"
#import "QLMediaViewRecordVideoCtlDelegate.h"
#import "QLMovieDownloadDelegate.h"
#import "QLReportReasonListViewDelegate.h"
#import "QLRequestModelDelegate.h"
#import "QLVideoDrawingDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class HVMPBottomView, HVMPTopView2, KKVideoInfo, NSMutableArray, NSMutableDictionary, NSString, QLBanabaSettingPanel, QLDownloadPanelController, QLHollywoodBanabaKeyBoardViewController, QLJCECacheListModel, QLMPClarityListView, QLMPComplexPanelView, QLMediaViewRecordVideoCtl, QLPlayerDisplayButton, QLPlayerRightListView, QLReportReasonListView, QLScreenShotMgr, QLUnicomGuideView, UIButton, UIImage, UIImageView, UILabel, UIViewController<QLShareDataSource>;

@interface QLMainMovieControlView : QLMovieBaseControlView <QLBanabaSettingPanelProtocol, QLBaseInputViewDelegate, QLBanabaCommentButtonDelegate, QLMovieDownloadDelegate, QLRequestModelDelegate, QLMediaViewRecordVideoCtlDelegate, UIGestureRecognizerDelegate, QLActionMenuDelegate, QLMPClarityListViewDelegate, QLMPComplexPanelViewDelegate, QLLiveTitleUpdateDelegate, QLVideoDrawingDelegate, KKMediaPlayerEventProtocol, QLMediaPlayerFunctionDelegate, QLReportReasonListViewDelegate>
{
    _Bool banabaPlayingForPlayer;
    _Bool isShowingTips;
    _Bool shouldShowShareTips;
    _Bool shouldAnimate;
    long long selectedPhotoCounts;
    UIImageView *bubbleContainer;
    UILabel *tipShareLbl;
    UIImageView *tipShareImgView;
    NSString *_videoTitle;
    double _timestampForBanaba;
    _Bool _showBarAfterRightDisappeared;
    _Bool _isTipBubbleAnimating;
    _Bool _downloadable;
    _Bool _downloadButtonEnable;
    _Bool _downloadHidden;
    _Bool _favoriteButtonEnable;
    _Bool _favoriteHidden;
    _Bool _shareHidden;
    _Bool _canShowMomentTip;
    _Bool _canShowRightControlButtons;
    int _downloadRight;
    UIButton *_banabaCommentButton;
    QLPlayerRightListView *_rightListView;
    QLMPClarityListView *_clarityListView;
    QLMPComplexPanelView *_complexPanelView;
    QLReportReasonListView *_reportReasonListView;
    id _fromViewCtl;
    HVMPTopView2 *_topView;
    HVMPBottomView *_bottomView;
    NSString *_currentVideoFormat;
    id <QLDownloadVideoSizeDelegate><NSObject> _sizeDelegate;
    double _currentPlayerTime;
    long long _playerType;
    QLHollywoodBanabaKeyBoardViewController *_hollywoodBanabaKeyBoardViewController;
    QLScreenShotMgr *_screenShotMgr;
    QLBanabaSettingPanel *_banabaSettingPanel;
    UIViewController<QLShareDataSource> *_actionShareSender;
    NSString *_shareTipsText;
    UIImage *_shareTipsImage;
    unsigned long long _tipsType;
    QLUnicomGuideView *_unicomGuideView;
    UIButton *_clipButton;
    KKVideoInfo *_rootPlayerVideoInfo;
    KKVideoInfo *_drawingVideoInfo;
    long long _rootPlayerInterfaceType;
    double _rootPlayerPlayingTime;
    long long _rootPlayerLastPlayIndex;
    long long _preWatchType;
    UIButton *_openVipBtn;
    QLJCECacheListModel *_cacheListModel;
    NSMutableDictionary *_sizeDict;
    NSMutableArray *_aryBottomRightEntrys;
    NSMutableArray *_aryTopEntrys;
    long long _topViewOriginY;
    double _bottomViewOriginY;
    QLDownloadPanelController *_downloadPanelCtl;
    UIButton *_carrierButton;
    QLPlayerDisplayButton *_displayButton;
    QLMediaViewRecordVideoCtl *_recordVideoCtl;
}

@property(retain, nonatomic) QLMediaViewRecordVideoCtl *recordVideoCtl; // @synthesize recordVideoCtl=_recordVideoCtl;
@property(nonatomic) _Bool canShowRightControlButtons; // @synthesize canShowRightControlButtons=_canShowRightControlButtons;
@property(retain, nonatomic) QLPlayerDisplayButton *displayButton; // @synthesize displayButton=_displayButton;
@property(retain, nonatomic) UIButton *carrierButton; // @synthesize carrierButton=_carrierButton;
@property(retain, nonatomic) QLDownloadPanelController *downloadPanelCtl; // @synthesize downloadPanelCtl=_downloadPanelCtl;
@property(nonatomic) double bottomViewOriginY; // @synthesize bottomViewOriginY=_bottomViewOriginY;
@property(nonatomic) long long topViewOriginY; // @synthesize topViewOriginY=_topViewOriginY;
@property(retain, nonatomic) NSMutableArray *aryTopEntrys; // @synthesize aryTopEntrys=_aryTopEntrys;
@property(retain, nonatomic) NSMutableArray *aryBottomRightEntrys; // @synthesize aryBottomRightEntrys=_aryBottomRightEntrys;
@property(retain, nonatomic) NSMutableDictionary *sizeDict; // @synthesize sizeDict=_sizeDict;
@property(retain, nonatomic) QLJCECacheListModel *cacheListModel; // @synthesize cacheListModel=_cacheListModel;
@property(retain, nonatomic) UIButton *openVipBtn; // @synthesize openVipBtn=_openVipBtn;
@property(nonatomic) long long preWatchType; // @synthesize preWatchType=_preWatchType;
@property(nonatomic) long long rootPlayerLastPlayIndex; // @synthesize rootPlayerLastPlayIndex=_rootPlayerLastPlayIndex;
@property(nonatomic) double rootPlayerPlayingTime; // @synthesize rootPlayerPlayingTime=_rootPlayerPlayingTime;
@property(nonatomic) long long rootPlayerInterfaceType; // @synthesize rootPlayerInterfaceType=_rootPlayerInterfaceType;
@property(retain, nonatomic) KKVideoInfo *drawingVideoInfo; // @synthesize drawingVideoInfo=_drawingVideoInfo;
@property(retain, nonatomic) KKVideoInfo *rootPlayerVideoInfo; // @synthesize rootPlayerVideoInfo=_rootPlayerVideoInfo;
@property(nonatomic) _Bool canShowMomentTip; // @synthesize canShowMomentTip=_canShowMomentTip;
@property(retain, nonatomic) UIButton *clipButton; // @synthesize clipButton=_clipButton;
@property(retain, nonatomic) QLUnicomGuideView *unicomGuideView; // @synthesize unicomGuideView=_unicomGuideView;
@property(nonatomic) unsigned long long tipsType; // @synthesize tipsType=_tipsType;
@property(retain, nonatomic) UIImage *shareTipsImage; // @synthesize shareTipsImage=_shareTipsImage;
@property(copy, nonatomic) NSString *shareTipsText; // @synthesize shareTipsText=_shareTipsText;
@property UIViewController<QLShareDataSource> *actionShareSender; // @synthesize actionShareSender=_actionShareSender;
@property(nonatomic) _Bool shareHidden; // @synthesize shareHidden=_shareHidden;
@property(nonatomic) _Bool favoriteHidden; // @synthesize favoriteHidden=_favoriteHidden;
@property(nonatomic) _Bool favoriteButtonEnable; // @synthesize favoriteButtonEnable=_favoriteButtonEnable;
@property(nonatomic) _Bool downloadHidden; // @synthesize downloadHidden=_downloadHidden;
@property(nonatomic) _Bool downloadButtonEnable; // @synthesize downloadButtonEnable=_downloadButtonEnable;
@property(nonatomic) _Bool downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) int downloadRight; // @synthesize downloadRight=_downloadRight;
@property(retain, nonatomic) QLBanabaSettingPanel *banabaSettingPanel; // @synthesize banabaSettingPanel=_banabaSettingPanel;
@property(nonatomic) _Bool isTipBubbleAnimating; // @synthesize isTipBubbleAnimating=_isTipBubbleAnimating;
@property(retain, nonatomic) QLScreenShotMgr *screenShotMgr; // @synthesize screenShotMgr=_screenShotMgr;
@property(retain, nonatomic) QLHollywoodBanabaKeyBoardViewController *hollywoodBanabaKeyBoardViewController; // @synthesize hollywoodBanabaKeyBoardViewController=_hollywoodBanabaKeyBoardViewController;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) _Bool showBarAfterRightDisappeared; // @synthesize showBarAfterRightDisappeared=_showBarAfterRightDisappeared;
@property(nonatomic) double currentPlayerTime; // @synthesize currentPlayerTime=_currentPlayerTime;
@property(nonatomic) id <QLDownloadVideoSizeDelegate><NSObject> sizeDelegate; // @synthesize sizeDelegate=_sizeDelegate;
@property(copy, nonatomic) NSString *currentVideoFormat; // @synthesize currentVideoFormat=_currentVideoFormat;
@property(readonly, retain, nonatomic) HVMPBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) HVMPTopView2 *topView; // @synthesize topView=_topView;
@property(nonatomic) id fromViewCtl; // @synthesize fromViewCtl=_fromViewCtl;
@property(retain, nonatomic) QLReportReasonListView *reportReasonListView; // @synthesize reportReasonListView=_reportReasonListView;
@property(retain, nonatomic) QLMPComplexPanelView *complexPanelView; // @synthesize complexPanelView=_complexPanelView;
@property(retain, nonatomic) QLMPClarityListView *clarityListView; // @synthesize clarityListView=_clarityListView;
@property(retain, nonatomic) QLPlayerRightListView *rightListView; // @synthesize rightListView=_rightListView;
@property(retain, nonatomic) UIButton *banabaCommentButton; // @synthesize banabaCommentButton=_banabaCommentButton;
- (void).cxx_destruct;
- (struct CGPoint)pointOfShowRoomTip;
- (unsigned long long)level;
- (void)onSeeBackStateChange:(id)arg1;
- (void)cancleShareCaption;
- (void)shareCaption;
- (void)didLongPress:(id)arg1;
- (long long)currentMediaViewLayerStatus;
- (_Bool)shouldShowMovieThumb;
- (_Bool)shouldVisibleBanabaCommentEntry;
- (_Bool)shouldShowMaskImageWhenSwitchToBeehiveNet;
- (_Bool)shouldOpenBanaba;
- (void)flushBanabaDelegate;
- (double)getBottomViewHeight;
- (void)handleErrorForPlayerError;
- (_Bool)needShowScreenLock;
- (_Bool)needToPlayWhileEnterForeground;
- (void)showLightPlayerStyleUI:(_Bool)arg1;
- (void)replaceMainUI:(_Bool)arg1 withViews:(id)arg2;
- (void)replacePlayButton:(_Bool)arg1 withView:(id)arg2;
- (void)updateBusinessEntryUIs;
- (void)networkChange;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (id)getMovieDownloadKey;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadVideoSizeWithLid:(id)arg1 coverId:(id)arg2 videoId:(id)arg3 requestType:(unsigned long long)arg4;
- (void)loadCacheItem;
- (void)loadVideoFileSize;
- (void)updateDownloadState:(id)arg1;
- (void)updateDownloadButtonState;
- (void)resetClarityChange;
- (void)didVipStateChangeClarity:(id)arg1;
- (void)didVipStateChange:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateFuncItems;
- (void)clickInteractiveVoteShareWith:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (void)didSizeModelRequestFinished:(id)arg1;
- (double)screenWidth;
- (_Bool)shouldResponseVideoRecordActionEvent:(id)arg1;
- (id)recordVideoCtl:(id)arg1 mediaRootCtl:(id)arg2;
- (void)resumePlayForVoiceInput;
- (void)momentInputViewDidDismiss:(id)arg1;
- (void)momentInputView:(id)arg1 willShowInView:(id)arg2;
- (void)momentInputViewDidPressSendButton:(id)arg1;
- (void)showBanabaCommentButton:(_Bool)arg1 doLayout:(_Bool)arg2;
- (void)banabaStatusChange;
- (void)showBanabaCommentButton:(_Bool)arg1;
- (_Bool)touchUpinsideOnBanabaKeyboard:(struct CGPoint)arg1;
- (void)banabaCommentButtonAction:(id)arg1;
- (void)openBanabaKeyboard;
- (void)pressLightBanabaCommentBtn;
- (void)hideLightBanabaView;
- (void)banabaSwitched;
- (void)showCarrierTipsInMainmovieView:(_Bool)arg1;
- (void)showCarrierTips;
- (void)hiddenedHandlePanelFromGesture:(_Bool)arg1;
- (void)makeChatRoomUIHidden:(_Bool)arg1;
- (void)listViewHiddened;
- (long long)getPlayerViewStyle;
- (void)dismissComplexPanelView;
- (void)didComplexPanelEndScroll;
- (void)didComplexPanelBeginScroll;
- (void)endCutVideo;
- (void)didClickCompleteBtn:(id)arg1;
- (void)didClickCancelBtn;
- (void)didClickTipBubble:(id)arg1;
- (void)cancelReport;
- (void)choseReportReason:(id)arg1;
- (void)reportSubmit:(id)arg1;
- (void)didShareClicked:(unsigned long long)arg1;
- (_Bool)shouldSleepAfterCurrentPlayback;
- (void)didSelectSleepOptionWith:(_Bool)arg1;
- (void)didAudioBtnClicked;
- (void)didSelectBanabaSetting;
- (void)didBanabaSettingBtnClicked;
- (_Bool)shouldShowSleepPanel;
- (double)getCurrentPlayerRate;
- (void)didSelectRate:(double)arg1;
- (_Bool)shouldShowRatePanel;
- (void)didReportClicked;
- (void)didDownloadWithSizeDict:(id)arg1;
- (void)startDownload;
- (void)didDownloadClicked;
- (void)didFavoriteClicked:(_Bool)arg1;
- (void)didBrightnessSliderChanged;
- (void)didVolumeSliderChanged;
- (void)didShowClarityView:(id)arg1;
- (id)getClarityAdsInfo;
- (_Bool)isWhymeLive;
- (void)dismissClarityViewFromGesture:(_Bool)arg1;
- (id)clarityListCurrentVideoFormat;
- (void)didClarityChanged:(id)arg1 shouldReload:(_Bool)arg2;
- (void)didClarityListEndScroll;
- (void)didClarityListBeginScroll;
- (id)mediaPlayer;
- (void)didClickDisplayButton;
- (_Bool)isLoggedIn;
- (void)actionMenu:(id)arg1 didSelectAtIndex:(long long)arg2;
- (_Bool)fullScreenPlayShareToMomentTime;
- (void)manllyPauseCurrentPlay;
- (void)clipPlayScreen;
- (void)playFlashView:(CDUnknownBlockType)arg1;
- (void)didSingleTap:(id)arg1;
- (id)getDownloadBasicInfo;
- (void)openDownloadController;
- (void)downloadVideo:(id)arg1;
- (void)iapDetailClose:(id)arg1;
- (_Bool)isShowingDownloadPannel;
- (void)clearDownloadPanelResources;
- (id)getCurrentVideoID;
- (void)refreshAttentionState;
- (void)setMoreButtonHidden:(_Bool)arg1;
- (_Bool)isShowingCuttingVideoView;
- (_Bool)isCuttingVideo;
- (_Bool)isSimpleVideo;
- (id)getReportDataDicWithProjectType:(_Bool)arg1;
- (void)controlListView:(id)arg1;
- (void)shareClick:(id)arg1;
- (_Bool)loadedWithCurrentVideo;
- (int)downloadEntranceRight;
- (void)updateCurrentVideoComplexPanelViewState;
- (void)createComplexPanelView;
- (void)createClarityListView;
- (void)hiddenAllListView_Out;
- (void)hiddenAllListView;
- (void)dismissAllListView;
- (void)createRightListView;
- (Class)classOfListStyle;
- (int)oldListStyleMaker;
- (id)customViewForShareActionInterface;
- (void)createShareListView;
- (_Bool)checkDownloadEnableState;
- (void)dismissPopups;
- (void)playerPlaybackChanged:(long long)arg1;
- (void)playerLoadstateChanged:(long long)arg1 videoType:(long long)arg2 firstPlay:(_Bool)arg3;
- (void)onRemoteControlButtonClicked:(id)arg1;
- (void)hideRemoteControlRenderButton:(_Bool)arg1;
- (void)enableRemoteControlRenderButton:(_Bool)arg1;
- (void)adjustControlForDLNA:(_Bool)arg1;
- (void)circleEnd;
- (void)circleMinus:(double)arg1;
- (void)circlePlus:(double)arg1;
- (void)circleBegin:(_Bool)arg1;
- (_Bool)playNextCover;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)isPauseAndByUser;
- (void)changePlayButtonImageAndStatus:(_Bool)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)controlMoviePlayStatusWithUser:(_Bool)arg1;
- (void)performPlayAction;
- (_Bool)shouldPausePayVideo;
- (void)checkPayViewWhenPlaying;
- (void)showPresentButton:(_Bool)arg1 withImage:(id)arg2;
- (void)setLivePlaybackSupported:(_Bool)arg1;
- (void)showClarityButton:(_Bool)arg1;
- (void)showListButton:(_Bool)arg1 withTitle:(id)arg2 animated:(_Bool)arg3;
- (void)updatePlayBtnStatusIfInDLNAingError;
- (void)clearDLNA;
- (void)setDownloadState:(_Bool)arg1;
- (void)controlBtnTitle:(id)arg1 withMask:(long long)arg2;
- (void)controlHiddenState:(_Bool)arg1 withMask:(long long)arg2;
- (void)controlEnableState:(_Bool)arg1 withMask:(long long)arg2;
- (void)hideRedIcon;
- (void)clearScreenShots;
- (id)getScreenShots;
- (void)openVipBtnClick:(id)arg1;
- (void)iapViewActionWithButton:(id)arg1;
- (void)setIapViewShowButtonsType:(long long)arg1;
- (void)switchNoPreWatchVideo;
- (void)configButtonWithPayInfo:(id)arg1;
- (void)hiddenPewWatchTopView;
- (void)updateUIWhenCouponPaySuccess;
- (void)vipLoginedConfigTopViewWithVideoPayType:(long long)arg1;
- (void)setPreWatchTipViewButtonTitleString:(id)arg1;
- (void)videoSwitchUpdateUI;
- (void)updateSliderCurrentTimeToZero;
- (id)currentScreenShotMgr;
- (void)clipButtonDown:(id)arg1;
- (void)switchMutilCameraShowCurrentImage:(id)arg1;
- (void)forceShowCameraViewToTop;
- (_Bool)shouldAutorotateMutilCamera;
- (void)showLiveMutilCameraView;
- (struct CGPoint)pointOfMutilCameraTip;
- (void)setShowLiveMutilCameraButton:(_Bool)arg1;
- (id)mutilCameraReportDic;
- (id)arrayWithCurentRelyMarkScoreDesc;
- (id)arrayWithCurentRelyVideoList;
- (id)arrayWithCurrentVideoListArray;
- (void)tipBubbleShowAnimation;
- (void)showGiftTipBubble:(id)arg1 imageTip:(id)arg2;
- (void)showTipBubble:(id)arg1 imageTip:(id)arg2;
- (void)showShareTips;
- (void)hideRightControlView;
- (void)updateRightControlButtons;
- (_Bool)barrageEnabled;
- (void)updateRightControlButtonsWhenCuttingVideoStatusChange;
- (void)canRightControlButtonsShow:(_Bool)arg1;
- (void)hiddenListButton;
- (void)hiddenClarityVipTipsView;
- (void)hideViewsWhenNetworkUnAvailable;
- (void)hideNotControlViews;
- (void)canShowTipBuddble:(_Bool)arg1;
- (void)hideTipBubble;
- (void)hideAllControlViews;
- (void)bubbleContainerHidden:(_Bool)arg1;
- (_Bool)shouldPanByUserSet;
- (void)showControlAnimation:(_Bool)arg1 launchAnimationFunc:(_Bool)arg2;
- (void)updateOpenVIPButtonHideOrNot;
- (void)showAllControlViews;
- (id)controlBottomView;
- (void)showAllControlViewsNeedAnimation:(_Bool)arg1;
- (void)controlTopAndBottomViewShow:(_Bool)arg1 animation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOpenVipBtnAlpha;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)forbidenClickBanaba;
- (_Bool)checkViewShowing:(id)arg1;
- (void)showThumbViewAt:(double)arg1;
- (_Bool)calcClarityViewWithClaritesArray:(id)arg1;
- (void)controlShowPrompt:(_Bool)arg1 withModifyPlayButton:(_Bool)arg2;
- (id)dicForCurrentPlayItem;
- (void)setVideoTitle:(id)arg1;
- (id)videoTitle;
- (void)viewWillAppear;
- (void)updateGiftButton;
- (void)forceUpdateVideoList;
- (double)currentPlayTime;
- (double)topViewHeight;
- (_Bool)bSeeking;
- (void)adjustSubviewsLevel:(_Bool)arg1 withSubView:(id)arg2;
- (int)styleForIapViewLeftBtnToPaySingleWhenPlayNeedPaySeries;
- (void)setupProgressTimer;
- (void)flushInterfaceWithMainCtl:(id)arg1 withLastCtl:(id)arg2;
- (void)showDownloadAndPlayTipsWithCurrentTime:(double)arg1;
- (void)flushShowTipViewAfterpreWatchAutoFinish:(_Bool)arg1;
- (void)preWatchFinishWithTime__bridge:(double)arg1;
- (void)flushPreWatchWithCurrntTime:(double)arg1;
- (void)flushPlayerProgress;
- (void)updatePlayNextButtonClickEnable;
- (void)setPlayNextButtonHide:(_Bool)arg1;
- (void)seekByPercent:(double)arg1;
- (void)updateControllViewFrame;
- (void)hideChatRoomButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutBubbleTipContainerIfNeeded;
- (void)layoutOpenVIPPosition;
- (double)calculateOpenVipBtnWidth;
- (void)layoutRightButtons;
- (id)sliderView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pageDescription;
- (void)dealloc;
- (double)ttvc_offsetAtYAxisPostion;
- (_Bool)ttvc_checkTheEnvironment:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
