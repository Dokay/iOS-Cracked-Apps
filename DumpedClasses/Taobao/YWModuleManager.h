//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface YWModuleManager : NSObject
{
    NSMutableDictionary *_services;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)loadModuleByLoaderName:(id)arg1 context:(id)arg2;
- (void)removeAllServices;
- (id)allServices;
- (void)removeServiceByName:(id)arg1;
- (void)setService:(id)arg1 withName:(id)arg2;
- (id)getServiceByName:(id)arg1;
- (id)init;

@end

