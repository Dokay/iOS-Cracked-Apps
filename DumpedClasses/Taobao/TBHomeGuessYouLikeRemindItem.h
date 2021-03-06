//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBHomeGuessYouLikeRemindItem : TBJSONModel
{
    double _waitTime;
    NSString *_identity;
    double _startTime;
    double _endTime;
    NSString *_itemImage;
    NSString *_guessIcon;
    NSString *_jumpIcon;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSDictionary *_trackInfo;
    NSDictionary *_clickTrackInfo;
}

@property(retain, nonatomic) NSDictionary *clickTrackInfo; // @synthesize clickTrackInfo=_clickTrackInfo;
@property(retain, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSString *jumpIcon; // @synthesize jumpIcon=_jumpIcon;
@property(retain, nonatomic) NSString *guessIcon; // @synthesize guessIcon=_guessIcon;
@property(retain, nonatomic) NSString *itemImage; // @synthesize itemImage=_itemImage;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) double waitTime; // @synthesize waitTime=_waitTime;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

