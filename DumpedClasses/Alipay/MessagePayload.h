//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MessagePayload : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasMFrom;
    _Bool _hasMType;
    _Bool _hasMSendType;
    _Bool _hasMSum;
    _Bool _hasMData;
    _Bool _hasBTime;
    _Bool _hasBMsgId;
    _Bool _hasPublicBizType;
    _Bool _hasLifeTemplateId;
    _Bool _hasContentId;
    NSString *_mFrom;
    NSString *_mType;
    NSString *_mSendType;
    NSString *_mSum;
    NSString *_mData;
    long long _bTime;
    NSString *_bMsgId;
    NSString *_publicBizType;
    NSString *_lifeTemplateId;
    NSString *_contentId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *lifeTemplateId; // @synthesize lifeTemplateId=_lifeTemplateId;
@property(retain, nonatomic) NSString *publicBizType; // @synthesize publicBizType=_publicBizType;
@property(retain, nonatomic) NSString *bMsgId; // @synthesize bMsgId=_bMsgId;
@property(nonatomic) long long bTime; // @synthesize bTime=_bTime;
@property(retain, nonatomic) NSString *mData; // @synthesize mData=_mData;
@property(retain, nonatomic) NSString *mSum; // @synthesize mSum=_mSum;
@property(retain, nonatomic) NSString *mSendType; // @synthesize mSendType=_mSendType;
@property(retain, nonatomic) NSString *mType; // @synthesize mType=_mType;
@property(retain, nonatomic) NSString *mFrom; // @synthesize mFrom=_mFrom;
@property(readonly) _Bool hasContentId; // @synthesize hasContentId=_hasContentId;
@property(readonly) _Bool hasLifeTemplateId; // @synthesize hasLifeTemplateId=_hasLifeTemplateId;
@property(readonly) _Bool hasPublicBizType; // @synthesize hasPublicBizType=_hasPublicBizType;
@property(readonly) _Bool hasBMsgId; // @synthesize hasBMsgId=_hasBMsgId;
@property(readonly) _Bool hasBTime; // @synthesize hasBTime=_hasBTime;
@property(readonly) _Bool hasMData; // @synthesize hasMData=_hasMData;
@property(readonly) _Bool hasMSum; // @synthesize hasMSum=_hasMSum;
@property(readonly) _Bool hasMSendType; // @synthesize hasMSendType=_hasMSendType;
@property(readonly) _Bool hasMType; // @synthesize hasMType=_hasMType;
@property(readonly) _Bool hasMFrom; // @synthesize hasMFrom=_hasMFrom;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

