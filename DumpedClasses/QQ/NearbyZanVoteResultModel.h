//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface NearbyZanVoteResultModel : QQModel
{
    int _ret;
    NSString *_errMsg;
    long long _tinyId;
    long long _uin;
    int _voteCount;
    int _succFreeVoteCount;
    int _succPayVoteCount;
    long long _payStock;
    int _xo;
}


// Remaining properties
@property(copy, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(nonatomic) long long payStock; // @dynamic payStock;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) int succFreeVoteCount; // @dynamic succFreeVoteCount;
@property(nonatomic) int succPayVoteCount; // @dynamic succPayVoteCount;
@property(nonatomic) long long tinyId; // @dynamic tinyId;
@property(nonatomic) long long uin; // @dynamic uin;
@property(nonatomic) int voteCount; // @dynamic voteCount;
@end
