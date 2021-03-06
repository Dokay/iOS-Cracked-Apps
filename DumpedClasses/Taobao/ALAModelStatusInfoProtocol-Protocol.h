//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, UIView;

@protocol ALAModelStatusInfoProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType errorCallBackBlock;
- (void)removeErrorFromView:(UIView *)arg1;
- (void)showError:(NSError *)arg1 inView:(UIView *)arg2 frame:(struct CGRect)arg3;
- (void)showNetworkResponseErrorInView:(UIView *)arg1 frame:(struct CGRect)arg2;
- (void)showEmptyContentInView:(UIView *)arg1 frame:(struct CGRect)arg2;
- (void)hideLoadingInView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)showLoadingInView:(UIView *)arg1 text:(NSString *)arg2 animated:(_Bool)arg3;
- (void)showToastInView:(UIView *)arg1 text:(NSString *)arg2;
@end

