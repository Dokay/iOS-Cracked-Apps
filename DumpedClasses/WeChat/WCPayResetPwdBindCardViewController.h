//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMWebViewDelegate.h"

@class NSString, UIButton, WCPayTenpaySecureCtrlItem;

@interface WCPayResetPwdBindCardViewController : WCPayBaseViewController <MMWebViewDelegate>
{
    UIButton *m_footerButton;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    id <WCPayResetPwdBindCardViewControllerDelegate> m_delegate;
    _Bool bPoped;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)changeRealName;
- (void)showDetailTip;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnWCPayResetPwdBindCardBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

