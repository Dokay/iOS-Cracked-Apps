//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface QQGroupRobotAIOSession : NSObject
{
    double _timeoutInterval;
    _Bool _active;
    unsigned long long _groupCode;
    UIViewController *_aioViewController;
    id <QQGroupRobotAIOSessionDelegate> _delegate;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <QQGroupRobotAIOSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *aioViewController; // @synthesize aioViewController=_aioViewController;
@property(readonly, nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGroupCode:(unsigned long long)arg1 timeoutInterval:(double)arg2;

@end
