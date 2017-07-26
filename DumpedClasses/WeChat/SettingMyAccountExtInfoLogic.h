//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMImagePickerManagerDelegate.h"
#import "MessageObserverDelegate.h"
#import "WCActionSheetDelegate.h"

@class CUsrInfo, NSString, UIViewController;

@interface SettingMyAccountExtInfoLogic : MMObject <WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate>
{
    id <settingMyAccountExtInfoLogicDelegate> m_delegate;
    UIViewController *m_viewController;
    CUsrInfo *m_usrInfo;
    unsigned int m_uiUploadHeadEventID;
}

@property(retain, nonatomic) CUsrInfo *m_usrInfo; // @synthesize m_usrInfo;
- (void).cxx_destruct;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)dealloc;
- (void)reload;
- (void)resetViewControllerAndDelegate;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChangeImg:(id)arg1;
- (void)onPhotoSave;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)handleImage:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (id)getNavigationController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

