//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCMallControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCMallChargeMobileViewControllerDelegate.h"

@class NSDictionary, NSString, WCPayControlData;

@interface WCMallMobileChargeControlLogic : WCMallControlLogic <WCMallChargeMobileViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayControlData *m_oPayData;
    _Bool m_bNeedFirstGotoWCMallProductView;
    NSDictionary *dicPayedInfo;
    _Bool bHasTwoCGIRequestInStartLogic;
    _Bool bHasOneCGIHasResponsed;
}

@property(nonatomic) _Bool m_bNeedFirstGotoWCMallProductView; // @synthesize m_bNeedFirstGotoWCMallProductView;
- (void).cxx_destruct;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)checkSuccessStopCurrentLogic;
- (void)OnGetWCMallPayFunctionListRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 FromCached:(_Bool)arg5 NotShowTutorial:(_Bool)arg6 typeMap:(id)arg7 Error:(id)arg8;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (unsigned int)GetWCMallMallProductsAllListCount;
- (id)GetWCMallMallProductsFiltedOldList:(id)arg1;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)arg1;
- (void)OnWCMallInputedCompleteTelphone:(id)arg1;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)dealloc;
- (void)stopLogic;
- (void)startLogic;
- (void)SetPayData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

