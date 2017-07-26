//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface TBFavoriteGoodSearchView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _searchBlock;
    CDUnknownBlockType _cancelBlock;
    NSString *_keyword;
    UIView *_inputTextFieldContainer;
    UITextField *_inputTextField;
    UIButton *_clearTextButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *clearTextButton; // @synthesize clearTextButton=_clearTextButton;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UIView *inputTextFieldContainer; // @synthesize inputTextFieldContainer=_inputTextFieldContainer;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType searchBlock; // @synthesize searchBlock=_searchBlock;
- (void).cxx_destruct;
- (void)configViews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)clearTextButtonClicked:(id)arg1;
- (void)stopInputting;
- (void)startInputting;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
