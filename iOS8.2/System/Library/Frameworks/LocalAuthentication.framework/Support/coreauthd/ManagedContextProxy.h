/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/LAContextXPC.h>

@class ManagedContext, NSDictionary, NSData;

@interface ManagedContextProxy : NSObject <LAContextXPC> {

	ManagedContext* _managedContext;
	NSDictionary* _constInfo;
	NSData* _externalizedACMContext;

}

@property (retain) ManagedContext * managedContext;                //@synthesize managedContext=_managedContext - In the implementation block
@property (readonly) NSDictionary * constInfo;                     //@synthesize constInfo=_constInfo - In the implementation block
@property (readonly) NSData * externalizedACMContext;              //@synthesize externalizedACMContext=_externalizedACMContext - In the implementation block
-(NSDictionary *)constInfo;
-(NSData *)externalizedACMContext;
-(ManagedContext *)managedContext;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 barrier:(/*^block*/id)arg3 hasSPIEntitlement:(char)arg4 hasPIDEntitlement:(char)arg5 reply:(/*^block*/id)arg6 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 barrier:(/*^block*/id)arg4 hasSPIEntitlement:(char)arg5 hasPIDEntitlement:(char)arg6 reply:(/*^block*/id)arg7 ;
-(void)validateACL:(id)arg1 hasSPIEntitlement:(char)arg2 hasPIDEntitlement:(char)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithManagedContext:(id)arg1 ;
-(void)setManagedContext:(ManagedContext *)arg1 ;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

