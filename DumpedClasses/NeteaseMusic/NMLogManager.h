//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NSInvocationOperation, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString, UIViewController;

@interface NMLogManager : NSObject <NMHttpRequestDelegate>
{
    NSOperationQueue *_saveOperationQueue;
    NSInvocationOperation *_saveOperation;
    NSOperationQueue *_addEntryOperationQueue;
    NSObject<OS_dispatch_semaphore> *_uniqueEventBrowseCodeLock;
    NSString *_uniqueEventBrowseCode;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSObject<OS_dispatch_semaphore> *_uploadLock;
    NSMutableArray *_uploadFileList;
    UIViewController *_currentShowingViewController;
}

+ (id)defaultManager;
@property(nonatomic) __weak UIViewController *currentShowingViewController; // @synthesize currentShowingViewController=_currentShowingViewController;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)uploadOneToServer:(id)arg1;
- (void)continueUpload;
- (void)doUploadOne;
- (void)checkUploadLog;
- (_Bool)zipFile:(id)arg1;
- (_Bool)needZipFile:(id)arg1;
- (void)updateUniqueEventBrowseCode;
- (id)uniqueEventBrowseCode;
- (void)addEventsLog:(id)arg1 json:(id)arg2;
- (void)addNotificationLogArray:(id)arg1;
- (void)clearFile;
- (id)getFilePath;
- (id)getFile;
- (_Bool)needToSend;
- (void)writeLogFile;
- (void)saveFileInOperation;
- (void)cancelSaveFileOperation;
- (void)saveFile;
- (void)saveFileInMainThread;
- (void)addErrorLog:(id)arg1 code:(id)arg2 otherMsg:(id)arg3;
- (void)addHTTPErrorLogWithHttpResponseCode:(long long)arg1 networkStatus:(long long)arg2 nsErrorCode:(long long)arg3 nsErrorString:(id)arg4 url:(id)arg5 timeout:(double)arg6;
- (void)addEntryInOperation:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)addLogAction:(id)arg1 toArrayWithJson:(id)arg2;
- (void)addLog:(id)arg1 json:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

