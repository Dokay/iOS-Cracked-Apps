//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionRequestMiddleware.h"

@class NSString;

@interface TBWangWangURLActionRequestMiddleware : NSObject <TBURLActionRequestMiddleware>
{
    NSString *_currentUniqueKey;
}

+ (id)shareService;
@property(retain, nonatomic) NSString *currentUniqueKey; // @synthesize currentUniqueKey=_currentUniqueKey;
- (void).cxx_destruct;
- (void)checkIsNeedRecommendationFriendWithUrl:(id)arg1;
- (id)processURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
