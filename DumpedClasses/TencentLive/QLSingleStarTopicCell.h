//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLJCEStarTopicInfo, QLTopicInfoTagView;

@interface QLSingleStarTopicCell : UICollectionViewCell
{
    QLJCEStarTopicInfo *_topicInfo;
    QLTopicInfoTagView *_tagView;
}

+ (double)heightWithTopicInfo:(id)arg1;
@property(retain, nonatomic) QLTopicInfoTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) QLJCEStarTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
