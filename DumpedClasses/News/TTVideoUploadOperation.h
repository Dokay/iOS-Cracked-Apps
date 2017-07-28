//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString, TTHttpTask;

@interface TTVideoUploadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    long long _totalSizeOfVideo;
    long long _uploadedSizeOfVideo;
    NSString *_taskID;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _updateVideIdBlock;
    NSString *_videoPath;
    NSString *_uploadURL;
    NSString *_uploadId;
    long long _sizeOfVideoSlice;
    long long _retryCount;
    TTHttpTask *_currentUploadTask;
    NSString *_uploadApiStr;
}

@property(copy, nonatomic) NSString *uploadApiStr; // @synthesize uploadApiStr=_uploadApiStr;
@property(retain, nonatomic) TTHttpTask *currentUploadTask; // @synthesize currentUploadTask=_currentUploadTask;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long sizeOfVideoSlice; // @synthesize sizeOfVideoSlice=_sizeOfVideoSlice;
@property(copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(copy, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) CDUnknownBlockType updateVideIdBlock; // @synthesize updateVideIdBlock=_updateVideIdBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) long long uploadedSizeOfVideo; // @synthesize uploadedSizeOfVideo=_uploadedSizeOfVideo;
@property(nonatomic) long long totalSizeOfVideo; // @synthesize totalSizeOfVideo=_totalSizeOfVideo;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)monitorVideoUploadWithStatus:(unsigned long long)arg1 error:(id)arg2 result:(id)arg3;
- (void)reset;
- (void)done;
- (void)cancel;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)uploadLaterSlicesContinued;
- (void)singleSliceUploadFinishedWithResult:(id)arg1 error:(id)arg2;
- (void)uploadSingleVideoSlice;
- (void)uploadVideoDataWithRangStart:(long long)arg1 rangeEnd:(long long)arg2 fileData:(id)arg3;
- (void)start;
- (void)userOtherUploadApi:(id)arg1;
- (id)initWithVideoPath:(id)arg1 taskID:(id)arg2 uploadId:(id)arg3 updateVideoId:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)dealloc;

@end
