//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<TTHTTPRequestSerializerProtocol>, NSString, TTHttpRequest, TTRequestModel;

@protocol TTHTTPRequestSerializerProtocol <NSObject>
+ (NSObject<TTHTTPRequestSerializerProtocol> *)serializer;
- (NSString *)userAgentString;
- (TTHttpRequest *)URLRequestWithURL:(NSString *)arg1 headerField:(NSDictionary *)arg2 params:(NSDictionary *)arg3 method:(NSString *)arg4 constructingBodyBlock:(void (^)(id <TTMultipartFormData>))arg5 commonParams:(NSDictionary *)arg6;
- (TTHttpRequest *)URLRequestWithURL:(NSString *)arg1 params:(id)arg2 method:(NSString *)arg3 constructingBodyBlock:(void (^)(id <TTMultipartFormData>))arg4 commonParams:(NSDictionary *)arg5;
- (TTHttpRequest *)URLRequestWithRequestModel:(TTRequestModel *)arg1 commonParams:(NSDictionary *)arg2;
@end

