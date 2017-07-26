//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IAutoVerifySMSExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VerifyCodeByVoiceViewControllerDelegate.h"

@class NSString, UITextField;

@interface VerifyPhoneViewController : MMUIViewController <UIAlertViewDelegate, PBMessageObserverDelegate, VerifyCodeByVoiceViewControllerDelegate, IAutoVerifySMSExt>
{
    UITextField *m_verifyCode;
    id <VerifyPhoneDelegate> m_delegate;
    int m_getVerifyCodeCount;
    unsigned int m_uiFromScene;
    NSString *m_nsPhoneNumber;
    _Bool m_bShouldNotRequestValifyCode;
    NSString *m_nsTicket;
    NSString *m_nsAuthTicket;
    NSString *m_nsLanguageCode;
    unsigned int m_uiReadyOpcode;
    unsigned int m_uiCheckOpcode;
    unsigned int m_uiVerifyCGI;
}

@property(nonatomic) unsigned int m_uiVerifyCGI; // @synthesize m_uiVerifyCGI;
@property(nonatomic) unsigned int m_uiCheckOpcode; // @synthesize m_uiCheckOpcode;
@property(nonatomic) unsigned int m_uiReadyOpcode; // @synthesize m_uiReadyOpcode;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene;
@property(retain, nonatomic) NSString *m_nsLanguageCode; // @synthesize m_nsLanguageCode;
@property(retain, nonatomic) NSString *m_nsAuthTicket; // @synthesize m_nsAuthTicket;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(nonatomic) _Bool m_bShouldNotRequestValifyCode; // @synthesize m_bShouldNotRequestValifyCode;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber;
@property(nonatomic) __weak id <VerifyPhoneDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)getCloseLink;
- (void)onCloseLink;
- (void)jumpToUnProtectPage;
- (id)checkShowVoiceBtn:(struct CGRect)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetVerifyCodeByVoice:(id)arg1;
- (void)onGetVerifyCode:(id)arg1;
- (void)onVerify:(id)arg1;
- (void)verify:(id)arg1;
- (void)onCallVoiceVerify:(id)arg1;
- (void)handleVerifiedOk:(id)arg1;
- (void)showSyncAddressBookAlert;
- (void)regByPhoneVerifySucceed:(id)arg1;
- (void)removeRegisterInfo;
- (void)saveRegisterInfo;
- (void)bindPhoneOKReturn;
- (void)trySyncAddressBook;
- (void)opFreqLimited;
- (void)networkFaild;
- (void)forwardError;
- (void)sendVerifyCodeFail;
- (void)verifyFaild;
- (void)bindFaild;
- (void)syncAddressBook;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

