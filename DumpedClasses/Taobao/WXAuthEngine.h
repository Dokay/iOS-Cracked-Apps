//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WopcAuthManager;

@interface WXAuthEngine : NSObject
{
    WopcAuthManager *_authManager;
}

+ (void)doComponentValidationForLicense:(id)arg1 contex:(id)arg2;
+ (void)doModuleAuthForLicense:(id)arg1 contex:(id)arg2;
+ (void)doAuthWithContex:(id)arg1 needRefreshToken:(_Bool)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) WopcAuthManager *authManager; // @synthesize authManager=_authManager;
- (void).cxx_destruct;

@end
