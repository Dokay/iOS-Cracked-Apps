//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavFileDetailDelegate.h"
#import "FavFilterViewControllerDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavPostControllerDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "FavSightViewDelegate.h"
#import "FavTagSearchFilterDelegate.h"
#import "FavTagViewDelegate.h"
#import "FavTypeItemsViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "FavoritesDataControllerDelegate.h"
#import "IFavSightViewExt.h"
#import "IFavoritesExt.h"
#import "WCActionSheetDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class FavForwardLogicController, FavSightView, FavTypeItemsView, FavWarningBannerView, MMFavoritesDataController, MMFavoritesSearchController, MMTableView, MMUIWindow, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIView;

@interface MyFavoritesViewController : MMSearchBarDisplayController <FavPostControllerDelegate, FavSearchControllerDelegate, FavoritesDataControllerDelegate, IFavoritesExt, FavFileDetailDelegate, FavVideoDetailDelegate, FavTagSearchFilterDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, IFavSightViewExt, FavSightViewDelegate, FavTypeItemsViewDelegate, FavFilterViewControllerDelegate>
{
    MMFavoritesDataController *m_dataController;
    MMFavoritesSearchController *m_searchController;
    UIView *m_multiSelectActionView;
    NSMutableArray *m_multiSelectButtons;
    FavForwardLogicController *m_favForwardController;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_switchLoadingView;
    UIView *m_headView;
    UIButton *m_bannerBtn;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavSightView *m_sightView;
    FavTypeItemsView *m_favTypeItemsView;
    FavWarningBannerView *m_favBannerView;
    _Bool m_hasLogCostTime;
    id <MyFavoritesViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <MyFavoritesViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onSelectFavItemsByType:(int)arg1;
- (void)checkDBAutoRecover;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (id)getCurrentViewController;
- (void)onLoadingMore;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)showEmptyView;
- (void)onShowPostActionSheet:(id)arg1;
- (void)addPostItem:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTagForItems;
- (void)onForwardItems;
- (void)forwardItem:(id)arg1;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)onMultiSelectDone;
- (void)initMultiSelectActionView;
- (void)enableBtns;
- (void)disableBtns;
- (void)hideSearchBar;
- (void)onBtnEdit;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnNewFavoritesItemUpdate:(id)arg1;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)onHandleJumpToViewDetail:(id)arg1;
- (void)stopActivityLoading;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)OpenVideoFavItem:(id)arg1;
- (void)OpenVideoFile:(id)arg1;
- (_Bool)bDisplayMode;
- (void)onSelectFilterViewFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFilterViewFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)onWillBeginSearch;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)hideWarningBanner;
- (void)showWarningBanner;
- (void)showCapacityWarningTips;
- (void)showUploadFainForCapacityTips;
- (void)showUploadFailTips;
- (_Bool)checkForCapacityWarningBanner;
- (_Bool)checkForFailBanner;
- (void)checkForBanner;
- (void)goToCapacityViewController;
- (void)restartAllFailedItem;
- (void)resetTableViewOffset:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewControllerBeDeleted;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initEmptyView;
- (void)initSwithLoadingView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)initWarningBanner;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)resetHeaderView:(id)arg1;
- (void)initHeaderView;
- (void)initTableView;
- (void)setViewTitle;
- (void)initNavigationBar;
- (id)getAddBarButton;
- (id)getCancelBarButton;
- (void)reLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)HideLoadingView;
- (void)reloadTableView;
- (_Bool)isSeachActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

