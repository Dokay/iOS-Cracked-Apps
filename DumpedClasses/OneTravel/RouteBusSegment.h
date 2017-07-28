//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RouteSegment.h"

@class NSArray, NSString;

@interface RouteBusSegment : RouteSegment
{
    int type_;
    NSString *name_;
    NSString *direction_;
    NSString *on_;
    NSString *off_;
    long long stopNum_;
    NSString *walkDirection_;
    long long distance_;
    long long time_;
    NSString *onExit_;
    NSString *offExit_;
    long long isTransfer_;
    int tipsType_;
    long long tipsStartNum_;
    long long tipsdNumCount_;
    int _tipsType;
    long long _roadLength;
    long long _tipsStartNum;
    NSArray *_detailSteps;
    NSArray *_stations;
    NSArray *_options;
}

@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *stations; // @synthesize stations=_stations;
@property(retain, nonatomic) NSArray *detailSteps; // @synthesize detailSteps=_detailSteps;
@property(nonatomic) long long tipsStartNum; // @synthesize tipsStartNum=_tipsStartNum;
@property(nonatomic) int tipsType; // @synthesize tipsType=_tipsType;
@property(nonatomic) long long roadLength; // @synthesize roadLength=_roadLength;
@property(nonatomic) long long isTransfer; // @synthesize isTransfer=isTransfer_;
@property(copy, nonatomic) NSString *offExit; // @synthesize offExit=offExit_;
@property(copy, nonatomic) NSString *onExit; // @synthesize onExit=onExit_;
@property(nonatomic) long long time; // @synthesize time=time_;
@property(copy, nonatomic) NSString *walkDirection; // @synthesize walkDirection=walkDirection_;
@property(nonatomic) long long stopNum; // @synthesize stopNum=stopNum_;
@property(copy, nonatomic) NSString *off; // @synthesize off=off_;
@property(copy, nonatomic) NSString *on; // @synthesize on=on_;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=direction_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
@property(nonatomic) int type; // @synthesize type=type_;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
