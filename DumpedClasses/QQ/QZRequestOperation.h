//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

@interface QZRequestOperation : QZBaseOperation
{
    long long _requestID;
}

- (id)engineFromCommand:(id)arg1;
- (void)notifyError:(struct JceObjectV2 *)arg1 error:(id)arg2;
- (void)notifySuccess:(struct JceObjectV2 *)arg1;
- (void)onRetryFailed:(struct JceObjectV2 *)arg1;
- (void)retryRequestIfNeeded:(struct JceObjectV2 *)arg1 error:(id)arg2;
- (void)request:(struct JceObjectV2 *)arg1 didFailWithError:(id)arg2;
- (void)cancelJob:(_Bool)arg1;
- (void)sendRequest;
- (void)execute;

@end
