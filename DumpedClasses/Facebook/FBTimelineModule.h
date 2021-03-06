//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>

#import "FBFeedOptimisticPostCheckerConfiguringModule-Protocol.h"
#import "FBForceTouchConfiguringModule-Protocol.h"
#import "FBIntentHandlerConfiguringModule-Protocol.h"
#import "FBMenuItemConfiguringModule-Protocol.h"
#import "FBNuxPresenterConfiguringModule-Protocol.h"
#import "FBQPCustomRenderConfiguringModule-Protocol.h"
#import "FBURLSegueConfiguringModule-Protocol.h"
#import "FBUserSessionConfiguringModule-Protocol.h"

@class NSString;

@interface FBTimelineModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBFeedOptimisticPostCheckerConfiguringModule, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBMenuItemConfiguringModule, FBNuxPresenterConfiguringModule, FBURLSegueConfiguringModule, FBUserSessionConfiguringModule, FBQPCustomRenderConfiguringModule>
{
}

+ (id)qpCustomRenderersWithSession:(id)arg1;
+ (struct NSDictionary *)scopedObjects;
+ (id)feedOptimisticStoryPostCheckers;
+ (id)_valiantKnightViewControllerForFBID:(id)arg1 timelineAnalytics:(id)arg2 actionType:(id)arg3 profileType:(id)arg4 friendRequestSendReference:(id)arg5 session:(id)arg6;
+ (id)nuxPresenterFactoriesWithSession:(id)arg1;
+ (id)URLSegues:(id)arg1;
+ (struct NSDictionary *)menuItemHandlers:(id)arg1;
+ (id)forceTouchHandlers:(id)arg1;
+ (id)intentHandlers:(id)arg1 providerMap:(id)arg2;
+ (void)initialize;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 appLinksInfo:(id)arg4 withNavigationCoordinator:(id)arg5;
- (id)ID;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;
- (id)supportedURLSchemes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

