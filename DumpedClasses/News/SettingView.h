//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "SSEditUserProfileViewControllerDelegate.h"
#import "TTEditUserProfileViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSObject<SettingViewDelegate>, NSString, SSNavigationBar, SSThemedButton, SSThemedLabel, SSThemedTableView, SettingPushCell, SettingSwitch, TTIndicatorView, UITapGestureRecognizer, UIView;

@interface SettingView : SSViewBase <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, SSEditUserProfileViewControllerDelegate, TTEditUserProfileViewControllerDelegate>
{
    double _fileSize;
    unsigned long long _cacheStatus;
    _Bool _isEmptyingTrash;
    _Bool _isOpenSettingApp;
    _Bool _shouldShowBtn4RefreshSetting;
    _Bool _shouldShowVideoAutoPlaySetting;
    _Bool _shouldShowTrafficViewSetting;
    _Bool _cacheJustCleaned;
    _Bool _resetPasswordAlertShowed;
    _Bool _airDownloading;
    NSObject<SettingViewDelegate> *_delegate;
    SSNavigationBar *_navigationBar;
    SSThemedTableView *_tableView;
    SSThemedLabel *_aboutLabel;
    SettingSwitch *_resourceModeSwitch;
    SettingSwitch *_readModeSwitch;
    SettingSwitch *_pushNotificatoinSwitch;
    SettingSwitch *_showBtn4RefreshSwitch;
    TTIndicatorView *_indicatorView;
    UIView *_footerContainerView;
    SSThemedButton *_userProtocolButton;
    SettingPushCell *_pushCell;
    unsigned long long _tapCount;
    UITapGestureRecognizer *_flexTapGesture;
    SSThemedLabel *_downloadLabel;
    NSString *_downloadFormatString;
}

+ (unsigned long long)settingNewPointBadgeNumber;
+ (void)setSettingViewAppeared;
+ (_Bool)isSettingViewAppeared;
+ (id)settingViewAppearedUserDefaultKey;
+ (double)fontSizeOfAboutLabel;
+ (double)fontSizeOfUserProtocolButton;
+ (double)fontSizeOfCellRightLabel;
+ (double)fontSizeOfCellLeftLabel;
+ (double)heightOfCell;
@property(copy, nonatomic) NSString *downloadFormatString; // @synthesize downloadFormatString=_downloadFormatString;
@property(retain, nonatomic) SSThemedLabel *downloadLabel; // @synthesize downloadLabel=_downloadLabel;
@property(nonatomic) _Bool airDownloading; // @synthesize airDownloading=_airDownloading;
@property(nonatomic) _Bool resetPasswordAlertShowed; // @synthesize resetPasswordAlertShowed=_resetPasswordAlertShowed;
@property(retain, nonatomic) UITapGestureRecognizer *flexTapGesture; // @synthesize flexTapGesture=_flexTapGesture;
@property(nonatomic) _Bool cacheJustCleaned; // @synthesize cacheJustCleaned=_cacheJustCleaned;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
@property(retain, nonatomic) SettingPushCell *pushCell; // @synthesize pushCell=_pushCell;
@property(retain, nonatomic) SSThemedButton *userProtocolButton; // @synthesize userProtocolButton=_userProtocolButton;
@property(retain, nonatomic) UIView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(retain, nonatomic) TTIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) SettingSwitch *showBtn4RefreshSwitch; // @synthesize showBtn4RefreshSwitch=_showBtn4RefreshSwitch;
@property(retain, nonatomic) SettingSwitch *pushNotificatoinSwitch; // @synthesize pushNotificatoinSwitch=_pushNotificatoinSwitch;
@property(retain, nonatomic) SettingSwitch *readModeSwitch; // @synthesize readModeSwitch=_readModeSwitch;
@property(retain, nonatomic) SettingSwitch *resourceModeSwitch; // @synthesize resourceModeSwitch=_resourceModeSwitch;
@property(retain, nonatomic) SSThemedLabel *aboutLabel; // @synthesize aboutLabel=_aboutLabel;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SSNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak NSObject<SettingViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)settingCellVideoTrafficTip;
- (id)settingCellLoadImageString;
- (_Bool)isAPNSEnabled;
- (void)displayMessage:(id)arg1 withImage:(id)arg2 duration:(float)arg3;
- (void)clearCache;
- (void)setFontWithIndex:(int)arg1;
- (void)setVideoTrafficTipWithIndex:(long long)arg1;
- (void)changeImageDIsplaySettingWithIndex:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)editUserProfileController:(id)arg1 goBack:(id)arg2;
- (_Bool)hideDescriptionCellInEditUserProfileController:(id)arg1;
- (void)openUserBlacklistsDidSelectCell:(id)arg1;
- (void)openAccountBindingSettingDidSelectCell:(id)arg1;
- (void)showEditUserView:(id)arg1;
- (void)showBtn4RefreshSwitchChanged:(id)arg1;
- (void)resourceModeChanged:(id)arg1;
- (void)readModeChanged:(id)arg1;
- (void)registPushNotification:(id)arg1;
- (void)pushNotificationChanged:(id)arg1;
- (void)feedbackButtonClicked:(id)arg1;
- (void)logout;
- (void)triggerLogoutDidSelectCell;
- (void)gotoAutoPlaySetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showIPhoneActionSheetForClearCache;
- (void)_showIPadAlertForClearCache:(id)arg1 indexPath:(id)arg2;
- (_Bool)_shouldShowIPadAlert;
- (void)_showIPhoneActionSheetForVideoTrafficTip;
- (void)_showIPadAlertForVideoTrafficTip:(id)arg1 indexPath:(id)arg2;
- (void)_showIPhoneActionSheetForLoadImage;
- (void)_showIPadAlertForLoadImage:(id)arg1 indexPath:(id)arg2;
- (void)_showIPadAlertForTextSetting:(id)arg1 indexPath:(id)arg2;
- (void)_showIPhoneActionSheetForTextSetting;
- (void)_settingSourceViewOfController:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)needReload:(id)arg1;
- (void)updateTableView:(id)arg1 atIndexPath:(id)arg2 isHighlight:(_Bool)arg3;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)videoTrafficTipText;
- (id)networkTrafficSettingText;
- (void)refreshswitch:(id)arg1;
- (id)settingCellIndexPathForType:(unsigned long long)arg1;
- (unsigned long long)settingCellTypeOfIndexPath:(id)arg1;
- (unsigned long long)settingSectionTypeOfIndex:(unsigned long long)arg1;
- (_Bool)isTableViewSectionOfLogoutModule;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshContent;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (void)willDisappear;
- (void)willAppear;
- (void)themeChanged:(id)arg1;
- (void)refreshTableView;
- (void)goBack:(id)arg1;
- (void)userProtocolButtonClicked:(id)arg1;
- (void)flexDebugTapped;
- (void)footerTapped;
- (void)startDownload:(id)arg1;
- (void)reportSettingFontSizeChangedNotification:(id)arg1;
- (void)handleUserLogoutNotification:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)initializeTableFooterView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
