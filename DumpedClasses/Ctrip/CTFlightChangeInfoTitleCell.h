//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightRadioView;

@interface CTFlightChangeInfoTitleCell : UITableViewCell
{
    CTFlightRadioView *bgView;
    id <CTFlightChangeInfoTitleCellDelegate> _delegate;
}

+ (double)getFlightChangeInfoTitleHeight;
@property(nonatomic) __weak id <CTFlightChangeInfoTitleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnClick:(id)arg1;
- (void)setFlightChangeInfoTitleCellWithTitleArray:(id)arg1 circleAngleType:(int)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

