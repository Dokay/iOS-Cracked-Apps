//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APDPBMessageInfo : NSObject
{
    int tag;
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        _Bool _field4;
        id _field5;
        id _field6;
        CDUnion_9d145f3c _field7;
        id _field8;
    } *fieldInfoPB;
    CDUnion_9d145f3c baseType;
    _Bool _hasValue;
    id _valueOC;
}

@property(retain, nonatomic) id valueOC; // @synthesize valueOC=_valueOC;
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=_hasValue;
- (void).cxx_destruct;
- (void)addPBValue:(id)arg1;
- (void)setPBValue:(id)arg1;
- (void)setPBValueWithStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)description;

@end
