/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SPSpotlightManager : NSObject {

	NSString* _displayID;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)eraseIndexForApplication:(id)arg1 category:(id)arg2 ;
-(void)application:(id)arg1 modifiedRecordIDs:(id)arg2 forCategory:(id)arg3 ;
-(void)_processIdentifiers:(id)arg1 forApplication:(id)arg2 andCategory:(id)arg3 ;
-(void)appModifiedRecordIDs:(id)arg1 forCategory:(id)arg2 ;
@end

