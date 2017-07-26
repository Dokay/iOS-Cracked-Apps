//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class COMCOMLocationInfo, NSString;

@interface COMReplyReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *clientReplyId; // @dynamic clientReplyId;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *feedId; // @dynamic feedId;
@property(readonly) _Bool hasClientReplyId; // @dynamic hasClientReplyId;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasFeedId; // @dynamic hasFeedId;
@property(readonly) _Bool hasParentReplyId; // @dynamic hasParentReplyId;
@property(readonly) _Bool hasParentReplyUserId; // @dynamic hasParentReplyUserId;
@property(readonly) _Bool hasRealLocation; // @dynamic hasRealLocation;
@property(readonly) _Bool hasUserAvatar; // @dynamic hasUserAvatar;
@property(readonly) _Bool hasUserName; // @dynamic hasUserName;
@property(retain, nonatomic) NSString *parentReplyId; // @dynamic parentReplyId;
@property(retain, nonatomic) NSString *parentReplyUserId; // @dynamic parentReplyUserId;
@property(retain, nonatomic) COMCOMLocationInfo *realLocation; // @dynamic realLocation;
@property(retain, nonatomic) NSString *userAvatar; // @dynamic userAvatar;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end
