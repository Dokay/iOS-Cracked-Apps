//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMDynamicComponentDescriptor : NSObject
{
    Class _componentClass;
    NSString *_componentClassString;
    NSString *_componentTypeString;
}

@property(copy, nonatomic) NSString *componentTypeString; // @synthesize componentTypeString=_componentTypeString;
@property(copy, nonatomic) NSString *componentClassString; // @synthesize componentClassString=_componentClassString;
@property(retain, nonatomic) Class componentClass; // @synthesize componentClass=_componentClass;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end
