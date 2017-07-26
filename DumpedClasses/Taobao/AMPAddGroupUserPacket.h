//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSArray, NSString;

@interface AMPAddGroupUserPacket : AMPNetPacket
{
    NSArray *_listId;
    NSString *_cCode;
    unsigned long long _identity;
}

@property(nonatomic) unsigned long long identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *cCode; // @synthesize cCode=_cCode;
@property(retain, nonatomic) NSArray *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithList:(id)arg1 cCode:(id)arg2 identity:(unsigned long long)arg3;

@end
