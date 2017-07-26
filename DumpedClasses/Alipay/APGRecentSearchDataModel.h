//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface APGRecentSearchDataModel : NSObject <NSCopying>
{
    long long _rowid;
    NSString *_primaryKey;
    NSString *_additionPrimaryKey;
    NSString *_matchField;
    NSString *_matchValue;
    NSString *_title;
    NSString *_tableName;
    NSString *_keyword;
    NSString *_groupKey;
    NSString *_indexName;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
@property(retain, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *matchValue; // @synthesize matchValue=_matchValue;
@property(retain, nonatomic) NSString *matchField; // @synthesize matchField=_matchField;
@property(retain, nonatomic) NSString *additionPrimaryKey; // @synthesize additionPrimaryKey=_additionPrimaryKey;
@property(retain, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
@property(nonatomic) long long rowid; // @synthesize rowid=_rowid;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isPrimaryKeyMatch:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualWithLocalSearchResultItem:(id)arg1;
- (id)init;

@end
