//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSofaOrderTripInfoModel;

@protocol SSofaOrderServiceDelegate <NSObject>

@optional
- (void)orderMatchingTooLong;
- (void)tripInfoModel:(SSofaOrderTripInfoModel *)arg1;
- (void)shouldShowPhoneNumber:(_Bool)arg1;
- (void)passagersDidChange;
- (void)tripInfoHasExceptionWithErrorCode:(long long)arg1;
- (void)tripInfoOrderStatusChanged:(long long)arg1;
@end
