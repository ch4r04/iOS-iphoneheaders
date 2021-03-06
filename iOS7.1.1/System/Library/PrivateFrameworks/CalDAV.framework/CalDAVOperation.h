/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	<CalDAVPrincipal>* _principal;
	bool _isCancellingTaskGroups;
	NSMutableSet* _outstandingTaskGroups;

}

@property (readonly) <CalDAVPrincipal> * principal;                     //@synthesize principal=_principal - In the implementation block
@property (readonly) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/ id)arg1 ;
-(id)principal;
-(void)bailWithError:(id)arg1 ;
-(void)cancelTaskGroup;
-(id)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
@end

