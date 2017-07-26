//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QShape.h"

@interface QMultiPoint : QShape
{
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    CDStruct_02837cd9 _boundingRect;
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (void)calculateBoundingMapRect;

@end

