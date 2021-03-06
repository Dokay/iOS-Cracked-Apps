//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PullToRefreshViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FXArtistsMvConcernListVm, FXBlankView, FXNotLoginTipsView, NSMutableArray, NSString;

@interface FXArtistsMvConcernListViewController : PullToRefreshViewController <UITableViewDataSource, UITableViewDelegate>
{
    FXBlankView *_blankView;
    FXArtistsMvConcernListVm *_listVm;
    NSMutableArray *_viewList;
    FXNotLoginTipsView *_notLoginTipsView;
}

@property(retain, nonatomic) FXNotLoginTipsView *notLoginTipsView; // @synthesize notLoginTipsView=_notLoginTipsView;
@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) FXArtistsMvConcernListVm *listVm; // @synthesize listVm=_listVm;
@property(retain, nonatomic) FXBlankView *blankView; // @synthesize blankView=_blankView;
- (void).cxx_destruct;
- (void)configArctorCell:(id)arg1 data:(id)arg2;
- (void)setupTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handlePullToRefreshWithView:(id)arg1 AndType:(int)arg2;
- (long long)showPlayBarWay;
- (void)reConnectEvent;
- (void)refreshUIWithList:(id)arg1;
- (void)fxTabBarCurCroDidSelect;
- (void)kugouLogin;
- (void)gotoLoginView;
- (void)gotoMvPage:(long long)arg1;
- (void)gotoMVListWithUserId:(long long)arg1 nickName:(id)arg2;
- (void)gotoActorPageWithUserId:(long long)arg1 roomId:(long long)arg2 isLiving:(_Bool)arg3;
- (void)touchMvNumber:(id)arg1;
- (void)touchActor:(id)arg1;
- (void)showNotLoginTips;
- (void)finishLoadData:(id)arg1 page:(long long)arg2;
- (void)blankViewWithImage:(id)arg1 desc:(id)arg2;
- (void)KGUsingControllerState:(int)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

