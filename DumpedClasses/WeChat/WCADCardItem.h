//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCADCardItem : NSObject <NSCoding>
{
    NSString *cardTpId;
    NSString *cardExt;
}

@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

