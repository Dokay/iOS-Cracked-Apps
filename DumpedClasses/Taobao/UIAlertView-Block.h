//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

@interface UIAlertView (Block)
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (long long)showModal;
- (void)showWithSucceed:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)showWithCancel:(CDUnknownBlockType)arg1;
- (void)showWithSucceed:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
@end

