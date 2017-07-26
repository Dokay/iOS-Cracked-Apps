//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageCropToolBarDelegate.h"
#import "EditImageEmotionToolAttrDelegate.h"
#import "EditImageMosaicToolAttrDelegate.h"
#import "EditImageOperationDelegate.h"
#import "EditImagePenToolAttrDelegate.h"
#import "IMMAssetICloudExt.h"
#import "IUiUtilExt.h"
#import "UIGestureRecognizerDelegate.h"

@class EditImageCropGridView, EditImageCropOverlayView, EditImageCropToolBarView, EditImageEmotionToolAttrView, EditImageMosaicToolAttrView, EditImagePenToolAttrView, EditImageScrollView, MMTimer, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface EditImageIntialView : MMUIView <EditImageEmotionToolAttrDelegate, EditImageCropToolBarDelegate, UIGestureRecognizerDelegate, EditImageOperationDelegate, EditImagePenToolAttrDelegate, EditImageMosaicToolAttrDelegate, IUiUtilExt, IMMAssetICloudExt>
{
    _Bool m_hasClickEditButton;
    UIView *_topEditImageBar;
    UIView *_bottomEditImageBar;
    EditImagePenToolAttrView *_penAttrBar;
    EditImageMosaicToolAttrView *_mosaicAttrBar;
    EditImageEmotionToolAttrView *_emotionAttrView;
    UIView *_topGradientBar;
    UIView *_topGradientBar2;
    UIImageView *_gradientBgView;
    UIButton *_undoBtn;
    UIButton *_toolBtn;
    UIView *_toolsBarView;
    UIButton *_redoBtn;
    UIButton *_penBtn;
    UIButton *_mosaicBtn;
    UIButton *_textBtn;
    UIButton *_emotionBtn;
    UIButton *_cropBtn;
    UIButton *_cancelBtn;
    UIButton *_doneBtn;
    UIView *_bottomBarLine;
    unsigned int fromScene;
    unsigned int fromEntrance;
    _Bool _hasDisplayImage;
    _Bool _hasOriginalImage;
    double _iCloudDownloadProgress;
    _Bool _bIsiCloudImage;
    NSMutableArray *_tmpSaveDrawLayerArray;
    UIView *_iCloudMaskView;
    UILabel *_iCloudProgressLabel;
    UIView *_iCloudBarBackgroundView;
    UIImageView *_iCloudImage;
    _Bool _bHasAbort;
    _Bool _bUseOriginalImage;
    UIImage *_saveOriginalImage;
    _Bool _isAnimating;
    _Bool _isToolBarOccupy;
    _Bool _isCropOver;
    _Bool _isCropStartAnimationReady;
    _Bool _isAnimateEnable;
    int _lastToolType;
    id <EditImageInitialViewDelegate> _delegate;
    NSString *_assetURL;
    EditImageCropToolBarView *_cropToolBar;
    EditImageCropGridView *_cropGridView;
    UIPanGestureRecognizer *_gridPanGes;
    unsigned long long _cropEdge;
    double _naturalTopLength;
    EditImageCropOverlayView *_overlayView;
    MMTimer *_timer;
    EditImageScrollView *_eIScrollView;
    struct CGPoint _cropTouchPoint;
    struct CGRect _cropFrame;
    struct CGRect _cropOriginalFrame;
    struct CGRect _cropTouchFrame;
    struct CGRect _contentFrame;
}

@property(retain, nonatomic) EditImageScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(nonatomic) _Bool _isAnimateEnable; // @synthesize _isAnimateEnable;
@property(nonatomic) _Bool _isCropStartAnimationReady; // @synthesize _isCropStartAnimationReady;
@property(retain, nonatomic) MMTimer *_timer; // @synthesize _timer;
@property(nonatomic) _Bool _isCropOver; // @synthesize _isCropOver;
@property(nonatomic) _Bool _isToolBarOccupy; // @synthesize _isToolBarOccupy;
@property(nonatomic) _Bool _isAnimating; // @synthesize _isAnimating;
@property(nonatomic) int _lastToolType; // @synthesize _lastToolType;
@property(nonatomic) __weak EditImageCropOverlayView *_overlayView; // @synthesize _overlayView;
@property(nonatomic) double _naturalTopLength; // @synthesize _naturalTopLength;
@property(nonatomic) struct CGRect _contentFrame; // @synthesize _contentFrame;
@property(nonatomic) struct CGRect _cropTouchFrame; // @synthesize _cropTouchFrame;
@property(nonatomic) struct CGPoint _cropTouchPoint; // @synthesize _cropTouchPoint;
@property(nonatomic) unsigned long long _cropEdge; // @synthesize _cropEdge;
@property(retain, nonatomic) UIPanGestureRecognizer *_gridPanGes; // @synthesize _gridPanGes;
@property(retain, nonatomic) EditImageCropGridView *_cropGridView; // @synthesize _cropGridView;
@property(nonatomic) struct CGRect _cropOriginalFrame; // @synthesize _cropOriginalFrame;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(retain, nonatomic) EditImageCropToolBarView *_cropToolBar; // @synthesize _cropToolBar;
@property(retain, nonatomic) NSString *_assetURL; // @synthesize _assetURL;
@property(nonatomic) __weak id <EditImageInitialViewDelegate> _delegate; // @synthesize _delegate;
- (void).cxx_destruct;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onMainWindowFrameChanged;
- (void)dealloc;
- (void)endEditImageView;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)updateToolBtns;
- (void)updateBtns;
- (void)selectLastToolType;
- (void)reloadEmotionToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (void)reloadViews;
- (void)postInit;
- (void)checkiCloudImage;
- (void)abortEditImageAndShowMessage:(id)arg1;
- (void)afterDisplayImage:(id)arg1 withArray:(id)arg2;
- (void)initEditImageView;
- (void)initTopEditImageBar;
- (void)initEmotionToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)initPenToolAttrBar;
- (void)initiCloudMaskView;
- (void)initBottomEditImageBar;
- (void)setEmotionToolAttrViewHidden:(_Bool)arg1;
- (void)setToolsBarViewHidden:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(_Bool)arg1;
- (void)setEditImageAttrBarHiddenWithAnimation:(_Bool)arg1;
- (void)setEditImageToolBarHiddenWithAnimation:(_Bool)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)onEmotionEditImage:(id)arg1;
- (void)onCropEditImage:(id)arg1;
- (void)onTextEditImage:(id)arg1;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)undoMosaicEditImage;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned long long)arg1;
- (void)setSelectedWidthFromToolAttrView:(double)arg1;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (_Bool)shouldUseOriginImage:(struct CGSize)arg1;
- (void)onEditImage:(int)arg1 withEditEntrance:(unsigned int)arg2;
- (id)init;
- (void)clearEmotionToolOperation;
- (void)didSelectEmotion:(id)arg1;
- (void)onEmotionToolBarDoneBtnClicked:(_Bool)arg1;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)startEmotionTool;
- (void)clearOperation;
- (void)saveProperties;
- (void)goBackToEditView;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarCancelBtnClicked;
- (_Bool)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewDidZoom:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gridPanGestureRecognized:(id)arg1;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;
- (unsigned long long)cropEdgeForPoint:(struct CGPoint)arg1;
- (void)finishCroppingView;
- (void)croppingView;
- (void)triggerTimer;
- (void)resetTimer;
- (void)startTimer:(double)arg1;
- (void)startTimer;
- (void)matchOverlayViewToCropGridView;
- (void)trackFrameWhileAnimating;
- (void)moveContentToCenter;
- (void)checkForCanRevert;
- (void)revertLayoutContentImage;
- (void)restoreLayoutContentImage;
- (void)setScrollViewMaxMinZoomScale:(_Bool)arg1;
- (void)initContentImage;
- (void)startAnimateToCropFrame;
- (void)showCropToolBarViewWithAnimated:(_Bool)arg1;
- (void)postStartCropView;
- (void)startCropView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

