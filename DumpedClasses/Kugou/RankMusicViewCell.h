//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMusicTableViewCell.h"

@class KGThemeLabel, UIImageView;

@interface RankMusicViewCell : KGMusicTableViewCell
{
    KGThemeLabel *_cellIndexNumber;
    UIImageView *_cellIndexNumberBgImgView;
}

@property(retain, nonatomic) UIImageView *cellIndexNumberBgImgView; // @synthesize cellIndexNumberBgImgView=_cellIndexNumberBgImgView;
@property(retain, nonatomic) KGThemeLabel *cellIndexNumber; // @synthesize cellIndexNumber=_cellIndexNumber;
- (void).cxx_destruct;
- (void)refreshViewNormalView:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

