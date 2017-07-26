//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, UINavigationController, WAAppTrialInfoLoader, WAContactGetter, WALoadingInfoData;

@interface WAAppContactPreLoader : MMService <MMService>
{
    NSString *m_userNameOfNewContact;
    UINavigationController *m_navigationViewController;
    CDUnknownBlockType m_successBlock;
    CDUnknownBlockType m_faildBlock;
    unsigned long long m_enterScene;
    NSString *m_sceneNote;
    NSString *m_pagePath;
    unsigned long long m_debugMode;
    unsigned int m_version;
    NSString *m_reOpenSessionId;
    WALoadingInfoData *m_loadingInfo;
    WAContactGetter *m_contactGetter;
    WAAppTrialInfoLoader *m_trialInfoLoader;
}

- (void).cxx_destruct;
- (void)NewYearOpenAppWithContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)openErrWebViewControllerWithUrl:(id)arg1 navigationController:(id)arg2;
- (void)showOverSeaForbbidenWebView;
- (void)showDeviceForbbidenWebView;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)registOpenAppStatInfo:(id)arg1;
- (void)dealloc;
- (void)clearState;
- (void)cancelReqeustInfo;
- (id)checkIfNeedEnterErrPageURL:(id)arg1;
- (void)finalyOpenAppWithContact:(id)arg1 extInfo:(id)arg2;
- (void)enterRDMModeWeApp:(id)arg1 extInfo:(id)arg2;
- (void)enterDevelopModeWeApp:(id)arg1 extInfo:(id)arg2;
- (void)enterAppWithContact:(id)arg1;
- (void)firstLoadWeAppContact;
- (void)openAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 pagePath:(id)arg5 debugMode:(unsigned long long)arg6 version:(unsigned int)arg7 showConfig:(id)arg8 onSuccess:(CDUnknownBlockType)arg9 onFailed:(CDUnknownBlockType)arg10;
- (void)openAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 pagePath:(id)arg5 debugMode:(unsigned long long)arg6 version:(unsigned int)arg7 onSuccess:(CDUnknownBlockType)arg8 onFailed:(CDUnknownBlockType)arg9;
- (void)openAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 debugMode:(unsigned long long)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailed:(CDUnknownBlockType)arg6;
- (void)openAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 pagePath:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)openAppWithUserName:(id)arg1 appid:(id)arg2 navigationController:(id)arg3 fromScene:(unsigned long long)arg4 sceneNote:(id)arg5 pagePath:(id)arg6 version:(unsigned int)arg7 msgPackInfo:(id)arg8 showConifg:(id)arg9 onSuccess:(CDUnknownBlockType)arg10 onFaild:(CDUnknownBlockType)arg11;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)reOpenAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 pagePath:(id)arg5 debugMode:(unsigned long long)arg6 onSuccess:(CDUnknownBlockType)arg7 onFailed:(CDUnknownBlockType)arg8;
- (void)reOpenAppWithUserName:(id)arg1 navigationController:(id)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

