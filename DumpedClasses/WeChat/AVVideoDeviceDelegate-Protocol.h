//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVVideoDevice, NSError;

@protocol AVVideoDeviceDelegate <NSObject>

@optional
- (void)videoDevice:(AVVideoDevice *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoDeviceSessionFinished:(AVVideoDevice *)arg1;
- (void)videoDeviceSessionBegan:(AVVideoDevice *)arg1;
- (void)videoDeviceCameraBack:(AVVideoDevice *)arg1;
- (void)videoDeviceCameraFront:(AVVideoDevice *)arg1;
@end

