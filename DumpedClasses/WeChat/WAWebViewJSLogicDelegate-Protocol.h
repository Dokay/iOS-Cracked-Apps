//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAWebViewPluginScheduler;

@protocol WAWebViewJSLogicDelegate <NSObject>

@optional
- (_Bool)isNewYearMode;
- (_Bool)isOpenDebugAndVConsole;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 handler:(void (^)(void))arg2 failHandler:(void (^)(NSString *))arg3;
- (_Bool)checkRunModeOnWebview:(NSString *)arg1;
- (_Bool)hasPermissionWithJSAPI:(NSString *)arg1 getState:(unsigned int *)arg2;
- (_Bool)useVConsole;
- (WAWebViewPluginScheduler *)getPluginScheduler;
- (NSString *)getCurrentAppId;
- (void)onInjectJSSuccess;
@end

