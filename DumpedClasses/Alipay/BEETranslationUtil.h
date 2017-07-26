//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BEETranslationUtil : NSObject
{
    NSMutableDictionary *_completionDict;
    NSMutableDictionary *_timeDict;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharInstance;
- (void).cxx_destruct;
- (void)removeTaskObserver:(id)arg1;
- (void)callTimeoutCompletion:(id)arg1;
- (_Bool)checkTimeOut:(id)arg1;
- (void)checkTimeOutTask:(id)arg1;
- (void)addTimerObserver:(id)arg1;
- (id)getNowDateTime;
- (long long)getNowLocalTime;
- (id)generatePreferredLanguage;
- (void)cancelTranslateVoiceWithAudioId:(id)arg1 bizType:(id)arg2;
- (void)callCompletionWithUuid:(id)arg1 result:(id)arg2 isFinalResult:(id)arg3 resultCode:(id)arg4 timestamp:(id)arg5;
- (void)receiveSyncData:(id)arg1;
- (void)translateVoiceWithAudioId:(id)arg1 bizType:(id)arg2 audioType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateText:(id)arg1 targetLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)translateText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkRegularExpression:(id)arg1 withText:(id)arg2;
- (_Bool)isNeeedTranslate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
