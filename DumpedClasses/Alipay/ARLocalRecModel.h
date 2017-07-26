//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ARLocalRecModel : NSObject
{
    _Bool _isPreviewMode;
    NSString *_cloudId;
    NSString *_md5;
    NSString *_resJson;
    NSString *_recPreviewPath;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *recPreviewPath; // @synthesize recPreviewPath=_recPreviewPath;
@property(copy, nonatomic) NSString *resJson; // @synthesize resJson=_resJson;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
- (void).cxx_destruct;
- (void)cleanPreviewModel;
- (void)cleanRecModel:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appendRecModelWithCloudID:(id)arg1 md5:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)datPathFromStorePath:(id)arg1;
- (void)startDownload:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *recPackPath;
@property(readonly, copy, nonatomic) NSString *recRootPath;

@end
