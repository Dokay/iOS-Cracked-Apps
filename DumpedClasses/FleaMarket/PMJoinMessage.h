//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PMMessage.h"

@class PMJoinNotify;

@interface PMJoinMessage : PMMessage
{
    PMJoinNotify *_info;
}

@property(retain, nonatomic) PMJoinNotify *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)fromDictionary:(id)arg1;
- (id)toDictionary;
- (void)fromMKTInfoMessage:(id)arg1;

@end

