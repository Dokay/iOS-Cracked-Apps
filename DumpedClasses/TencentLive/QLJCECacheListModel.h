//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class MoabCache, NSMutableArray, NSString, QLJCEGetCacheListResponse;

@interface QLJCECacheListModel : QLPageDataBaseModel
{
    MoabCache *_cahce;
    _Bool _hasPreviousPage;
    _Bool _isNeedMultipleChoice;
    int _pullDirection;
    int _uiType;
    NSString *_lid;
    NSString *_cid;
    NSString *_vid;
    NSString *_definition;
    unsigned long long _requestType;
    NSString *_cacheDataKey;
    NSString *_name;
    NSString *_downloadRightName;
    NSString *_returnDefinition;
    NSMutableArray *_returnDefinitionList;
    NSMutableArray *_preCacheItems;
    NSString *_preCacheText;
    NSString *_previousPageContext;
    unsigned long long _maxItemsCountPerRequestPage;
    QLJCEGetCacheListResponse *_jceResp;
    NSString *_lastPageContext;
}

@property(copy, nonatomic) NSString *lastPageContext; // @synthesize lastPageContext=_lastPageContext;
@property(retain, nonatomic) QLJCEGetCacheListResponse *jceResp; // @synthesize jceResp=_jceResp;
@property(nonatomic) _Bool isNeedMultipleChoice; // @synthesize isNeedMultipleChoice=_isNeedMultipleChoice;
@property unsigned long long maxItemsCountPerRequestPage; // @synthesize maxItemsCountPerRequestPage=_maxItemsCountPerRequestPage;
@property(copy, nonatomic) NSString *previousPageContext; // @synthesize previousPageContext=_previousPageContext;
@property(nonatomic) _Bool hasPreviousPage; // @synthesize hasPreviousPage=_hasPreviousPage;
@property(copy, nonatomic) NSString *preCacheText; // @synthesize preCacheText=_preCacheText;
@property(retain, nonatomic) NSMutableArray *preCacheItems; // @synthesize preCacheItems=_preCacheItems;
@property(retain, nonatomic) NSMutableArray *returnDefinitionList; // @synthesize returnDefinitionList=_returnDefinitionList;
@property(copy, nonatomic) NSString *returnDefinition; // @synthesize returnDefinition=_returnDefinition;
@property(copy, nonatomic) NSString *downloadRightName; // @synthesize downloadRightName=_downloadRightName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property int uiType; // @synthesize uiType=_uiType;
@property int pullDirection; // @synthesize pullDirection=_pullDirection;
@property(copy, nonatomic) NSString *cacheDataKey; // @synthesize cacheDataKey=_cacheDataKey;
@property unsigned long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (unsigned long long)fectchMaxCountPerPageForCurrenScreen;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end
