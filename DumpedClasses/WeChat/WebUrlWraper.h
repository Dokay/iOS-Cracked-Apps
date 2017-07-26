//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WebUrlWraper : NSObject
{
    NSString *_url;
    NSString *_domain;
    NSString *_protocol;
    NSString *_md5OfQuery;
    NSString *_md5WithoutScheme;
    NSString *_md5WithoutSchemeAndQuery;
    NSString *_md5WithoutQuery;
}

@property(retain, nonatomic) NSString *md5WithoutQuery; // @synthesize md5WithoutQuery=_md5WithoutQuery;
@property(retain, nonatomic) NSString *md5WithoutSchemeAndQuery; // @synthesize md5WithoutSchemeAndQuery=_md5WithoutSchemeAndQuery;
@property(retain, nonatomic) NSString *md5WithoutScheme; // @synthesize md5WithoutScheme=_md5WithoutScheme;
@property(retain, nonatomic) NSString *md5OfQuery; // @synthesize md5OfQuery=_md5OfQuery;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1;

@end

