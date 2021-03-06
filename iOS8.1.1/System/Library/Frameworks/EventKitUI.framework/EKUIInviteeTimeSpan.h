/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/NSCopying.h>

@class NSDate, NSMutableArray;

@interface EKUIInviteeTimeSpan : NSObject <NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSMutableArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(NSMutableArray *)conflictedParticipants;
-(void)setConflictedParticipants:(NSMutableArray *)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

