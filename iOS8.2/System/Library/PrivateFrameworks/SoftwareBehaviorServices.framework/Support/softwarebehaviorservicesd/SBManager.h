/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBManager : NSObject
+(id)sharedInstance;
-(char)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 ;
-(char)isSoftwareBehaviorBundleSupported;
-(id)copySoftwareBehaviorValue:(id)arg1 ;
-(char)checkForSoftwareBehaviorBundleUpdate;
-(void)dealloc;
-(id)init;
@end
