//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMAutoFmSetting : NSObject
{
    _Bool _sysBackLinkAutoPlayEnable;
    _Bool _stereoEnabled;
    NSString *_fmFreq;
}

@property(nonatomic) _Bool stereoEnabled; // @synthesize stereoEnabled=_stereoEnabled;
@property(nonatomic) _Bool sysBackLinkAutoPlayEnable; // @synthesize sysBackLinkAutoPlayEnable=_sysBackLinkAutoPlayEnable;
@property(retain, nonatomic) NSString *fmFreq; // @synthesize fmFreq=_fmFreq;
- (void).cxx_destruct;
- (id)init;

@end
