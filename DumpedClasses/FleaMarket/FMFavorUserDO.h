//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMFavorUserDO : NSObject
{
    _Bool _hasWeibo;
    _Bool _lastObject;
    NSString *_userId;
    NSString *_userNick;
    NSArray *_topTagList;
    NSString *_gender;
    NSString *_info;
    NSString *_icon;
    NSString *_subInfo;
}

@property(nonatomic) _Bool lastObject; // @synthesize lastObject=_lastObject;
@property(copy, nonatomic) NSString *subInfo; // @synthesize subInfo=_subInfo;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) _Bool hasWeibo; // @synthesize hasWeibo=_hasWeibo;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSArray *topTagList; // @synthesize topTagList=_topTagList;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

