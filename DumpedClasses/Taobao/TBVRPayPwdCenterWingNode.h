//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIDillyNode.h"

#import "TBVRPayNodeProtocol.h"

@class NSString, TBVRPayConfirmNode, TBVRPayInfoNode, TBVRPayPayToolNode, TBVRPayPwdCenterBottomNode, TBVRPayPwdCenterTopNode, TBVRUIManager;

@interface TBVRPayPwdCenterWingNode : VUIDillyNode <TBVRPayNodeProtocol>
{
    struct _opaque_pthread_mutex_t mutex;
    _Bool _isError;
    _Bool _hasShownTips;
    TBVRPayInfoNode *_infoNode;
    TBVRPayPayToolNode *_payToolNode;
    TBVRPayPwdCenterTopNode *_centerTopNode;
    TBVRPayPwdCenterBottomNode *_centerBottomNode;
    TBVRPayConfirmNode *_retryNode;
    VUIDillyNode *_tipNode;
    id <TBVRPayPwdCenterWingNodeDelegate> _delegate;
    TBVRUIManager *_manager;
    unsigned long long _currInputPwdBoxIndex;
}

@property(nonatomic) unsigned long long currInputPwdBoxIndex; // @synthesize currInputPwdBoxIndex=_currInputPwdBoxIndex;
@property(nonatomic) _Bool hasShownTips; // @synthesize hasShownTips=_hasShownTips;
@property(nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <TBVRPayPwdCenterWingNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIDillyNode *tipNode; // @synthesize tipNode=_tipNode;
@property(retain, nonatomic) TBVRPayConfirmNode *retryNode; // @synthesize retryNode=_retryNode;
@property(retain, nonatomic) TBVRPayPwdCenterBottomNode *centerBottomNode; // @synthesize centerBottomNode=_centerBottomNode;
@property(retain, nonatomic) TBVRPayPwdCenterTopNode *centerTopNode; // @synthesize centerTopNode=_centerTopNode;
@property(retain, nonatomic) TBVRPayPayToolNode *payToolNode; // @synthesize payToolNode=_payToolNode;
@property(retain, nonatomic) TBVRPayInfoNode *infoNode; // @synthesize infoNode=_infoNode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)redrawWithData:(id)arg1;
- (void)resetPwdBoxes;
- (void)switchToErrorModeWithMessage:(id)arg1;
- (void)requestPay;
- (void)removeGifNode;
- (void)createGifNode;
- (void)createRetryNodeWithData:(id)arg1;
- (void)createCenterBottomNodeWithData:(id)arg1;
- (void)createPayToolNodeWithData:(id)arg1;
- (void)createInfoNodeWithData:(id)arg1;
- (void)createCenterTopNodeWithData:(id)arg1;
- (id)initWithParams:(id)arg1 data:(id)arg2 manager:(id)arg3;
@property(readonly, nonatomic) double ptHeight;
@property(readonly, nonatomic) double ptWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
