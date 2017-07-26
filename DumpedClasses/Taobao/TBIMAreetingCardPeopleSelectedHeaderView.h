//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBIMAreetingCardPeopleSelectedSearchBar, UILabel;

@interface TBIMAreetingCardPeopleSelectedHeaderView : UIView
{
    TBIMAreetingCardPeopleSelectedSearchBar *_searchBar;
    UILabel *_titleLabel;
    UIView *_searchBarBackgroundView;
}

+ (id)tbContactHeaderViewWithSearchBarDelegate:(id)arg1;
@property(retain, nonatomic) UIView *searchBarBackgroundView; // @synthesize searchBarBackgroundView=_searchBarBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBIMAreetingCardPeopleSelectedSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)shrinkSearchBarFrameWithAnimation:(_Bool)arg1;
- (void)extendSearchBarFrameWithAnimation:(_Bool)arg1;
- (void)updateSearchBarViewAndTitleViewAlpha:(double)arg1;
- (void)close:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchBarDelegate:(id)arg2;

@end
