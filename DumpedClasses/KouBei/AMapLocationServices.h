//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMapLocationServices : NSObject
{
    NSString *_internalStatisticsServerAddress;
    NSString *_internalSearchServerAddress;
    NSString *_apiKey;
}

+ (id)sharedServices;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchServerAddress;
@property(readonly, nonatomic) NSString *statisticsServerAddress;
@property(readonly, nonatomic) NSString *SDKNumberVersion;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSString *SDKVersion;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (id)init;

@end

