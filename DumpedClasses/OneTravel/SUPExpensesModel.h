//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUPBaseModel.h"

@class NSNumber, NSString;

@interface SUPExpensesModel : SUPBaseModel
{
    NSNumber *_type;
    NSString *_name;
    NSNumber *_amount;
    NSString *_amountDesc;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *amountDesc; // @synthesize amountDesc=_amountDesc;
@property(retain, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
