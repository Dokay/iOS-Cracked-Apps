//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReadInJoyUGCVideoInfo : NSObject
{
    unsigned int _video_width;
    unsigned int _video_height;
    unsigned int _cover_width;
    unsigned int _cover_height;
    unsigned int _uint32_create_time;
    unsigned int _uint32_busi_type;
    NSString *_video_md5;
    NSString *_video_url;
    NSString *_video_title;
    NSString *_video_uuid;
    unsigned long long _video_duration;
    NSString *_cover_md5;
    NSString *_cover_url;
    NSString *_cover_url_real;
    NSString *_bytes_uniq_id;
    NSString *_bytes_share_url;
    NSString *_bytes_vid;
    NSString *_bytes_video_format;
}

+ (id)ugcVideoInfoFromMsgDecoder:(struct CPBMessageDecoder *)arg1;
@property(copy, nonatomic) NSString *bytes_video_format; // @synthesize bytes_video_format=_bytes_video_format;
@property(copy, nonatomic) NSString *bytes_vid; // @synthesize bytes_vid=_bytes_vid;
@property(nonatomic) unsigned int uint32_busi_type; // @synthesize uint32_busi_type=_uint32_busi_type;
@property(copy, nonatomic) NSString *bytes_share_url; // @synthesize bytes_share_url=_bytes_share_url;
@property(nonatomic) unsigned int uint32_create_time; // @synthesize uint32_create_time=_uint32_create_time;
@property(copy, nonatomic) NSString *bytes_uniq_id; // @synthesize bytes_uniq_id=_bytes_uniq_id;
@property(nonatomic) unsigned int cover_height; // @synthesize cover_height=_cover_height;
@property(nonatomic) unsigned int cover_width; // @synthesize cover_width=_cover_width;
@property(retain, nonatomic) NSString *cover_url_real; // @synthesize cover_url_real=_cover_url_real;
@property(retain, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
@property(retain, nonatomic) NSString *cover_md5; // @synthesize cover_md5=_cover_md5;
@property(nonatomic) unsigned long long video_duration; // @synthesize video_duration=_video_duration;
@property(nonatomic) unsigned int video_height; // @synthesize video_height=_video_height;
@property(nonatomic) unsigned int video_width; // @synthesize video_width=_video_width;
@property(retain, nonatomic) NSString *video_uuid; // @synthesize video_uuid=_video_uuid;
@property(retain, nonatomic) NSString *video_title; // @synthesize video_title=_video_title;
@property(retain, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(retain, nonatomic) NSString *video_md5; // @synthesize video_md5=_video_md5;
- (id)description;
- (void)dealloc;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;

@end

