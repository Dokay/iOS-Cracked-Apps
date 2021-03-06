//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface FBImmersiveCaptureMotionManager : NSObject
{
    union _GLKQuaternion zeroAttitudeOffset;
    _Bool hasZeroAttitudeOffset;
    CMMotionManager *_motionManager;
}

+ (union _GLKQuaternion)GLKFromCMQuaternion:(CDStruct_d2b197d1)arg1;
+ (union _GLKQuaternion)determineMappedAxesQuaternion:(long long)arg1;
+ (double)imuUpdateInterval;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (CDStruct_39925896)angularVelocity;
- (_Bool)getRelativeAttitude:(union _GLKQuaternion *)arg1;
- (_Bool)getGravityAlignedAttitude:(union _GLKQuaternion *)arg1;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (id)init;

@end

