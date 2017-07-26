//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol DBProtocol <NSObject>

@optional
+ (_Bool)isIgnoredProperty:(NSString *)arg1;
+ (NSDictionary *)ORMDBArrayProperties;
+ (NSDictionary *)ORMDBBeLinkedProperties;
+ (_Bool)ORMDBNeedBeLinked;
+ (NSString *)ORMDBprimaryKey;
+ (NSArray *)ORMDBIgnoredProperties;
+ (NSString *)ORMDBPath;
+ (NSString *)ORMDBTableName;
@end
