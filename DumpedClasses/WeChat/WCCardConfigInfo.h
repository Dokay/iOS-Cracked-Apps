//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCCardConfigInfo : MMObject <PBCoding>
{
    _Bool isShowShoppingMall;
    NSString *emptyTips;
    NSString *shoppingMallTitle;
    NSString *shoppingMallUrl;
}

+ (void)initialize;
@property(nonatomic) _Bool isShowShoppingMall; // @synthesize isShowShoppingMall;
@property(retain, nonatomic) NSString *shoppingMallUrl; // @synthesize shoppingMallUrl;
@property(retain, nonatomic) NSString *shoppingMallTitle; // @synthesize shoppingMallTitle;
@property(retain, nonatomic) NSString *emptyTips; // @synthesize emptyTips;
- (void).cxx_destruct;
- (void)parseFromJSONStr:(id)arg1;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

