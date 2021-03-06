//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XYPHMessageActivitiesCellAdapter : NSObject
{
    NSMutableDictionary *_cellHeightDict;
}

@property(retain, nonatomic) NSMutableDictionary *cellHeightDict; // @synthesize cellHeightDict=_cellHeightDict;
- (void).cxx_destruct;
- (void)computeCellHeightWithModel:(id)arg1;
- (void)setCell:(id)arg1 withModel:(id)arg2;
- (void)clearHeightCache;
- (void)setBoardCell:(id)arg1 withModel:(id)arg2;
- (void)setNoteCell:(id)arg1 withModel:(id)arg2;
- (void)setTextCell:(id)arg1 withModel:(id)arg2;
- (double)cellHeightForModel:(id)arg1;
- (id)init;

@end

