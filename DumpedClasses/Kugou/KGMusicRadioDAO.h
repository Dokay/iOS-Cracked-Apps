//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface KGMusicRadioDAO : BaseHttpDao
{
}

- (id)requestOneKindRadioClassRadioList:(id)arg1 pageSize:(unsigned long long)arg2 error:(id *)arg3;
- (void)requestBatchPublicRadiosOnlineUsersWithRadioList:(id)arg1 requestType:(int)arg2 error:(id *)arg3;
- (id)requestBatchPublicRadios:(id *)arg1;
- (id)requestRecommendRadios:(id *)arg1;

@end

