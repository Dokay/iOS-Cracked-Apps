//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JceObject, NSDate, NSTimer, UILabel;

@interface QLSprayLiveBulletinView : UIView
{
    double _serverTimeInterval;
    double _liveStartTime;
    NSDate *_jimuDataInterface_startTime;
    NSDate *_jimuDataInterface_endTime;
    _Bool _freshTimerByStreamID;
    _Bool _destroyTimer;
    id _delegate;
    JceObject *_videoInfoOfJCEObject;
    _Bool _isLightPlayerMode;
    UILabel *_broadcastStatusLabel;
    UILabel *_countdownLabel;
    NSTimer *_countDownTimer;
}

@property(nonatomic) _Bool isLightPlayerMode; // @synthesize isLightPlayerMode=_isLightPlayerMode;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UILabel *broadcastStatusLabel; // @synthesize broadcastStatusLabel=_broadcastStatusLabel;
- (void).cxx_destruct;
- (void)updateContextByBulletinBoard:(id)arg1;
- (void)updateContextByLivePreviewBoard:(id)arg1;
- (void)updateContextByTomLiveBoard:(id)arg1;
- (void)updateBroadcastRemindView:(unsigned long long)arg1 withVideoInfoOfJCEObject:(id)arg2;
- (void)updateUIStatusforStreamId;
- (void)updateEndState;
- (void)updateBeginningState;
- (void)updateBeginState;
- (void)updateSearchState;
- (void)updateVideoInfoFailed;
- (void)updateLiveJCEObjectStatus:(unsigned long long)arg1;
- (void)freshCountDownTitleByDateComponents:(id)arg1;
- (id)calcCountDown:(id)arg1 andBeginTime:(id)arg2;
- (id)getCorrectLocalDate;
- (void)p_customLayoutSubviews;
- (void)stopCountDownTimer;
- (void)layoutSubviews;
- (id)init;

@end
