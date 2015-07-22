/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDetector;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
-(oneway void)release;
@end
