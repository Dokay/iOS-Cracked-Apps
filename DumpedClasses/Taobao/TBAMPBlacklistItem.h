//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBAMPBlacklistItem : NSObject
{
    NSString *_iconUrlString;
    NSString *_userId;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *iconUrlString; // @synthesize iconUrlString=_iconUrlString;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

