//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QZJsEventManager : NSObject
{
    NSMutableArray *_observerArray;
}

+ (id)scriptWithEventName:(id)arg1 data:(id)arg2 source:(id)arg3;
+ (_Bool)host:(id)arg1 matchDomainList:(id)arg2;
+ (id)createObserverWith:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
- (void).cxx_destruct;
- (void)cleanNilObserver;
- (void)dispatchEvent:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)onReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end
