//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBUYERToString.h"

@class NSDictionary, NSString;

@interface MBUYEROrderInfo : MBUYERToString
{
    NSString *_templateId;
    NSString *_templateJson;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;

@end
