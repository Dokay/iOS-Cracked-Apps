//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPSortFilterItem, UIImageView, UILabel;

@interface ESPCateSortItemFilterCell : NVMTableViewCell
{
    _Bool _chosen;
    ESPSortFilterItem *_filterItem;
    UILabel *_label;
    UIImageView *_tick;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *tick; // @synthesize tick=_tick;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool chosen; // @synthesize chosen=_chosen;
@property(retain, nonatomic) ESPSortFilterItem *filterItem; // @synthesize filterItem=_filterItem;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

