/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWAccessory.h>

@interface SWRemote : SWAccessory {

	char _isListeningToRemote;

}

@property (nonatomic,readonly) char isListeningToRemote;              //@synthesize isListeningToRemote=_isListeningToRemote - In the implementation block
-(void)beginListeningToRemoteCommands;
-(void)stopListeningToRemoteCommands;
-(char)isListeningToRemote;
@end
