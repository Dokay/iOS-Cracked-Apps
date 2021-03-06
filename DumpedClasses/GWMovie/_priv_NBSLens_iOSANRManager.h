//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@class NSMutableArray;

@interface _priv_NBSLens_iOSANRManager : NSLock
{
    NSMutableArray *_entitys;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *entitys; // @synthesize entitys=_entitys;
- (void).cxx_destruct;
- (void)cacheANRDataToDisk:(id)arg1;
- (void)postANRDataToServer;
- (_Bool)cacheDataIsValidFromTimePoint:(double)arg1;
- (id)getUploadData;
- (void)logANREntity:(id)arg1;
- (id)init;

@end

