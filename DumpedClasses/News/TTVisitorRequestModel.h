//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;

@interface TTVisitorRequestModel : TTRequestModel
{
    NSNumber *_cursor;
    NSNumber *_count;
    NSString *_user_id;
}

@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) NSNumber *count; // @synthesize count=_count;
@property(nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)_requestParams;
- (void)initDefaultParams;
- (id)init;

@end
