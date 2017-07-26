//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAWebActionSheetDelegate.h"

@class NSString, WAWebActionSheet, WAWebViewPlugin_InputKeyboard;

@interface WAJSEventHandler_showActionSheet : WAJSEventHandler_BaseEvent <WAWebActionSheetDelegate>
{
    WAWebActionSheet *_actionSheet;
    WAWebViewPlugin_InputKeyboard *_keyboardPlugin;
}

@property(nonatomic) __weak WAWebViewPlugin_InputKeyboard *keyboardPlugin; // @synthesize keyboardPlugin=_keyboardPlugin;
@property(retain, nonatomic) WAWebActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (void)onSelected:(long long)arg1;
- (void)onCancel;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

