/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface OTAXPCServiceConnection : NSObject {

	NSObject<OS_xpc_object>* _conn;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
-(BOOL)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char*)arg2 ;
-(id)serviceName;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
@end
