//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@class NSRecursiveLock;

@interface NTESBugrptBGRSafeMutableArray : NSMutableArray
{
    NSRecursiveLock *_safeLock;
    struct __CFArray *_array;
}

@property(nonatomic) struct __CFArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSRecursiveLock *safeLock; // @synthesize safeLock=_safeLock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unlock;
- (void)lock;
- (void)removeFirstObject;
- (long long)indexOfObject:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeAllObjects;
- (id)lastObject;
- (id)firstObject;
- (void)replaceArrayAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

