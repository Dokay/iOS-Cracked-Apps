//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CNMailTrackTraceTimeView : UIView
{
    UIView *_view;
    UILabel *_timeLabel;
    UILabel *_dayLabel;
}

@property(nonatomic) __weak UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)setDay:(id)arg1 time:(id)arg2;
- (void)setup;
- (void)setLabelColor:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
