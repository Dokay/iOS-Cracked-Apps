//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSString;

@interface MOBILECSAShopPhotoQueryRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_photoType;
}

@property(retain, nonatomic) NSString *photoType; // @synthesize photoType=_photoType;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end
