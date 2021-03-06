//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGOtherLoginViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class KGLoginLabelTextField, KGOtherLoginViewController, KGThemeButton, NSString, NSTimer, UILabel, UIScrollView, UIView;

@interface KGRegisterWithPhoneViewController : KGViewController <UITextFieldDelegate, UIScrollViewDelegate, KGOtherLoginViewControllerDelegate>
{
    long long timerCount;
    int _weakPasswordFlag;
    _Bool _isPhoneNumLegal;
    NSString *_source;
    KGThemeButton *_nextButton;
    KGLoginLabelTextField *_phoneTextField;
    KGThemeButton *_resendButton;
    NSTimer *_resendTimer;
    UIScrollView *_backgroundView;
    NSString *_sendCode;
    UILabel *_placeHolderLabel;
    KGThemeButton *_pwdSwitchBtn;
    KGLoginLabelTextField *_pwdTextField;
    KGLoginLabelTextField *_pwdConfirTextField;
    KGOtherLoginViewController *_otherLoginVC;
    UIView *_otherLoginView;
}

@property(nonatomic) __weak UIView *otherLoginView; // @synthesize otherLoginView=_otherLoginView;
@property(retain, nonatomic) KGOtherLoginViewController *otherLoginVC; // @synthesize otherLoginVC=_otherLoginVC;
@property(nonatomic) __weak KGLoginLabelTextField *pwdConfirTextField; // @synthesize pwdConfirTextField=_pwdConfirTextField;
@property(nonatomic) __weak KGLoginLabelTextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) KGThemeButton *pwdSwitchBtn; // @synthesize pwdSwitchBtn=_pwdSwitchBtn;
@property(nonatomic) __weak UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(copy, nonatomic) NSString *sendCode; // @synthesize sendCode=_sendCode;
@property(retain, nonatomic) UIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTimer *resendTimer; // @synthesize resendTimer=_resendTimer;
@property(retain, nonatomic) KGThemeButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) KGLoginLabelTextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) KGThemeButton *nextButton; // @synthesize nextButton=_nextButton;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)otherShowSuccess:(id)arg1;
- (void)otherShowLoad:(id)arg1;
- (void)otherShowError:(id)arg1;
- (void)otherBackAction;
- (void)otherLoginSuccess;
- (void)onTextChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)showTextFieldError:(id)arg1;
- (_Bool)checkTextField:(id)arg1 andString:(id)arg2;
- (unsigned long long)errorCount;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)swichPwdType:(id)arg1;
- (id)createOtherLoginViewWithButtonImageColor:(id)arg1 withLableTextColor:(id)arg2 withTopLabelColor:(id)arg3 withLineColor:(id)arg4;
- (void)pushUserServiceVC:(id)arg1;
- (void)toPrivacyItem;
- (void)toServiceItem;
- (id)createPrivacyViewWithTheme:(_Bool)arg1;
- (void)addPrivacyItem;
- (void)p_init;
- (void)backButtonClick:(id)arg1;
- (void)changeRegisterButtonClick:(id)arg1;
- (void)goToCodeVCAction;
- (void)checkPassWord;
- (void)nextButtonClick:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

