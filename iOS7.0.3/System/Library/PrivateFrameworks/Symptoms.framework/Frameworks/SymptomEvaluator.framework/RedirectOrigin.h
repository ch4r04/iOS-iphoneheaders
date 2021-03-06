/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString, RedirectDestination;

@interface RedirectOrigin : NSObject {

	unsigned timestamp;
	unsigned destInstance;
	NSString* URLRef;
	RedirectDestination* destination;
	queueElement* localQueueEntry;
	queueElement* globalQueueEntry;

}

@property (assign,nonatomic) unsigned timestamp; 
@property (assign,nonatomic) unsigned destInstance; 
@property (nonatomic,retain) RedirectDestination * destination; 
@property (nonatomic,retain) NSString * URLRef; 
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)timestamp;
-(void)setTimestamp:(unsigned)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(void)remove;
-(void)setURLRef:(id)arg1 ;
-(void)setDestInstance:(unsigned)arg1 ;
-(void)addToGlobalQueue;
-(void)addToDestQueue;
-(void)removeFromDestQueue;
-(id)URLRef;
-(unsigned)destInstance;
-(void)updateTime:(unsigned)arg1 destInstance:(unsigned)arg2 ;
-(void)removeFromGlobalQueue;
-(void).cxx_destruct;
@end

