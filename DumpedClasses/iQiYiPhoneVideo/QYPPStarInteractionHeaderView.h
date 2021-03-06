//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface QYPPStarInteractionHeaderView : UIView
{
    UILabel *_name;
    UIImageView *_icon;
    UILabel *_content;
    UITapGestureRecognizer *_tapRecognizer;
    CDUnknownBlockType _viewClick;
}

@property(copy, nonatomic) CDUnknownBlockType viewClick; // @synthesize viewClick=_viewClick;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)nameTapAction;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setClickEvent:(CDUnknownBlockType)arg1;
- (void)setInteractionContent:(id)arg1;
- (void)setStarName:(id)arg1;
- (void)reset;
- (void)dealloc;

@end

