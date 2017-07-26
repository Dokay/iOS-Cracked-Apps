//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTURLRequestHandler.h"

@class NSArray, NSCache, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLCache, RCTBridge;

@interface RCTImageLoader : NSObject <RCTBridgeModule, RCTURLRequestHandler>
{
    NSArray *_loaders;
    NSArray *_decoders;
    NSOperationQueue *_imageDecodeQueue;
    NSObject<OS_dispatch_queue> *_URLCacheQueue;
    NSURLCache *_URLCache;
    NSCache *_decodedImageCache;
    NSMutableArray *_pendingTasks;
    long long _activeTasks;
    NSMutableArray *_pendingDecodes;
    long long _scheduledDecodes;
    unsigned long long _activeBytes;
    RCTBridge *_bridge;
    unsigned long long _maxConcurrentLoadingTasks;
    unsigned long long _maxConcurrentDecodingTasks;
    unsigned long long _maxConcurrentDecodingBytes;
}

+ (void)load;
+ (id)moduleName;
@property(nonatomic) unsigned long long maxConcurrentDecodingBytes; // @synthesize maxConcurrentDecodingBytes=_maxConcurrentDecodingBytes;
@property(nonatomic) unsigned long long maxConcurrentDecodingTasks; // @synthesize maxConcurrentDecodingTasks=_maxConcurrentDecodingTasks;
@property(nonatomic) unsigned long long maxConcurrentLoadingTasks; // @synthesize maxConcurrentLoadingTasks=_maxConcurrentLoadingTasks;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (CDUnknownBlockType)getImageSizeForURLRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)decodeImageData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (CDUnknownBlockType)loadImageOrDataWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dequeueTasks;
- (CDUnknownBlockType)loadImageWithURLRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)imageDataDecoderForData:(id)arg1;
- (id)imageURLLoaderForURL:(id)arg1;
- (void)dealloc;
- (void)setUp;
- (CDUnknownBlockType)getImageSize:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)decodeImageDataWithoutClipping:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)decodeImageData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)loadImageWithoutClipping:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)loadImageWithTag:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)loadImageWithTag:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end
