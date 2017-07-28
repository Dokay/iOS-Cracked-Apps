//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

@class ExploreAvatarView, SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedView, WDHeaderInfoCellData, WDHeaderInfoCellViewModel;

@interface WDCategoryHeaderInfoCellView : ExploreCellViewBase
{
    _Bool _isViewHighlighted;
    WDHeaderInfoCellData *_originData;
    WDHeaderInfoCellViewModel *_viewModel;
    SSThemedLabel *_loginTipLabel;
    SSThemedButton *_loginOutBoxView;
    SSThemedButton *_loginBoxView;
    ExploreAvatarView *_userImageView;
    SSThemedLabel *_userNameLabel;
    SSThemedLabel *_userInfoLabel;
    SSThemedView *_tipCircleView;
    SSThemedImageView *_arrowImageView;
    SSThemedButton *_transformWukongView;
    SSThemedImageView *_transformWukongViewBackgroundImageView;
    SSThemedButton *_transformWukongViewMoreInfoButton;
    SSThemedButton *_transformWukongViewCloseButton;
    SSThemedImageView *_transformWukongViewCloseIcon;
    SSThemedView *_lineView;
    SSThemedView *_tabBoxView;
    SSThemedView *_footerView;
}

+ (double)footerViewHeight;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SSThemedView *tabBoxView; // @synthesize tabBoxView=_tabBoxView;
@property(retain, nonatomic) SSThemedView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SSThemedImageView *transformWukongViewCloseIcon; // @synthesize transformWukongViewCloseIcon=_transformWukongViewCloseIcon;
@property(retain, nonatomic) SSThemedButton *transformWukongViewCloseButton; // @synthesize transformWukongViewCloseButton=_transformWukongViewCloseButton;
@property(retain, nonatomic) SSThemedButton *transformWukongViewMoreInfoButton; // @synthesize transformWukongViewMoreInfoButton=_transformWukongViewMoreInfoButton;
@property(retain, nonatomic) SSThemedImageView *transformWukongViewBackgroundImageView; // @synthesize transformWukongViewBackgroundImageView=_transformWukongViewBackgroundImageView;
@property(retain, nonatomic) SSThemedButton *transformWukongView; // @synthesize transformWukongView=_transformWukongView;
@property(retain, nonatomic) SSThemedImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedView *tipCircleView; // @synthesize tipCircleView=_tipCircleView;
@property(retain, nonatomic) SSThemedLabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) SSThemedLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) ExploreAvatarView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) SSThemedButton *loginBoxView; // @synthesize loginBoxView=_loginBoxView;
@property(retain, nonatomic) SSThemedButton *loginOutBoxView; // @synthesize loginOutBoxView=_loginOutBoxView;
@property(retain, nonatomic) SSThemedLabel *loginTipLabel; // @synthesize loginTipLabel=_loginTipLabel;
@property(retain, nonatomic) WDHeaderInfoCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WDHeaderInfoCellData *originData; // @synthesize originData=_originData;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
- (void).cxx_destruct;
- (void)layoutTransformWukongViewIfNeeded;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)closeTransformWukongViewClicked:(id)arg1;
- (void)transformWukongViewClicked:(id)arg1;
- (void)willAppear;
- (void)requestUserInfo;
- (id)tokenAttributeString;
- (void)refreshTabViewsByModels:(id)arg1;
- (void)refreshContentWithModel:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountLoginOut:(id)arg1;
- (void)loginAction:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fontSizeChanged;
- (void)refreshUI;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
