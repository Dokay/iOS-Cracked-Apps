//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMCarModePlayView, UIButton;

@protocol NMCarModePlayViewDelegate <NSObject>
- (void)carModePlayView:(NMCarModePlayView *)arg1 rotateButtonClicked:(UIButton *)arg2;
- (void)nextSongByGestureIncarModePlayView:(NMCarModePlayView *)arg1;
- (void)preSongByGestureIncarModePlayView:(NMCarModePlayView *)arg1;
- (void)carModePlayView:(NMCarModePlayView *)arg1 nextCtrlButtonClicked:(UIButton *)arg2;
- (void)carModePlayView:(NMCarModePlayView *)arg1 playPauseCtrlButtonClicked:(UIButton *)arg2;
- (void)carModePlayView:(NMCarModePlayView *)arg1 preCtrlButtonClicked:(UIButton *)arg2;
- (void)carModePlayView:(NMCarModePlayView *)arg1 starButtonClicked:(UIButton *)arg2;
- (void)carModePlayView:(NMCarModePlayView *)arg1 radioButtonClicked:(UIButton *)arg2;
- (void)carModePlayView:(NMCarModePlayView *)arg1 closeButtonClicked:(UIButton *)arg2;
@end
