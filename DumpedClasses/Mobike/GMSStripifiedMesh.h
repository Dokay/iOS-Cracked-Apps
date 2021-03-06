//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSFeature.h"

@class GMSRenderOpInfo, NSArray, NSString;

@interface GMSStripifiedMesh : NSObject <GMSFeature>
{
    vector_b547f507 _vertices;
    vector_1a85bb8f _normals;
    vector_e0f2bd7e _edgeIndices;
    vector_e0f2bd7e _normalIndices;
    short _rank;
    unsigned int _attributes;
    GMSRenderOpInfo *_renderOpInfo;
    NSArray *_strips;
    struct StyleID _stylingID;
}

+ (id)unpackedWithProto:(id)arg1 wireContext:(id)arg2;
@property(readonly, nonatomic) unsigned int attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) short rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) struct StyleID stylingID; // @synthesize stylingID=_stylingID;
@property(readonly, nonatomic) NSArray *strips; // @synthesize strips=_strips;
@property(readonly, nonatomic) GMSRenderOpInfo *renderOpInfo; // @synthesize renderOpInfo=_renderOpInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isClickable;
- (int)type;
@property(readonly, copy) NSString *description;
- (unsigned long long)numberOfEdges;
- (unsigned long long)numberOfTriangles;
- (_Bool)isSmoothShaded;
- (_Bool)hasIndoorData;
- (STLRange_5078e726)normals;
- (STLRange_4dbe973e)vertices;
- (STLRange_9491c893)normalIndices;
- (STLRange_9491c893)edgeIndices;
- (id)initWithRenderOpInfo:(id)arg1 vertices:(vector_b547f507 *)arg2 strips:(id)arg3 edgeIndices:(vector_e0f2bd7e *)arg4 normals:(vector_1a85bb8f *)arg5 normalIndices:(vector_e0f2bd7e *)arg6 stylingID:(const struct StyleID *)arg7 rank:(short)arg8 attributes:(unsigned int)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

