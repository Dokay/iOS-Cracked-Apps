//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString;

@interface QLJCEPKPopularityListResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSDictionary *jcev2_p_1_r_groupConfigs__b0x9i_M09ONSNumberONSString;
    NSArray *jcev2_p_2_r_vecGroupInfo__b0x9i_VOQLJCEPKGroupInfo;
    NSString *jcev2_p_3_o_propsDataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_propsDataKey, setter=setJce_propsDataKey:) NSString *jcev2_p_3_o_propsDataKey; // @synthesize jcev2_p_3_o_propsDataKey;
@property(retain, nonatomic, getter=jce_vecGroupInfo, setter=setJce_vecGroupInfo:) NSArray *jcev2_p_2_r_vecGroupInfo__b0x9i_VOQLJCEPKGroupInfo; // @synthesize jcev2_p_2_r_vecGroupInfo__b0x9i_VOQLJCEPKGroupInfo;
@property(retain, nonatomic, getter=jce_groupConfigs, setter=setJce_groupConfigs:) NSDictionary *jcev2_p_1_r_groupConfigs__b0x9i_M09ONSNumberONSString; // @synthesize jcev2_p_1_r_groupConfigs__b0x9i_M09ONSNumberONSString;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

