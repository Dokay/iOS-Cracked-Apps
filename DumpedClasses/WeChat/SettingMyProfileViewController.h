//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CSettingExt.h"
#import "HDHeadImageViewDelegate.h"
#import "IOplogExt.h"
#import "MMRegionPickerViewControllerDelegate.h"
#import "settingModifyAliasDelegate.h"
#import "settingModifySignDelegate.h"
#import "settingMyAccountExtInfoLogicDelegate.h"

@class MMHeadImageView, MMRegionPickerViewController, MMTableViewInfo, NSString, NameEditorViewController, SettingMyAccountExtInfoLogic;

@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingModifySignDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate, CSettingExt, settingModifyAliasDelegate, IOplogExt>
{
    MMHeadImageView *m_headImage;
    MMRegionPickerViewController *m_regionPicker;
    SettingMyAccountExtInfoLogic *m_infoLogic;
    MMTableViewInfo *m_tableViewInfo;
    NameEditorViewController *m_CurrentVC;
    NSString *m_nsTempNickName;
}

- (void).cxx_destruct;
- (void)viewDidTransitionToNewSize;
- (void)initDeepLinkConfig;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)saveNewSign:(id)arg1;
- (void)onModifySex:(id)arg1;
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)onSettingChanged:(int)arg1;
- (void)onInfoChange;
- (void)dealloc;
- (void)showMyAddressInfoView;
- (void)showQRInfoView;
- (void)showModifySignView;
- (void)showModifyAddressView;
- (void)showModifyNickName;
- (void)showModifySexView;
- (id)getAddressString;
- (id)getSexString;
- (double)getSignCellHeight;
- (void)makeChangeImgCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeQRInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSignCell:(id)arg1 cellInfo:(id)arg2;
- (void)willAppear;
- (void)willDisshow;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onChangeImg:(id)arg1;
- (void)ChangeSex:(id)arg1;
- (void)SaveAndExit;
- (void)Save;
- (void)returnBack;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)onLinkedIn;
- (void)updateTableCell;
- (void)saveNewAlias;
- (void)showModifyUserName;
- (_Bool)isNeedShowWCPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

