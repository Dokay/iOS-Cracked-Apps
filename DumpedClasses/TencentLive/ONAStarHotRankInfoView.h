//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QLJCEONAStarHotRankInfo, QLStarHotRankH5Ctl, QLThemeListPanel, UIButton, UIImageView, UILabel;

@interface ONAStarHotRankInfoView : UIView
{
    UILabel *_rankLbl;
    UILabel *_rankDetlaLbl;
    UIImageView *_goArrow;
    QLThemeListPanel *_fansListPanel;
    UILabel *_starHotLbl;
    UILabel *_entireLbl;
    UIButton *_intentionBtn;
    QLJCEONAStarHotRankInfo *_correspondItem;
    NSString *_entireLblStr;
    NSString *_rankLblStr;
    NSString *_rankDetlaLblStr;
    NSString *_starHotLblStr;
    QLStarHotRankH5Ctl *_starHotRankH5Ctl;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLStarHotRankH5Ctl *starHotRankH5Ctl; // @synthesize starHotRankH5Ctl=_starHotRankH5Ctl;
@property(retain, nonatomic) NSString *starHotLblStr; // @synthesize starHotLblStr=_starHotLblStr;
@property(retain, nonatomic) NSString *rankDetlaLblStr; // @synthesize rankDetlaLblStr=_rankDetlaLblStr;
@property(retain, nonatomic) NSString *rankLblStr; // @synthesize rankLblStr=_rankLblStr;
@property(retain, nonatomic) NSString *entireLblStr; // @synthesize entireLblStr=_entireLblStr;
@property(retain, nonatomic) QLJCEONAStarHotRankInfo *correspondItem; // @synthesize correspondItem=_correspondItem;
@property(retain, nonatomic) UIButton *intentionBtn; // @synthesize intentionBtn=_intentionBtn;
@property(retain, nonatomic) UILabel *entireLbl; // @synthesize entireLbl=_entireLbl;
@property(retain, nonatomic) UILabel *starHotLbl; // @synthesize starHotLbl=_starHotLbl;
@property(retain, nonatomic) QLThemeListPanel *fansListPanel; // @synthesize fansListPanel=_fansListPanel;
@property(retain, nonatomic) UIImageView *goArrow; // @synthesize goArrow=_goArrow;
@property(retain, nonatomic) UILabel *rankDetlaLbl; // @synthesize rankDetlaLbl=_rankDetlaLbl;
@property(retain, nonatomic) UILabel *rankLbl; // @synthesize rankLbl=_rankLbl;
- (void).cxx_destruct;
- (void)webViewDidCloseH5Notification:(id)arg1;
- (void)showStarHotRankH5View:(id)arg1;
- (id)normalizeStarHotH5URL:(id)arg1;
- (void)openStarHotRankH5:(id)arg1;
- (void)didClickIntentionBtn:(id)arg1;
- (void)goWholeRankTopH5:(id)arg1;
- (void)parseHotRankInfo:(id)arg1;
- (double)adaptiveHeight;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

