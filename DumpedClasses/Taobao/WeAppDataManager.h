//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WeAppBasicServiceDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString, WeAppConfigContext, WeAppDataServiceIntercepter, WeAppExtDataSourceAdapter, WeAppNetwork;

@interface WeAppDataManager : NSObject <WeAppBasicServiceDelegate>
{
    WeAppConfigContext *_configContext;
    WeAppNetwork *_network;
    WeAppExtDataSourceAdapter *_extDataSource;
    id <WeAppDataValueObserverProtocal> _dataObserver;
    NSMutableDictionary *_data;
    NSMutableDictionary *_apiRequestCallbacks;
    NSMutableDictionary *_apiDataChangeCallbacks;
    NSMutableSet *_observerHold;
    NSMutableDictionary *_serviceCache;
    WeAppDataServiceIntercepter *_serviceIntercepter;
}

+ (id)getImmutableArrayFromMutableArray:(id)arg1;
+ (id)getImmutableDictionaryFromMutableDictionary:(id)arg1;
+ (void)resetInstance;
@property(retain, nonatomic) WeAppDataServiceIntercepter *serviceIntercepter; // @synthesize serviceIntercepter=_serviceIntercepter;
@property(retain, nonatomic) NSMutableDictionary *serviceCache; // @synthesize serviceCache=_serviceCache;
@property(retain, nonatomic) NSMutableSet *observerHold; // @synthesize observerHold=_observerHold;
@property(retain, nonatomic) NSMutableDictionary *apiDataChangeCallbacks; // @synthesize apiDataChangeCallbacks=_apiDataChangeCallbacks;
@property(retain, nonatomic) NSMutableDictionary *apiRequestCallbacks; // @synthesize apiRequestCallbacks=_apiRequestCallbacks;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WeAppDataValueObserverProtocal> dataObserver; // @synthesize dataObserver=_dataObserver;
@property(retain, nonatomic) WeAppExtDataSourceAdapter *extDataSource; // @synthesize extDataSource=_extDataSource;
@property(retain, nonatomic) WeAppNetwork *network; // @synthesize network=_network;
@property(nonatomic) __weak WeAppConfigContext *configContext; // @synthesize configContext=_configContext;
- (void).cxx_destruct;
- (void)didRequestValueBackForApiRequestPath:(id)arg1 withObserve:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)didRequestValueBackForApiRequestPath:(id)arg1;
- (void)didChangeValueForApiRequestPath:(id)arg1 withObserve:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)didChangeValueForApiRequestPath:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidStartLoad:(id)arg1;
- (void)dealloc;
- (id)getStringWithApiRequestPath:(id)arg1 apiAlias:(id)arg2;
- (id)getStringWithApiRequestPath:(id)arg1 apiAlias:(id)arg2 andParam:(id)arg3;
- (void)addObserver:(id)arg1 forApiRequestPath:(id)arg2 serviceType:(long long)arg3 dataBinding:(id)arg4;
- (_Bool)needLoadDataWithDataBinding:(id)arg1;
- (void)removeObjectRecurFromArray:(id)arg1 andIndex:(unsigned long long)arg2 withDataSource:(id)arg3;
- (void)setObject:(id)arg1 recurFromArray:(id)arg2 andIndex:(unsigned long long)arg3 withDataSource:(id)arg4;
- (long long)getCorrectArrayKey:(id)arg1;
- (id)getObjectRecurFromArray:(id)arg1 andIndex:(unsigned long long)arg2 withDataSource:(id)arg3;
- (_Bool)needTrimKeyChains:(id)arg1;
- (_Bool)serviceDidRequestWithDataBinding:(id)arg1;
- (_Bool)didAddObserver:(id)arg1 stringPath:(id)arg2;
- (void)removeObserver:(id)arg1 stringPath:(id)arg2;
- (void)removeObserver:(id)arg1 dataBinding:(id)arg2;
- (long long)getServiceListStatusWithDataBinding:(id)arg1 withOptions:(long long)arg2;
- (void)serviceListRefreshWithDataBinding:(id)arg1;
- (void)serviceListNextPageWithDataBinding:(id)arg1;
- (void)addObserver:(id)arg1 serviceType:(long long)arg2 dataBinding:(id)arg3 needHoldOn:(_Bool)arg4;
- (void)addObserver:(id)arg1 serviceType:(long long)arg2 stringPath:(id)arg3;
- (void)addObserver:(id)arg1 serviceType:(long long)arg2 dataBinding:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setData:(id)arg1 withKey:(id)arg2;
- (void)setupDataWithDictionay:(id)arg1;
- (id)getDataPool;
- (id)getDataWithKey:(id)arg1;
- (id)getObjectFromString:(id)arg1;
- (id)getObjectFromString:(id)arg1 dictionary:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
