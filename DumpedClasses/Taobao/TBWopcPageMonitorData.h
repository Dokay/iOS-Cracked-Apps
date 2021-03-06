//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBWopcPageMonitorData : NSObject
{
    NSString *_url;
    double _startTime;
    double _endTime;
    NSDictionary *_dimensions;
    NSDictionary *_measures;
}

@property(retain, nonatomic) NSDictionary *measures; // @synthesize measures=_measures;
@property(retain, nonatomic) NSDictionary *dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isComplete;
- (id)initWithURLStr:(id)arg1;

@end

