//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NeighbourInfoModel : NSObject
{
    unsigned long long _uin;
    double _nLat;
    double _nLon;
    double _dinstance;
    int _sex;
    int _age;
    int _posX;
    int _posY;
    NSString *_nickName;
    int _xo;
}


// Remaining properties
@property(nonatomic) int age; // @dynamic age;
@property(nonatomic) double dinstance; // @dynamic dinstance;
@property(nonatomic) double nLat; // @dynamic nLat;
@property(nonatomic) double nLon; // @dynamic nLon;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) int posX; // @dynamic posX;
@property(nonatomic) int posY; // @dynamic posY;
@property(nonatomic) int sex; // @dynamic sex;
@property(nonatomic) unsigned long long uin; // @dynamic uin;
@end
