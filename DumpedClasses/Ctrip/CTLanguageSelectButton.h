//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface CTLanguageSelectButton : UIView
{
    NSString *_title;
    UIButton *_button;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_rightOfImageView;
    NSLayoutConstraint *_leftOfLabel;
}

@property(retain, nonatomic) NSLayoutConstraint *leftOfLabel; // @synthesize leftOfLabel=_leftOfLabel;
@property(retain, nonatomic) NSLayoutConstraint *rightOfImageView; // @synthesize rightOfImageView=_rightOfImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)initViewWithSuperView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
