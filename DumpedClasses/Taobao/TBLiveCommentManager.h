//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface TBLiveCommentManager : NSObject
{
    NSMutableArray *_commentCache;
    NSMutableArray *_followCache;
    NSMutableArray *_tradeShowCache;
    NSMutableArray *_giveVoteCache;
    NSObject<OS_dispatch_queue> *_commentQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *commentQueue; // @synthesize commentQueue=_commentQueue;
@property(retain, nonatomic) NSMutableArray *giveVoteCache; // @synthesize giveVoteCache=_giveVoteCache;
@property(retain, nonatomic) NSMutableArray *tradeShowCache; // @synthesize tradeShowCache=_tradeShowCache;
@property(retain, nonatomic) NSMutableArray *followCache; // @synthesize followCache=_followCache;
@property(retain, nonatomic) NSMutableArray *commentCache; // @synthesize commentCache=_commentCache;
- (void).cxx_destruct;
- (void)removeAllModels;
- (void)readGiveVoteShowModel:(CDUnknownBlockType)arg1;
- (void)cacheGiveVoteModel:(id)arg1;
- (void)readTradeShowModel:(CDUnknownBlockType)arg1;
- (void)cacheTradeShowModel:(id)arg1;
- (void)readFollowModel:(CDUnknownBlockType)arg1;
- (void)cacheFollowModel:(id)arg1;
- (void)readCommentModels:(CDUnknownBlockType)arg1;
- (void)cacheCommentModel:(id)arg1;
- (id)init;

@end
