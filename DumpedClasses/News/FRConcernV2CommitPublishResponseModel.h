//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRUgcDataStructModel<Optional>, NSNumber, NSString<Optional>;

@interface FRConcernV2CommitPublishResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    FRUgcDataStructModel<Optional> *_thread;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) FRUgcDataStructModel<Optional> *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

