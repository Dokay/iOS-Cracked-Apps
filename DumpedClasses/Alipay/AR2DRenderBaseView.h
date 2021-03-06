//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AR2DViewObserver, Ant3DViewTracker, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface AR2DRenderBaseView : UIView
{
    struct CGPoint _panCoordinate;
    struct CGPoint _originCenter;
    struct CGRect _originPinchBounds;
    double _originWidth;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    unsigned long long _trackMode;
    AR2DViewObserver *_animationObserver;
    long long _repeatCount;
    Ant3DViewTracker *_tracker;
    UIView *_contentView;
    struct CGSize _trackeeSize;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) Ant3DViewTracker *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) AR2DViewObserver *animationObserver; // @synthesize animationObserver=_animationObserver;
@property(nonatomic) struct CGSize trackeeSize; // @synthesize trackeeSize=_trackeeSize;
@property(nonatomic) unsigned long long trackMode; // @synthesize trackMode=_trackMode;
- (void).cxx_destruct;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (void)translate:(struct CGVector)arg1;
- (void)scale:(struct CGVector)arg1;
- (void)transform:(float *)arg1;
- (void)setupTracker;
- (void)handlePanRecognizer:(id)arg1;
- (void)handlePinchRecognizer:(id)arg1;
- (void)enableGestureDrag:(_Bool)arg1;
- (void)enableGestureZoom:(_Bool)arg1;
- (void)setContentView:(id)arg1 withOriginalFrame:(struct CGRect)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end

