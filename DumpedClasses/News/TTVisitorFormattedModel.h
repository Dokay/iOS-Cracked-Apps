//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber;

@interface TTVisitorFormattedModel : NSObject
{
    _Bool _has_more;
    NSNumber *_cursor;
    long long _list_count;
    long long _visit_device_count;
    long long _visit_count_total;
    long long _visit_count_recent;
    NSMutableArray *_users;
}

+ (id)formattedModelFromVisitorModel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(nonatomic) long long visit_count_recent; // @synthesize visit_count_recent=_visit_count_recent;
@property(nonatomic) long long visit_count_total; // @synthesize visit_count_total=_visit_count_total;
@property(nonatomic) long long visit_device_count; // @synthesize visit_device_count=_visit_device_count;
@property(nonatomic) long long list_count; // @synthesize list_count=_list_count;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool has_more; // @synthesize has_more=_has_more;
- (void).cxx_destruct;
- (_Bool)hasNotLoginVisitor;
- (_Bool)hasHistoryVisitor;
- (id)init;

@end
