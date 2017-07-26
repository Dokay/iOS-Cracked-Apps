//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTTourTTDMapUserFilterInfo, NSArray, NSDictionary, NSMutableArray;

@interface CTTourTTDMapFilterView : UIView
{
    _Bool _haveResidence;
    id <CTTourTTDMapFilterViewDelegate> _delegate;
    CTTourTTDMapUserFilterInfo *_filterInfo;
    NSArray *_genderTypes;
    NSArray *_decadeTypes;
    NSArray *_departureTypes;
    NSArray *_journeyTypes;
    NSDictionary *_filterGenderDic;
    NSDictionary *_filterDecadeDic;
    NSDictionary *_filterDepartureDic;
    NSDictionary *_filterJourneyDic;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_filterTopBarView;
    UIView *_filterContentView;
    UIView *_residenceTipView;
    UIView *_filterContentGenderView;
    UIView *_filterContentDecadeView;
    UIView *_filterContentDepartureView;
    UIView *_filterContentJourneyView;
    NSMutableArray *_filterGenderButtons;
    NSMutableArray *_filterDecadeButtons;
    NSMutableArray *_filterDepartureButtons;
    NSMutableArray *_filterJourneyButtons;
}

@property(retain, nonatomic) NSMutableArray *filterJourneyButtons; // @synthesize filterJourneyButtons=_filterJourneyButtons;
@property(retain, nonatomic) NSMutableArray *filterDepartureButtons; // @synthesize filterDepartureButtons=_filterDepartureButtons;
@property(retain, nonatomic) NSMutableArray *filterDecadeButtons; // @synthesize filterDecadeButtons=_filterDecadeButtons;
@property(retain, nonatomic) NSMutableArray *filterGenderButtons; // @synthesize filterGenderButtons=_filterGenderButtons;
@property(retain, nonatomic) UIView *filterContentJourneyView; // @synthesize filterContentJourneyView=_filterContentJourneyView;
@property(retain, nonatomic) UIView *filterContentDepartureView; // @synthesize filterContentDepartureView=_filterContentDepartureView;
@property(retain, nonatomic) UIView *filterContentDecadeView; // @synthesize filterContentDecadeView=_filterContentDecadeView;
@property(retain, nonatomic) UIView *filterContentGenderView; // @synthesize filterContentGenderView=_filterContentGenderView;
@property(retain, nonatomic) UIView *residenceTipView; // @synthesize residenceTipView=_residenceTipView;
@property(retain, nonatomic) UIView *filterContentView; // @synthesize filterContentView=_filterContentView;
@property(retain, nonatomic) UIView *filterTopBarView; // @synthesize filterTopBarView=_filterTopBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSDictionary *filterJourneyDic; // @synthesize filterJourneyDic=_filterJourneyDic;
@property(retain, nonatomic) NSDictionary *filterDepartureDic; // @synthesize filterDepartureDic=_filterDepartureDic;
@property(retain, nonatomic) NSDictionary *filterDecadeDic; // @synthesize filterDecadeDic=_filterDecadeDic;
@property(retain, nonatomic) NSDictionary *filterGenderDic; // @synthesize filterGenderDic=_filterGenderDic;
@property(retain, nonatomic) NSArray *journeyTypes; // @synthesize journeyTypes=_journeyTypes;
@property(retain, nonatomic) NSArray *departureTypes; // @synthesize departureTypes=_departureTypes;
@property(retain, nonatomic) NSArray *decadeTypes; // @synthesize decadeTypes=_decadeTypes;
@property(retain, nonatomic) NSArray *genderTypes; // @synthesize genderTypes=_genderTypes;
@property(nonatomic) _Bool haveResidence; // @synthesize haveResidence=_haveResidence;
@property(retain, nonatomic) CTTourTTDMapUserFilterInfo *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(nonatomic) __weak id <CTTourTTDMapFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1 withFilterInfo:(id)arg2 haveResidence:(_Bool)arg3;
- (void)residenceTipButtonClicked:(id)arg1;
- (void)journeyButtonClicked:(id)arg1;
- (void)departureButtonClicked:(id)arg1;
- (void)decadeButtonClicked:(id)arg1;
- (void)genderButtonClicked:(id)arg1;
- (void)resetButtonClicked:(id)arg1;
- (void)sureButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)backgroundViewTapped:(id)arg1;
- (void)updateJourneyButtonStatus;
- (void)updateDepartureButtonStatus;
- (void)updateDecadeButtonStatus;
- (void)updateGenderButtonStatus;
- (void)updateButtonStatusWithButton:(id)arg1 isSelcted:(_Bool)arg2;
- (id)createButtonWithTitle:(id)arg1;
- (id)createBottomLine;
- (id)createTitleLabelWithTitle:(id)arg1;
- (id)createContentJourneyView;
- (id)createContentResidenceTipView;
- (id)createContentDepartureView;
- (id)createContentDecadeView;
- (id)createContentGenderView;
- (void)initFilterContentView;
- (void)initFilterTopBarView;
- (void)initContentView;
- (void)initBackgroundView;
- (void)initFilterStyleDic;
- (void)initFilterInfos;
- (id)initWithFrame:(struct CGRect)arg1;

@end
