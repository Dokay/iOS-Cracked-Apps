//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MCMarqueeLabel;

@interface UIViewController (titleColor)
+ (void)load;
- (void)dealloc_titleColor;
- (void)shrinkNavigationTitle;
- (void)shrinkNavigationTitleIfNeeded;
- (void)dynamicChangeNavigationTitle:(id)arg1 defaultTitle:(id)arg2 scrollOffsetY:(double)arg3 conditionOffsetY:(double)arg4;
- (void)setNavigationTitle:(id)arg1;
- (id)string:(id)arg1 byTruncatingToWidth:(double)arg2 withFont:(id)arg3;
@property(retain, nonatomic) MCMarqueeLabel *marqueeLabel;
@end

