//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface Q2DDownloader : NSObject
{
    double _downloadTimeout;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_HTTPHeaderFields;
}

+ (id)sharedDownloader;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaderFields; // @synthesize HTTPHeaderFields=_HTTPHeaderFields;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)downloadWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2 cancelled:(CDUnknownBlockType)arg3;
- (void)setSuspended:(_Bool)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(nonatomic) long long maxConcurrentOperationCount;
- (id)requestForURL:(id)arg1;

@end

