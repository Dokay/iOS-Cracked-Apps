//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTBaseOperation.h"

@interface DTSubmitDeviceTokenForPushOperation : DTBaseOperation
{
}

+ (id)pushNetworkType;
+ (id)platformString;
- (id)initFromToken:(id)arg1 toServer:(id)arg2;
- (id)_prepareRequest;
- (void)_prepareChannelInfo:(id)arg1;
- (void)_prepareNetworkType:(id)arg1;

@end

