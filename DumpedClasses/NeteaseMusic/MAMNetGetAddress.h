//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MAMNetGetAddress : NSObject
{
}

+ (id)formatIPV4Address:(struct in_addr)arg1;
+ (id)formatIPV6Address:(struct in6_addr)arg1;
+ (id)outPutDNSServers;
+ (id)getIPV6DNSWithHostName:(id)arg1;
+ (id)getIPV4DNSWithHostName:(id)arg1;
+ (id)getDNSsWithDormain:(id)arg1;
+ (id)getGatewayIPV6Address;
+ (id)getGatewayIPV4Address;
+ (id)getGatewayIPAddress;
+ (id)deviceIPAdress;

@end
