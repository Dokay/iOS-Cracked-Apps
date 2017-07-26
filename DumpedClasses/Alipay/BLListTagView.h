//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BLListTag;

@interface BLListTagView : UIView
{
    id <BLListTagViewDelegate> _delegate;
    BLListTag *_timeTag;
    BLListTag *_categoryTag;
    double _realHeight;
}

@property(nonatomic) double realHeight; // @synthesize realHeight=_realHeight;
@property(retain, nonatomic) BLListTag *categoryTag; // @synthesize categoryTag=_categoryTag;
@property(retain, nonatomic) BLListTag *timeTag; // @synthesize timeTag=_timeTag;
@property(nonatomic) __weak id <BLListTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)stringFormatterFromDate:(id)arg1 type:(id)arg2;
- (void)clickEditButton:(id)arg1;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

@end
