//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDContentViewProtocol.h"

@class NSString;

@protocol NBContentViewProtocol <PSDContentViewProtocol>
@property(nonatomic) __weak id <NBContentViewPageDelegate> pageDelegate;
@property(copy, nonatomic) NSString *nbl_id;
@property(copy, nonatomic) NSString *channelId;
@property(nonatomic) unsigned long long autoresizingMask;
- (void)contentViewDidClose;
- (void)contentViewDidResume;
- (void)contentViewDidPause;
- (void)contentViewDidLoad;
@end
