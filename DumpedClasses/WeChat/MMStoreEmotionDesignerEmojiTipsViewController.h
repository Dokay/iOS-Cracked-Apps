//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IStoreEmotionSingleDownloadMgrExt.h"

@class EmojiInfo, MMWebImageView, NSString, UIActivityIndicatorView, UIButton, UIView;

@interface MMStoreEmotionDesignerEmojiTipsViewController : MMWindowViewController <IStoreEmotionSingleDownloadMgrExt>
{
    EmojiInfo *m_emojiInfo;
    UIButton *m_backgroundBtn;
    UIView *m_contentView;
    UIActivityIndicatorView *m_activityIndicatorView;
    UIButton *m_saveBtn;
    UIButton *m_sendBtn;
    MMWebImageView *m_gifView;
    id <EmotionDesignerEmojiTipsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EmotionDesignerEmojiTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)sendEmotion;
- (void)saveEmotion;
- (void)hideWithFade;
- (void)configTwoOpBtns;
- (void)configIndicator;
- (void)configCancelBtn;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithEmojiInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

