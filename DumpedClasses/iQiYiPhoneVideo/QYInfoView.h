//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITextView;

@interface QYInfoView : UIView
{
    UITextView *infoLabel_;
    UIImageView *infoImageView_;
    UILabel *_toastInfoLabel;
}

+ (void)quickRemoveInView:(id)arg1;
+ (id)quickShowInView:(id)arg1 withCustomView:(id)arg2 autoHide:(_Bool)arg3 fixedAlpha:(float)arg4 offsetY:(float)arg5;
+ (id)quickShowInView:(id)arg1 withCustomView:(id)arg2 autoHide:(_Bool)arg3 fixedAlpha:(float)arg4;
+ (id)quickShowInView:(id)arg1 withCustomView:(id)arg2 autoHide:(_Bool)arg3 withCenterY:(double)arg4;
+ (id)quickShowInView:(id)arg1 withCustomView:(id)arg2 autoHide:(_Bool)arg3;
+ (id)quickShowInView:(id)arg1 inFrame:(struct CGRect)arg2 withInfo:(id)arg3 andType:(int)arg4 autoHide:(_Bool)arg5;
+ (id)quickShowInView:(id)arg1 inFrame:(struct CGRect)arg2 withInfo:(id)arg3 andType:(int)arg4;
+ (id)quickShowInView:(id)arg1 withInfo:(id)arg2 andType:(int)arg3 autoHide:(_Bool)arg4;
+ (id)quickShowInView:(id)arg1 withInfo:(id)arg2 andType:(int)arg3;
+ (id)quickShowInView:(id)arg1 withInfo:(id)arg2 fixedAlpha:(float)arg3;
+ (id)quickShowInView:(id)arg1 withInfo:(id)arg2 withCenterY:(double)arg3;
+ (id)quickShowInView:(id)arg1 withInfo:(id)arg2;
+ (id)quickShowInView:(id)arg1 withStayInfo:(id)arg2;
+ (id)getToastViewByText:(id)arg1;
@property(retain, nonatomic) UILabel *toastInfoLabel; // @synthesize toastInfoLabel=_toastInfoLabel;
@property(retain, nonatomic) UITextView *infoLabel; // @synthesize infoLabel=infoLabel_;
- (void).cxx_destruct;
- (void)hide;
- (id)getImageViewByType:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withInfo:(id)arg2 andType:(int)arg3;
- (void)dealloc;

@end

