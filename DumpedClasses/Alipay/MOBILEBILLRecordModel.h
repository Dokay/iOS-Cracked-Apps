//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MOBILEBILLRecordModel : NSObject
{
    NSString *_consumeTitle;
    NSString *_consumeFee;
    NSString *_gmtCreateDesc;
    NSString *_bizStateDesc;
    NSString *_inOut;
    NSString *_logo;
    NSString *_voiceMemoUrl;
    NSString *_funnyFaceId;
    NSString *_memo;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
+ (id)statusColor:(id)arg1;
+ (int)inOutType:(id)arg1;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *funnyFaceId; // @synthesize funnyFaceId=_funnyFaceId;
@property(retain, nonatomic) NSString *voiceMemoUrl; // @synthesize voiceMemoUrl=_voiceMemoUrl;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *inOut; // @synthesize inOut=_inOut;
@property(retain, nonatomic) NSString *bizStateDesc; // @synthesize bizStateDesc=_bizStateDesc;
@property(retain, nonatomic) NSString *gmtCreateDesc; // @synthesize gmtCreateDesc=_gmtCreateDesc;
@property(retain, nonatomic) NSString *consumeFee; // @synthesize consumeFee=_consumeFee;
@property(retain, nonatomic) NSString *consumeTitle; // @synthesize consumeTitle=_consumeTitle;
- (void).cxx_destruct;
- (id)adapterDictionary;

@end
