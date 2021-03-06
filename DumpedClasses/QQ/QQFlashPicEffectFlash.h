//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFlashPicEffect.h"

@class UIImageView;

@interface QQFlashPicEffectFlash : QQFlashPicEffect
{
    double _tPreFrame;
    long long _playCount;
    UIImageView *_bkImageView;
    UIImageView *_blueImageView;
    UIImageView *_purpleImageView;
}

@property(retain, nonatomic) UIImageView *purpleImageView; // @synthesize purpleImageView=_purpleImageView;
@property(retain, nonatomic) UIImageView *blueImageView; // @synthesize blueImageView=_blueImageView;
@property(retain, nonatomic) UIImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
- (void)playAnimation;
- (void)stopAnimation;
- (void)play;
- (void)setup;
- (id)reSizeImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

