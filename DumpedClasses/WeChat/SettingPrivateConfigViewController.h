//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class DelaySwitchSettingLogic, MMTableViewInfo, NSMutableDictionary, WCOpLog;

@interface SettingPrivateConfigViewController : MMUIViewController
{
    NSMutableDictionary *m_changesOnExitMap;
    _Bool m_applySettingNow;
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    _Bool m_showRecentOpen;
    _Bool m_strangerRightOpen;
    _Bool m_contactVerifySwitchOpen;
    _Bool m_recommendQQOpen;
    _Bool m_recommendPhoneOpen;
    _Bool m_recommendGoogleOpen;
    _Bool m_autoAddFriendPhoneShow;
    _Bool m_autoAddFriendPhoneOpen;
    _Bool m_bIsShowPhoneSectionIndexAtFirst;
    unsigned int m_phoneSection;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property(nonatomic) _Bool m_bIsShowPhoneSectionIndexAtFirst; // @synthesize m_bIsShowPhoneSectionIndexAtFirst;
- (void).cxx_destruct;
- (void)initDeepLinkConfig;
- (void)showWCEditGroup;
- (void)showWCBlackListView;
- (void)showWCOutsiderView;
- (void)editWCGroup:(id)arg1;
- (void)onModifyRecentOption:(id)arg1;
- (void)showRecentWCOptions:(id)arg1;
- (int)getCurrentRecentType:(id)arg1;
- (id)getCurrentRecentString;
- (_Bool)canShowRecentOptions;
- (void)showRecentWC:(id)arg1;
- (void)allowStrangerWC:(id)arg1;
- (void)contactVerifySwitchChanged:(id)arg1;
- (void)recommendGoogleChanged:(id)arg1;
- (void)autoAddFriendPhoneChanged:(id)arg1;
- (void)recommendPhoneChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)showAddMeWaysVC;
- (void)applyUnSavedChanges;
- (_Bool)setChangeOnExitForSelector:(SEL)arg1 withControl:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)showBlackListView;
- (id)init;
- (id)getHeaderView:(id)arg1;

@end

