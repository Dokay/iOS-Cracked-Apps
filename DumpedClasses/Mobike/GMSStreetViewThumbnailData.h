//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GMSStreetViewThumbnailData : NSObject
{
    int _width;
    int _height;
    NSString *_panoramaID;
    NSData *_thumbnailData;
}

@property(readonly, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *panoramaID; // @synthesize panoramaID=_panoramaID;
- (void).cxx_destruct;
- (id)initWithProto:(id)arg1 panoramaID:(id)arg2;
- (id)init;

@end
