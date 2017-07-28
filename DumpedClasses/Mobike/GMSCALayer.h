//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSSet;

@interface GMSCALayer : CALayer
{
    NSSet *_propertiesToForward;
    _Bool _assignToDelegate;
    CALayer *_wrapped;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)propertiesToForward;
@property(readonly, nonatomic) _Bool assignToDelegate; // @synthesize assignToDelegate=_assignToDelegate;
@property(retain, nonatomic) CALayer *wrapped; // @synthesize wrapped=_wrapped;
- (void).cxx_destruct;
- (id)updatePropertyAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)display;
- (id)presentationLayer;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)unwrapValue:(id)arg1 forKey:(id)arg2;
- (id)wrapValue:(id)arg1 forKey:(id)arg2;
- (id)wrappedValueForKey:(id)arg1;
- (void)wrappedSetValue:(id)arg1 forKey:(id)arg2;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end
