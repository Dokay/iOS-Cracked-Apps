//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileDiscoveryPeopleListHeaderEntityComponentToolbox-Protocol.h"
#import "FBProfileDiscoveryPeopleListPeopleCellSectionComponentToolbox-Protocol.h"
#import "FBSectionComponentToolbox-Protocol.h"

@class FBProfileDiscoveryPeopleListFiltersUpdateListenerAnnouncer, FBProfileDiscoveryPeopleListTitleUpdateListenerAnnouncer;

@protocol FBProfileDiscoveryPeopleListSectionComponentToolbox <FBSectionComponentToolbox, FBProfileDiscoveryPeopleListPeopleCellSectionComponentToolbox, FBProfileDiscoveryPeopleListHeaderEntityComponentToolbox>
@property(readonly, nonatomic) FBProfileDiscoveryPeopleListFiltersUpdateListenerAnnouncer *peopleListFiltersUpdateListenerAnnouncer;
@property(readonly, nonatomic) FBProfileDiscoveryPeopleListTitleUpdateListenerAnnouncer *peopleListTitleUpdateListenerAnnouncer;
@end

