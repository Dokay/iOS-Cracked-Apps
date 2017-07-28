//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMContentTagView, NMEssenceTipView, NSString, UIActionSheet, UIButton, UIImage, UIImageView, UILabel;

@interface NMResourceCommentHeaderView : UIView
{
    UIButton *_button;
    UIImageView *_coverImageView;
    UIImageView *_maskImageView;
    UIImageView *_playIconImageView;
    NMContentTagView *_tagView;
    NMEssenceTipView *_essenceView;
    UILabel *_nameLabel;
    UILabel *_otherLabel;
    UILabel *_creatorLabel;
    UIImageView *_arrowView;
    UIImage *_playIcon;
    UIActionSheet *_actionSheet;
    long long _resourceType;
    NSString *_resourceId;
    NSString *_coverImageUrl;
    UIImageView *_payMaskView;
    _Bool _usedForMyDownload;
    id _resource;
    id _delegate;
}

+ (double)height;
@property(nonatomic) _Bool usedForMyDownload; // @synthesize usedForMyDownload=_usedForMyDownload;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)_BILogForDjProgram:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)subTitle;
- (id)title;
- (id)resouceName;
- (id)playIconForResource:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
