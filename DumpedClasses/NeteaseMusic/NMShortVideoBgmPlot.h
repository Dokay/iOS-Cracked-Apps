//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NMAudioPlot, NMShortVideoBgmPlotHint, NSString, UIScrollView;

@interface NMShortVideoBgmPlot : UIView <UIScrollViewDelegate>
{
    _Bool _respondSelect;
    float _start;
    float _end;
    _Bool _initedLayout;
    float _progress;
    id <NMShortVideoBgmPlotDelegate> _delegate;
    unsigned long long _selectState;
    NMShortVideoBgmPlotHint *_hint;
    UIScrollView *_innerPannel;
    NMAudioPlot *_plot;
    UIView *_progressMask;
    UIView *_helpMask;
}

@property(retain, nonatomic) UIView *helpMask; // @synthesize helpMask=_helpMask;
@property(retain, nonatomic) UIView *progressMask; // @synthesize progressMask=_progressMask;
@property(retain, nonatomic) NMAudioPlot *plot; // @synthesize plot=_plot;
@property(retain, nonatomic) UIScrollView *innerPannel; // @synthesize innerPannel=_innerPannel;
@property(retain, nonatomic) NMShortVideoBgmPlotHint *hint; // @synthesize hint=_hint;
@property(readonly, nonatomic) unsigned long long selectState; // @synthesize selectState=_selectState;
@property(nonatomic) __weak id <NMShortVideoBgmPlotDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSelectState:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)removePlotHint:(id)arg1;
- (void)clickPlot:(id)arg1;
@property(nonatomic) float start;
@property(nonatomic) float end;
@property(readonly, nonatomic) NMAudioPlot *innerPlot;
- (void)reset;
- (void)updatePlotMultiplier:(float)arg1 insetsPadding:(double)arg2;
- (void)updateBuffer:(float *)arg1 withBufferSize:(unsigned int)arg2 multiplier:(float)arg3 insetsPadding:(double)arg4;
- (void)updateLayoutIfNeeded;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)layoutSubviews;
@property(readonly, nonatomic) float duration;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)defaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
