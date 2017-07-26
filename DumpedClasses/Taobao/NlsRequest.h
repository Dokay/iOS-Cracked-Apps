//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NlsRequestContext, RequestSet;

@interface NlsRequest : NSObject
{
    _Bool _bstream_attached;
    NSString *_version;
    NSString *_app_key;
    NSString *_session_id;
    NSString *_id;
    RequestSet *_requests;
    NlsRequestContext *_context;
    NSString *_clientIp;
    NSString *_requestTime;
}

+ (id)getObjectData:(id)arg1;
+ (id)getObjectInternal:(id)arg1;
+ (id)getJSONString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)getJSONStringfromNlsRequest:(id)arg1;
@property(copy, nonatomic) NSString *requestTime; // @synthesize requestTime=_requestTime;
@property(copy, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(retain, nonatomic) NlsRequestContext *context; // @synthesize context=_context;
@property(retain, nonatomic) RequestSet *requests; // @synthesize requests=_requests;
@property(nonatomic) _Bool bstream_attached; // @synthesize bstream_attached=_bstream_attached;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *session_id; // @synthesize session_id=_session_id;
@property(copy, nonatomic) NSString *app_key; // @synthesize app_key=_app_key;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)Authorize:(id)arg1 withSecret:(id)arg2 withGMTDate:(id)arg3;
- (id)getGMTFormatDate:(id)arg1;
- (void)Authorize:(id)arg1 withSecret:(id)arg2;
- (void)setupRequest:(id)arg1;
- (void)setLocationInfoWithLongitude:(id)arg1 latitude:(id)arg2 country:(id)arg3 provience:(id)arg4 city:(id)arg5 area:(id)arg6 street:(id)arg7;
- (id)initWithRequestProto:(id)arg1;
- (void)setRequestsExtUserInWith:(id)arg1 and:(id)arg2;
- (void)setTtsRequest:(id)arg1 sampleRate:(id)arg2;
- (void)setTtsPitchRate:(long long)arg1;
- (void)setTtsPronRefer:(id)arg1;
- (void)setTtsVoice:(id)arg1;
- (void)setTtsNus:(long long)arg1;
- (void)setTtsVolume:(long long)arg1;
- (void)setTtsSpeechRate:(long long)arg1;
- (void)setTtsSampleRate:(id)arg1;
- (void)setTtsEncodeType:(id)arg1;
- (void)setTtsText:(id)arg1;
- (void)setGdsRequest;
- (void)setGdsRequestType:(id)arg1 content:(id)arg2;
- (void)setDsRequest;
- (void)setDsRequestType:(id)arg1 content:(id)arg2;
- (void)setXyInRequest:(id)arg1;
- (void)setAsrOutRequest:(id)arg1;
- (void)setAsrOrganizationId:(id)arg1;
- (void)setAsrVocabularyId:(id)arg1;
- (void)setAsrUserId:(id)arg1;
- (void)setAsrResponseMode:(id)arg1;
- (void)setAsrRequest:(id)arg1;
- (void)setAsrRequest;
- (void)setNlsRequestId:(id)arg1;
- (void)setBstreamAttached:(_Bool)arg1;
- (void)setAppkey:(id)arg1;
- (id)createTimeSP;
- (id)createUUID;
- (id)init;

@end
