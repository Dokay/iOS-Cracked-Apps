//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface FABaseTableStyleCell : UITableViewCell
{
    UIView *_selectedView;
}

@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fxConfigFullSelectedStyle;
- (void)installSelectedView;
- (void)showSelectedStyle:(_Bool)arg1;

@end

