//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSOContainer : NSObject
{
    CDUnknownBlockType _block;
    id <SDCGIServiceDelegate> _delegate;
    NSString *_cgiName;
}

@property(copy, nonatomic) NSString *cgiName; // @synthesize cgiName=_cgiName;
@property(nonatomic) __weak id <SDCGIServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)perform:(int)arg1 errorMsg:(id)arg2 data:(id)arg3;

@end
