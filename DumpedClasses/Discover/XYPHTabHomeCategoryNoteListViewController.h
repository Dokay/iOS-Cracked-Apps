//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseNoteListViewController.h"

@class FBKVOController, NSArray, NSString, UIButton, UIView, XYPHPostNotesProgressViewController;

@interface XYPHTabHomeCategoryNoteListViewController : XYPHBaseNoteListViewController
{
    _Bool _isSelectedPage;
    _Bool _isRequestData;
    UIView *_placeholderView;
    NSString *_categoryId;
    double _lastRefreshDate;
    UIButton *_headerViewButton;
    XYPHPostNotesProgressViewController *_progressVC;
    FBKVOController *_KVOController;
    NSArray *_recommendArray;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) XYPHPostNotesProgressViewController *progressVC; // @synthesize progressVC=_progressVC;
@property _Bool isRequestData; // @synthesize isRequestData=_isRequestData;
@property(retain, nonatomic) UIButton *headerViewButton; // @synthesize headerViewButton=_headerViewButton;
@property(nonatomic) _Bool isSelectedPage; // @synthesize isSelectedPage=_isSelectedPage;
@property(nonatomic) double lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)refreshHomeVCWhenUserInfoChanged;
- (void)hideRecommendUserHeaderWhenUserLogOut;
- (void)placeholderFollowUsersRightNowButtonClicked:(id)arg1;
- (void)hideRecommendUserHeader:(id)arg1;
- (void)followRecommendUserWithUser:(id)arg1;
- (void)showRecommendUserHeader;
- (void)showRecommendUserView;
- (_Bool)showHomeBannerView:(_Bool)arg1;
- (void)adsCellNotInterestClicked:(id)arg1;
- (void)adsCellLikeButtonClicked:(id)arg1;
- (void)adsCellUserButtonClicked:(id)arg1;
- (void)noteCellNotInterestClicked:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showNewNoteTip:(long long)arg1;
- (void)checkNewAllNoteTip;
- (void)requestRecommendUserList;
- (void)requestNoteListMore:(id)arg1 cusor:(id)arg2;
- (void)requestNoteList:(id)arg1;
- (void)pushToLoadMore;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)getTopInset;
- (void)followUsers:(id)arg1;
- (void)showPlaceHolderView:(_Bool)arg1;
- (void)initPlaceHolderView;

@end
