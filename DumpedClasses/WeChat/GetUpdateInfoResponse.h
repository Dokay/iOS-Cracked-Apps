//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GetUpdateInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *downLoadUrl; // @dynamic downLoadUrl;
@property(retain, nonatomic) NSString *packDescription; // @dynamic packDescription;
@property(retain, nonatomic) NSString *packMd5; // @dynamic packMd5;
@property(nonatomic) unsigned int packSize; // @dynamic packSize;
@property(nonatomic) unsigned int packVersion; // @dynamic packVersion;
@property(retain, nonatomic) NSString *patchInfo; // @dynamic patchInfo;
@property(nonatomic) unsigned int urlCount; // @dynamic urlCount;

@end

