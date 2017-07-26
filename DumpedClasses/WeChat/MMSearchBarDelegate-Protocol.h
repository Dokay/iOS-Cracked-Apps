//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSearchBar, NSIndexPath, NSString, UIScrollView, UISearchBar, UITableView, UITableViewCell, UIView;

@protocol MMSearchBarDelegate <NSObject>

@optional
- (_Bool)shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (UIView *)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (long long)numberOfSectionsForSearchViewTable:(UITableView *)arg1;
- (UITableViewCell *)cellForIndex:(NSIndexPath *)arg1 ForSearchViewTable:(UITableView *)arg2;
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (void)didScrollViewBeginDragging:(UIScrollView *)arg1;
- (void)didScrollViewScroll:(UIScrollView *)arg1;
- (_Bool)shouldShowTabbarAfterSearchBarBecomeUnActive;
- (void)SearchBarShouldEnd;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarBecomeActive;
- (void)mmSearchDisplayControllerDidHideSearchResultsTableView:(UITableView *)arg1;
- (void)mmSearchDisplayControllerWillHideSearchResultsTableView:(UITableView *)arg1;
- (void)mmSearchDisplayControllerDidShowSearchResultsTableView:(UITableView *)arg1;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(UITableView *)arg1;
- (void)mmSearchDisplayControllerDidEndSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchBarDidEnd;
- (void)mmSearchBarTextDidChange:(NSString *)arg1;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(NSString *)arg2;
- (void)mmsearchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)mmsearchBarCancelButtonClicked:(MMSearchBar *)arg1;
- (void)mmsearchBarSearchButtonClicked:(MMSearchBar *)arg1;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;
@end

