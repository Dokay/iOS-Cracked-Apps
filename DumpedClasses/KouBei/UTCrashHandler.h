//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UTICrashCaughtListener;

@interface UTCrashHandler : NSObject
{
    id <UTICrashCaughtListener> mCrashListener;
    _Bool _finishPump;
    _Bool _isDebug;
}

+ (id)baiduInputInfo;
+ (id)objectToString:(id)arg1;
+ (id)sogouInputInfo;
+ (id)appPath;
+ (id)MD5ForNSString:(id)arg1;
+ (void)logException:(id)arg1 andCallStack:(id)arg2;
+ (id)getBackTrace;
+ (void)enableCrashHandler:(long long)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) _Bool finishPump; // @synthesize finishPump=_finishPump;
- (void).cxx_destruct;
- (void)customRunloop;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)crashHandle:(id)arg1;
- (id)getCrashCaughtListener;
- (void)setCrashCaughtListener:(id)arg1;

@end

