//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBInstantGameUIMetrics, UIButton;
@protocol FBInstantGameEndGameHeaderViewDelegate;

@interface FBInstantGameEndGameHeaderView : UIView
{
    FBInstantGameUIMetrics *_metrics;
    UIButton *_gameInfoButton;
    UIButton *_scoreShareButton;
    id <FBInstantGameEndGameHeaderViewDelegate> _delegate;
}

+ (double)headerViewHeight;
@property(nonatomic) __weak id <FBInstantGameEndGameHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_userDidTapScoreShareButton:(id)arg1;
- (void)_userDidTapGameInfoButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

