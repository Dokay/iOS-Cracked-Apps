//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface KBCUserIconView : UIView
{
    UIImageView *_imgView;
}

@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)userDidLogout:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)reloadSubviews;
- (void)layoutMySubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)userIcon;

@end

