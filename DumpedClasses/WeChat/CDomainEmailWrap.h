//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CDomainEmailWrap : NSObject <NSCoding>
{
    NSString *m_nsDomainEmail;
    unsigned int m_uiStatus;
}

@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsDomainEmail; // @synthesize m_nsDomainEmail;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

