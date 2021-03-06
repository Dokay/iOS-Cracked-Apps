//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCardListDetailController.h"

#import "RichMsgPreviewDialogDelegate.h"

@class BCardInfoModel, BCardListViewController, NSString, QQBaseChatViewController, QQRichMsgPreviewDialog, UIImage;

@interface BCardListSharecardController : BCardListDetailController <RichMsgPreviewDialogDelegate>
{
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    NSString *_richMsgPreTitle;
    NSString *_richMsgPreDes;
    NSString *_richMsgPreDest;
    BCardListViewController *_shareBusiCardView;
    NSString *_uin;
    NSString *_cardId;
    NSString *_name;
    int _accType;
    BCardInfoModel *_selectedCardInfo;
    QQBaseChatViewController *_aioViewController;
    int _msgType;
    NSString *_content;
    UIImage *_richMsgPreImg;
}

@property(copy, nonatomic) NSString *richMsgPreDes; // @synthesize richMsgPreDes=_richMsgPreDes;
@property(copy, nonatomic) NSString *richMsgPreTitle; // @synthesize richMsgPreTitle=_richMsgPreTitle;
@property(retain, nonatomic) UIImage *richMsgPreImg; // @synthesize richMsgPreImg=_richMsgPreImg;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)getURLandSetXMLmsg:(id)arg1;
- (void)onCellClickCallBack:(id)arg1;
- (id)initWithUin:(id)arg1 accType:(int)arg2 cardId:(id)arg3 name:(id)arg4 aioViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

