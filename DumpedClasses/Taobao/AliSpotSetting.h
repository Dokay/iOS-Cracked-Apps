//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliSpotSetting : NSObject
{
    _Bool _bElimination;
    long long _itemMaxNum;
}

+ (id)filePath;
+ (id)dirPath;
+ (id)readData;
@property(nonatomic) _Bool bElimination; // @synthesize bElimination=_bElimination;
@property(nonatomic) long long itemMaxNum; // @synthesize itemMaxNum=_itemMaxNum;
- (_Bool)writeToFile;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)handleOrange;
- (void)stopConfigCenter;
- (void)startConfigCenter;

@end

