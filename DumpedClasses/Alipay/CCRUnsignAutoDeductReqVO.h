//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRUnsignAutoDeductReqVO : CCRBaseReqVO
{
    NSString *_cardId;
    NSString *_token;
    NSString *_uuid;
    NSString *_paymentPassword;
    NSString *_passwordType;
    NSString *_bizId;
    NSString *_verifyId;
}

@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *paymentPassword; // @synthesize paymentPassword=_paymentPassword;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end
