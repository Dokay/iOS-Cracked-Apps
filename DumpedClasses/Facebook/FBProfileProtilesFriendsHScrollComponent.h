//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBProfileTileBasicInfo, FBProtileAnalyticsInfo, NSArray;
@protocol FBProfileTileSectionComponentToolbox;

@interface FBProfileProtilesFriendsHScrollComponent : CKCompositeComponent
{
    FBProfileTileBasicInfo *_model;
    NSArray *_friends;
    id <FBProfileTileSectionComponentToolbox> _toolbox;
    FBProtileAnalyticsInfo *_protileAnalyticsInfo;
}

+ (id)newWithInfo:(id)arg1 friends:(id)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (struct CKComponentExpansionTargetInformation)expansionInformation;

@end

