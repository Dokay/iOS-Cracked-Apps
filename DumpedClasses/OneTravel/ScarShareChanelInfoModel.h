//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface ScarShareChanelInfoModel : TRBaseModel
{
    NSString<Optional> *_share_title;
    NSString<Optional> *_share_msg;
    NSString<Optional> *_share_url;
    NSString<Optional> *_share_logo;
}

@property(retain, nonatomic) NSString<Optional> *share_logo; // @synthesize share_logo=_share_logo;
@property(retain, nonatomic) NSString<Optional> *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString<Optional> *share_msg; // @synthesize share_msg=_share_msg;
@property(retain, nonatomic) NSString<Optional> *share_title; // @synthesize share_title=_share_title;
- (void).cxx_destruct;

@end

