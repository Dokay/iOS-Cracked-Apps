//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CAAnimationDelegate.h"
#import "imageViewDelegate.h"

@class MMImageView, MMTimer, NSString, UIImageView, UIView;

@interface BottleAnimation : MMObject <imageViewDelegate, CAAnimationDelegate>
{
    unsigned int mAnimationStatus;
    _Bool mIsBalloonAnimationEnabled;
    unsigned int mLightAnimationStatus;
    id <BottleAnimationDelegate><NSObject> delegate;
    UIView *mCanvasView;
    UIImageView *mBalloonImageView;
    MMTimer *mLightTimer;
    UIImageView *mMoonImageView;
    UIImageView *mStarImageView;
    UIImageView *mLightLImageView;
    UIImageView *mLightMImageView;
    UIImageView *mLightRImageView;
    UIImageView *mEmptyBottleImageView;
    UIImageView *mSuckedObjectImageView;
    UIImageView *mWaterImageView;
    UIImageView *mWater2ImageView;
    UIImageView *mWater3ImageView;
    MMImageView *mFishStarImageView;
    MMImageView *mFishBottleImageView;
    UIView *mFishBottleTipView;
    struct CGPoint mBalloonToPoint;
}

@property(retain, nonatomic) UIView *mFishBottleTipView; // @synthesize mFishBottleTipView;
@property(retain, nonatomic) MMImageView *mFishBottleImageView; // @synthesize mFishBottleImageView;
@property(retain, nonatomic) MMImageView *mFishStarImageView; // @synthesize mFishStarImageView;
@property(retain, nonatomic) UIImageView *mWater3ImageView; // @synthesize mWater3ImageView;
@property(retain, nonatomic) UIImageView *mWater2ImageView; // @synthesize mWater2ImageView;
@property(retain, nonatomic) UIImageView *mWaterImageView; // @synthesize mWaterImageView;
@property(retain, nonatomic) UIImageView *mSuckedObjectImageView; // @synthesize mSuckedObjectImageView;
@property(retain, nonatomic) UIImageView *mEmptyBottleImageView; // @synthesize mEmptyBottleImageView;
@property(retain, nonatomic) UIImageView *mLightRImageView; // @synthesize mLightRImageView;
@property(retain, nonatomic) UIImageView *mLightMImageView; // @synthesize mLightMImageView;
@property(retain, nonatomic) UIImageView *mLightLImageView; // @synthesize mLightLImageView;
@property(retain, nonatomic) UIImageView *mStarImageView; // @synthesize mStarImageView;
@property(retain, nonatomic) UIImageView *mMoonImageView; // @synthesize mMoonImageView;
@property(retain, nonatomic) MMTimer *mLightTimer; // @synthesize mLightTimer;
@property(retain, nonatomic) UIImageView *mBalloonImageView; // @synthesize mBalloonImageView;
@property(nonatomic) struct CGPoint mBalloonToPoint; // @synthesize mBalloonToPoint;
@property(retain, nonatomic) UIView *mCanvasView; // @synthesize mCanvasView;
@property(nonatomic) __weak id <BottleAnimationDelegate><NSObject> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isFinish;
- (void)fishbranduser_animation;
- (void)fishtext_animation;
- (void)fishaudio_animation;
- (void)fishfail_animation;
- (void)fishing_animation;
- (void)throwtext_animation;
- (void)throwaudio_animation;
- (void)sucktext_animation;
- (void)suckaudio_animation;
- (void)stop_light_animationWithDarkValue:(float)arg1;
- (void)light_animation;
- (void)stop_balloon_animationWithDarkValue:(float)arg1 forced:(_Bool)arg2;
- (void)balloon_animation;
- (void)initStatus;
- (void)hideAllView;
- (void)resetStatus;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;
- (id)init;
- (void)fishoverAnimation;
- (void)fishfailAnimation;
- (void)fishing3Animation;
- (void)fishing2Animation;
- (void)fishingAnimation;
- (void)throwBottleAnimationToPoint:(struct CGPoint)arg1;
- (void)bottleSuckedAnimation;
- (void)curlupAnimation;
- (void)rippleAnimation;
- (void)lightAnimation;
- (void)OnLightTimer;
- (void)balloonAnimationGoToPoint:(struct CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showOpenBottleTip;
- (void)stopFishStar;
- (void)initFishBottleViewInFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (void)initFishStarViewInFrame:(struct CGRect)arg1;
- (void)initWaterViewInFrame:(struct CGRect)arg1;
- (void)initThrowBottleViewAtPoint:(struct CGPoint)arg1;
- (void)initLightViewAtPoint:(struct CGPoint)arg1;
- (void)initBalloonViewAtPoint:(struct CGPoint)arg1;
- (void)touchesEnded_ImageView:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

