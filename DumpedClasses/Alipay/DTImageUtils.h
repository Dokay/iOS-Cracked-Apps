//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTImageUtils : NSObject
{
}

+ (_Bool)isImageCached:(id)arg1;
+ (void)removeImageFromCacheOfUrl:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)preferImageUrl:(id)arg1 width:(int)arg2 height:(int)arg3 wifiOr3g:(_Bool)arg4;
+ (id)preferImageUrl:(id)arg1 width:(int)arg2 height:(int)arg3 quality:(int)arg4;
+ (id)preferImageUrl:(id)arg1 width:(int)arg2 height:(int)arg3 checkHigerQualityCache:(unsigned char)arg4;
+ (id)preferImageUrl:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (void)getNearestImageSize:(int *)arg1 pHeight:(int *)arg2;
+ (int)preferQuality;

@end
