//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NVMBreakfastBuildingAdRequest : NSObject
{
    long long _cityId;
    NSArray *_adsPositionIds;
}

@property(retain, nonatomic) NSArray *adsPositionIds; // @synthesize adsPositionIds=_adsPositionIds;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (id)initWithCityId:(long long)arg1;

@end
