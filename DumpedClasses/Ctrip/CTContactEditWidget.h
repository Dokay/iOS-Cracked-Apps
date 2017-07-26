//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTableViewWidget_old.h"

@class NSMutableArray;

@interface CTContactEditWidget : CTTableViewWidget_old
{
    _Bool _newCreated;
    int _serviceAreaType;
    NSMutableArray *arrTableCells;
    id <CTContactEditWidgetDelegate> _delegate;
    id _node;
}

@property(nonatomic) int serviceAreaType; // @synthesize serviceAreaType=_serviceAreaType;
@property(retain, nonatomic) id node; // @synthesize node=_node;
@property(nonatomic) _Bool newCreated; // @synthesize newCreated=_newCreated;
@property(nonatomic) __weak id <CTContactEditWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *arrTableCells; // @synthesize arrTableCells;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)handleTitleBarRightButton:(id)arg1;
- (void)handleButtonDelete:(id)arg1;
- (void)setDeleteTitle:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
