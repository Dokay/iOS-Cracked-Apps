//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmojiBoardView, NSString, UIButton;

@protocol EmojiBoardViewDelegate <NSObject>

@optional
- (void)emojiBoardView:(EmojiBoardView *)arg1 ActionSend:(UIButton *)arg2;
- (void)emojiBoardViewDeleteEmoji;
- (void)emojiBoardView:(EmojiBoardView *)arg1 didSelectedAtIndex:(unsigned long long)arg2 withEmojicoder:(NSString *)arg3;
@end

