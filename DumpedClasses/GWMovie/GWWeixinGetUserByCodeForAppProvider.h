//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWWeixinGetUserByCodeForAppProvider : GWBaseInfoProvider
{
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)requestWithWeixinGetUserByCodeForAppHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

