//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, OKNetRealCall, OKNetResponse;

@interface OKNetAsyncCall : NSOperation
{
    _Bool _executed;
    OKNetRealCall *_that;
    id <OKNetCallbackProtocol> _responseCallback;
    OKNetResponse *_response;
    NSError *_error;
}

+ (id)asyncCall:(id)arg1 responseCallback:(id)arg2;
@property(nonatomic, getter=isExecuted) _Bool executed; // @synthesize executed=_executed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) OKNetResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <OKNetCallbackProtocol> responseCallback; // @synthesize responseCallback=_responseCallback;
@property(retain, nonatomic) OKNetRealCall *that; // @synthesize that=_that;
- (void).cxx_destruct;
- (id)description;
- (void)main;
- (void)execute;
- (void)start;

@end
