//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMArManagerDelegate.h"

@class ARViewPrepareOptions, InsightARViewController, MMArManager, NSProgress, NSString;

@interface InsightARManager : NSObject <MMArManagerDelegate>
{
    MMArManager *_mmArManager;
    NSProgress *_downloadProgress;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _pickCallback;
    CDUnknownBlockType _downloadProgressBlock;
    InsightARViewController *_arViewController;
    ARViewPrepareOptions *_prepareOptions;
}

+ (id)shareManager;
@property(retain, nonatomic) ARViewPrepareOptions *prepareOptions; // @synthesize prepareOptions=_prepareOptions;
@property(retain, nonatomic) InsightARViewController *arViewController; // @synthesize arViewController=_arViewController;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType pickCallback; // @synthesize pickCallback=_pickCallback;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) MMArManager *mmArManager; // @synthesize mmArManager=_mmArManager;
- (void).cxx_destruct;
- (void)showModel;
- (void)checkProductStatus:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)removeResource:(id)arg1;
- (id)getMarkerName;
- (void)arManager:(id)arg1 result:(id)arg2;
- (void)stopInsightAR;
- (void)checkDownloadStatus:(id)arg1 error:(CDUnknownBlockType)arg2 result:(CDUnknownBlockType)arg3;
- (void)getProductSize:(id)arg1 productList:(CDUnknownBlockType)arg2 result:(CDUnknownBlockType)arg3;
- (void)getUpdateTime:(id)arg1 productList:(CDUnknownBlockType)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)isPermitted;
- (void)prepareARViewWithOptions:(id)arg1 downloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 updateBlock:(CDUnknownBlockType)arg4 pickCallback:(CDUnknownBlockType)arg5;
- (id)getARView;
- (void)registerAppKey:(id)arg1 appSecret:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
