//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCCardLayoutItem : MMObject <PBCoding>
{
    NSString *cardID;
    NSString *announceMent;
    unsigned int layoutEndTime;
    unsigned int itemType;
}

+ (void)initialize;
@property(nonatomic) unsigned int itemType; // @synthesize itemType;
@property(nonatomic) unsigned int layoutEndTime; // @synthesize layoutEndTime;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(retain, nonatomic) NSString *cardID; // @synthesize cardID;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

