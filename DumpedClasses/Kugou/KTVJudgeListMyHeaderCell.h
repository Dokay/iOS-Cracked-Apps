//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

#import "CMPopTipViewDelegate.h"

@class CMPopTipView, KGThemeImageView, KGThemeLabel, KtvUserAvatar, NSString, UIImageView;

@interface KTVJudgeListMyHeaderCell : KFCommedTableViewCell <CMPopTipViewDelegate>
{
    KGThemeImageView *themeBg;
    KtvUserAvatar *userHeadImg;
    KGThemeLabel *userNameLab;
    KGThemeLabel *tipLab;
    KGThemeLabel *numLab;
    KGThemeLabel *rateTipLab;
    KGThemeLabel *rateLab;
    UIImageView *earIcon;
    CMPopTipView *_popTipView;
    NSString *judgeMedalDay;
    float _topViewHeight;
}

@property(nonatomic) float topViewHeight; // @synthesize topViewHeight=_topViewHeight;
- (void).cxx_destruct;
- (void)popTipViewWasDismissedByUser:(id)arg1;
- (void)dismissRulePopTip;
- (void)earTapTip;
- (void)setJudgeInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

