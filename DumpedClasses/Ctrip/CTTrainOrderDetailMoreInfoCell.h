//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTTrainMoreInfoItemViewDelegate.h"

@class NSMutableArray, NSString, UIView;

@interface CTTrainOrderDetailMoreInfoCell : CTCustomeGroupTableViewCell <CTTrainMoreInfoItemViewDelegate>
{
    id <CTTrainOrderDetailMoreInfoCellDelegate> _delegate;
    long long _cellHeight;
    NSMutableArray *_kvArray;
    UIView *_contentBackView;
    UIView *_infoContentView;
}

@property(retain, nonatomic) UIView *infoContentView; // @synthesize infoContentView=_infoContentView;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(retain, nonatomic) NSMutableArray *kvArray; // @synthesize kvArray=_kvArray;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) __weak id <CTTrainOrderDetailMoreInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)itemView:(id)arg1 didTappedInfoModel:(id)arg2;
- (double)heightOfCell;
- (void)setUpDataWithKV:(id)arg1;
- (void)initBaseData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
