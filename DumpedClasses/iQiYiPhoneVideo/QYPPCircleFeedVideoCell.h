//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPCircleFeedBaseCell.h"

@class QYPPFeedVideoView;

@interface QYPPCircleFeedVideoCell : QYPPCircleFeedBaseCell
{
    QYPPFeedVideoView *_videoView;
}

@property(retain, nonatomic) QYPPFeedVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (id)canPlayVideo;
- (id)playVideoView;
- (id)virtualGetUploadProgressText:(id)arg1;
- (void)virtualLayoutElementContent:(id)arg1;
- (void)virtualAssignElementContent:(id)arg1;
- (void)virtualResetElementContent;
- (void)virtualCreateSubElements;

@end

