//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface DYCModuleManager : NSObject
{
    NSMutableArray *_mutableModules;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *mutableModules; // @synthesize mutableModules=_mutableModules;
- (void).cxx_destruct;
- (void)unloadAndRemoveModulesForBundle:(id)arg1;
- (id)moduleForBundle:(id)arg1 ofClass:(Class)arg2;
- (void)removeModule:(id)arg1;
- (void)addModule:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allModules;
- (id)init;

@end
