//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QAVRoomMulti : NSObject
{
    unsigned int _roomId;
}

@property(readonly, nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
- (id)getStatisticsParam;
- (id)GetQualityParam;
- (id)getQualityTips;
- (void)unlinkRoom:(CDUnknownBlockType)arg1;
- (void)linkRoom:(unsigned int)arg1 identifier:(id)arg2 authBuff:(id)arg3 ret:(CDUnknownBlockType)arg4;
- (void)ChangeAVControlRole:(id)arg1 delegate:(id)arg2;
- (id)GetEndpointById:(id)arg1;
- (id)GetEndpointList;
- (long long)cancelAudioList;
- (long long)requestAudioList:(id)arg1;
- (void)cancelAllview:(CDUnknownBlockType)arg1;
- (void)requestViewList:(id)arg1 srcTypeList:(id)arg2 ret:(CDUnknownBlockType)arg3;

@end

