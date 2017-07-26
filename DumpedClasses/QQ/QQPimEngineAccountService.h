//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QQPimEngineAccountService : NSObject
{
    unsigned long long _cloudContactCount;
    NSString *_uin;
    long long _type;
    long long _authenticationState;
    NSString *_sid;
    NSData *_R2;
    NSData *_T3;
}

@property(copy, nonatomic) NSData *T3; // @synthesize T3=_T3;
@property(copy, nonatomic) NSData *R2; // @synthesize R2=_R2;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) long long authenticationState; // @synthesize authenticationState=_authenticationState;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(readonly, nonatomic) unsigned long long cloudContactCount; // @synthesize cloudContactCount=_cloudContactCount;
- (int)parseRespData:(id)arg1;
- (id)requestData;
- (void)asyncRequestStatsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)generateR1;
- (int)parseAuthenticationRespData:(id)arg1 withR1:(id)arg2;
- (id)authenticationRequestDataWithR1:(id)arg1;
- (void)authenticationWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)parseLoginRespData:(id)arg1;
- (void)doLoginReq:(id)arg1;
- (void)verifyAccountWithAccount:(id)arg1 byA2Key:(id)arg2;
- (void)setupPersistentAccount:(id)arg1 accountType:(long long)arg2 withPimSID:(id)arg3;
- (void)logout;
- (_Bool)isLogon;
- (void)clear;
- (void)dealloc;
- (id)init;

@end
