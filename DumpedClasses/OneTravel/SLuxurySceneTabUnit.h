//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSceneTabCom.h"

@interface SLuxurySceneTabUnit : SSceneTabCom
{
}

- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)willSelectItemAtIndex:(unsigned long long)arg1;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (long long)indexForType:(long long)arg1;
- (long long)specSceneTabForShareType:(long long)arg1;
- (id)tabsArray;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;
- (_Bool)canSendOrder;
- (void)reloadEstimate;
- (_Bool)isShowSceneTabfly;

@end
