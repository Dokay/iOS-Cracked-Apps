//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DCOrderListManagerDelegate.h"

@class NSString;

@interface DCOrderListManager : NSObject <DCOrderListManagerDelegate>
{
}

- (void)showDriverInviteDetailModel:(id)arg1 inviteId:(id)arg2 driverRouteID:(id)arg3 actionType:(id)arg4 tempModel:(id)arg5;
- (void)showPassengerInviteDetailModel:(id)arg1 inviteId:(id)arg2 driverRouteID:(id)arg3 actionType:(id)arg4 tempModel:(id)arg5;
- (void)orderListViewController:(id)arg1 order:(id)arg2 action:(long long)arg3;
- (void)orderListViewControllerDismissed:(id)arg1;
- (void)receiveOrderServicePushNewOrderInfoNotification:(id)arg1;
- (void)registerNotification;
- (void)makeCurrentOrderListHandle:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long curOrderListType;
- (void)handleShowOrderViewController:(id)arg1 errorModel:(id)arg2 needShowAlert:(_Bool)arg3;
- (void)onShowHeadSloganActiveWebView:(id)arg1;
- (void)onShowActiveWebView:(id)arg1;
- (void)onShowUserCard:(id)arg1 viewController:(id)arg2;
- (id)getOrderSouceWithListType:(long long)arg1;
- (void)onShowOrderViewController:(id)arg1;
- (void)showOrderList:(long long)arg1 animationType:(unsigned long long)arg2 params:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
