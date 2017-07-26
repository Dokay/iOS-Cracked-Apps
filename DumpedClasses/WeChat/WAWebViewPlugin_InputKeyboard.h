//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WATextInputDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, WACustomKeyboard, WAJSEventHandler_BaseEvent;

@interface WAWebViewPlugin_InputKeyboard : WAWebViewPlugin_embedView <UIGestureRecognizerDelegate, UIScrollViewDelegate, WATextInputDelegate>
{
    double _toolBarHeight;
    long long _orientation;
    NSMutableDictionary *_textInputs;
    double _keyboardHeight;
    _Bool _keyboardDidShow;
    _Bool _forceAdjustView;
    _Bool _viewDisappear;
    _Bool _canShowKeyboard;
    double _offset;
    _Bool _modalMask;
    _Bool _durationSwith;
    _Bool _systemKeyboard;
    id <InputKeyboardDelegate> _inputDelegate;
    id <WATextInputInterface> _field;
    WACustomKeyboard *_customKeyboard;
    NSDictionary *_delayParam;
    WAJSEventHandler_BaseEvent *_handler;
}

@property(retain, nonatomic) WAJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *delayParam; // @synthesize delayParam=_delayParam;
@property(retain, nonatomic) WACustomKeyboard *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
@property(nonatomic) _Bool systemKeyboard; // @synthesize systemKeyboard=_systemKeyboard;
@property(nonatomic) _Bool durationSwith; // @synthesize durationSwith=_durationSwith;
@property(retain, nonatomic) id <WATextInputInterface> field; // @synthesize field=_field;
@property(nonatomic) _Bool modalMask; // @synthesize modalMask=_modalMask;
@property(nonatomic) __weak id <InputKeyboardDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (void).cxx_destruct;
- (double)getContentHeight:(unsigned int)arg1;
- (long long)getLineCount:(unsigned int)arg1;
- (_Bool)onReturn:(id)arg1;
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id)arg3;
- (void)onCaretBreak;
- (void)didValueChange:(id)arg1 pos:(long long)arg2 input:(id)arg3;
- (void)onFocus:(id)arg1;
- (_Bool)updateTextArea:(id)arg1;
- (_Bool)removeTextArea:(unsigned int)arg1;
- (unsigned int)insertTextArea:(id)arg1;
- (_Bool)updateTextField:(id)arg1;
- (void)onDone;
- (void)hideKeyBoard;
- (void)onKeyboardDidHide:(id)arg1;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (_Bool)keyboardVisible;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)adjustViewPosition:(_Bool)arg1;
- (void)didRotate:(id)arg1;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (void)showCustomKeyboard:(long long)arg1 confirmButton:(_Bool)arg2;
- (void)showSystemKeyboard:(_Bool)arg1;
- (void)setSystemKeyboardMode:(_Bool)arg1;
- (void)switchEmojiKeyBoard;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showKeyboardForExistInput:(id)arg1;
- (long long)getConfirmButton:(id)arg1;
- (void)addNotifications;
- (void)onKeyboardDidReady;
- (void)showKeyBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

