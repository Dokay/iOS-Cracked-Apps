//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMHouseMatchStateModel : NSObject
{
    _Bool _isGIF;
    double _topInsetMutiplier;
    NSString *_title;
    NSString *_subTitlte;
    NSString *_imageURL;
    struct UIEdgeInsets _insets;
}

@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool isGIF; // @synthesize isGIF=_isGIF;
@property(copy, nonatomic) NSString *subTitlte; // @synthesize subTitlte=_subTitlte;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double topInsetMutiplier; // @synthesize topInsetMutiplier=_topInsetMutiplier;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;

@end

