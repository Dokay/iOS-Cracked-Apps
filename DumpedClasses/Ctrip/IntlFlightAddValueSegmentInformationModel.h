//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface IntlFlightAddValueSegmentInformationModel : CTBusinessBean
{
    int segmentNo;
    NSString *title;
    NSString *subTitle;
    NSMutableArray *noteList;
    NSMutableArray *productList;
}

@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList;
@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int segmentNo; // @synthesize segmentNo;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
