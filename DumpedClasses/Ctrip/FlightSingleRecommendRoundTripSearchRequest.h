//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightSingleRecommendRoundTripSearchRequest : CTBusinessBean
{
    NSString *_departCityCode;
    NSString *_arriveCityCode;
    NSString *_startDate;
    NSString *_flightNo;
    NSString *_subClass;
    PriceType *_price;
    NSString *_extendString;
}

@property(copy, nonatomic) NSString *extendString; // @synthesize extendString=_extendString;
@property(retain, nonatomic) PriceType *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *subClass; // @synthesize subClass=_subClass;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *arriveCityCode; // @synthesize arriveCityCode=_arriveCityCode;
@property(copy, nonatomic) NSString *departCityCode; // @synthesize departCityCode=_departCityCode;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
