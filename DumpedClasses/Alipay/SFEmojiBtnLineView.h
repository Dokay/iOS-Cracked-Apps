//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SFAtBadgeButton, SFLbsButton, UIButton;

@interface SFEmojiBtnLineView : UIView
{
    int _editStyle;
    id <SFEmojiBtnLineViewDelegate> _delegate;
    CDUnknownBlockType _tipsBlock;
    UIButton *_emojiBtn;
    UIButton *_videoBtn;
    UIButton *_pictureBtn;
    SFLbsButton *_locationBtn;
    SFAtBadgeButton *_remindBtn;
}

@property(retain, nonatomic) SFAtBadgeButton *remindBtn; // @synthesize remindBtn=_remindBtn;
@property(retain, nonatomic) SFLbsButton *locationBtn; // @synthesize locationBtn=_locationBtn;
@property(retain, nonatomic) UIButton *pictureBtn; // @synthesize pictureBtn=_pictureBtn;
@property(retain, nonatomic) UIButton *videoBtn; // @synthesize videoBtn=_videoBtn;
@property(retain, nonatomic) UIButton *emojiBtn; // @synthesize emojiBtn=_emojiBtn;
@property(copy, nonatomic) CDUnknownBlockType tipsBlock; // @synthesize tipsBlock=_tipsBlock;
@property(nonatomic) __weak id <SFEmojiBtnLineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int editStyle; // @synthesize editStyle=_editStyle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)remindBtnTaped:(id)arg1;
- (void)locationBtnTaped:(id)arg1;
- (void)pictureBtnTaped:(id)arg1;
- (void)videoBtnTaped:(id)arg1;
- (void)emojiTaped:(id)arg1;
- (void)refreshWithToolbarString:(id)arg1;
- (void)refreshLocationBtnWithLbs:(_Bool)arg1;
- (void)refreshRemindBtnWithNum:(long long)arg1;
- (void)performTipsBlock;
- (id)initWithHeight:(double)arg1 emojiBtnFrame:(struct CGRect)arg2 showAtBottom:(_Bool)arg3 superViewHeight:(double)arg4;
- (id)tipsRemindBtn;
- (id)tipsLocationBtn;

@end
